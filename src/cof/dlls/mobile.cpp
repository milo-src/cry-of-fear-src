/***
*
*	Copyright (c) 1996-2002, Valve LLC. All rights reserved.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "weapons.h"
#include "nodes.h"
#include "player.h"
#include "gamerules.h"

LINK_ENTITY_TO_CLASS( weapon_mobile, CMobile )

#define MOBILE_PUNCH_RANGE 42.0f
#define MOBILE_PUNCH_DAMAGE 10.0f
#define MOBILE_ATTACK_DELAY 0.6f

#ifndef CLIENT_DLL
extern int gmsgFlashlight;
extern void FindHullIntersection( const Vector &vecSrc, TraceResult &tr, float *mins, float *maxs, edict_t *pEntity );

static void COF_SetMobileFlashlight( CBasePlayer *pPlayer, BOOL enabled )
{
	if( !pPlayer )
		return;

	if( enabled && pPlayer->m_iFlashBattery <= 0 )
		enabled = FALSE;

	if( enabled )
		SetBits( pPlayer->pev->effects, EF_DIMLIGHT );
	else
		ClearBits( pPlayer->pev->effects, EF_DIMLIGHT );

	MESSAGE_BEGIN( MSG_ONE, gmsgFlashlight, NULL, pPlayer->pev );
		WRITE_BYTE( enabled ? 1 : 0 );
		WRITE_BYTE( pPlayer->m_iFlashBattery );
	MESSAGE_END();

	// Cry of Fear's phone is its own light source. Do not let the vanilla
	// suit flashlight rules or recharge timer fight the phone mode.
	pPlayer->m_flFlashLightTime = 0.0f;
}

static BOOL COF_MobilePunchTrace( CBasePlayer *pPlayer )
{
	TraceResult tr;

	UTIL_MakeVectors( pPlayer->pev->v_angle );
	Vector vecSrc = pPlayer->GetGunPosition();
	Vector vecEnd = vecSrc + gpGlobals->v_forward * MOBILE_PUNCH_RANGE;

	UTIL_TraceLine( vecSrc, vecEnd, dont_ignore_monsters, ENT( pPlayer->pev ), &tr );
	if( tr.flFraction >= 1.0f )
	{
		UTIL_TraceHull( vecSrc, vecEnd, dont_ignore_monsters, head_hull, ENT( pPlayer->pev ), &tr );
		if( tr.flFraction < 1.0f )
		{
			CBaseEntity *pHit = CBaseEntity::Instance( tr.pHit );
			if( !pHit || pHit->IsBSPModel() )
				FindHullIntersection( vecSrc, tr, VEC_DUCK_HULL_MIN, VEC_DUCK_HULL_MAX, pPlayer->edict() );
			vecEnd = tr.vecEndPos;
		}
	}

	if( tr.flFraction >= 1.0f )
	{
		EMIT_SOUND_DYN( ENT( pPlayer->pev ), CHAN_ITEM, "weapons/mobile/punch_swing.wav", 0.85f, ATTN_NORM, 0, 96 + RANDOM_LONG( 0, 6 ) );
		return FALSE;
	}

	CBaseEntity *pEntity = CBaseEntity::Instance( tr.pHit );
	if( pEntity )
	{
		ClearMultiDamage();
		pEntity->TraceAttack( pPlayer->pev, MOBILE_PUNCH_DAMAGE, gpGlobals->v_forward, &tr, DMG_CLUB );
		ApplyMultiDamage( pPlayer->pev, pPlayer->pev );
	}

	BOOL hitFlesh = FALSE;
	if( pEntity && pEntity->Classify() != CLASS_NONE && pEntity->Classify() != CLASS_MACHINE )
		hitFlesh = TRUE;

	if( hitFlesh )
	{
		EMIT_SOUND( ENT( pPlayer->pev ), CHAN_ITEM, "weapons/mobile/punch_smack.wav", 1.0f, ATTN_NORM );
	}
	else
	{
		TEXTURETYPE_PlaySound( &tr, vecSrc, vecSrc + ( vecEnd - vecSrc ) * 2.0f, BULLET_PLAYER_CROWBAR );
		EMIT_SOUND_DYN( ENT( pPlayer->pev ), CHAN_ITEM, "weapons/mobile/punch_smack.wav", 0.75f, ATTN_NORM, 0, 96 + RANDOM_LONG( 0, 6 ) );
		DecalGunshot( &tr, BULLET_PLAYER_CROWBAR );
	}

	return TRUE;
}
#endif

enum mobile_e
{
	MOBILE_IDLE_SMS = 0,
	MOBILE_LOOK_SMS,
	MOBILE_DRAW_SMS,
	MOBILE_HOLSTER_SMS,
	MOBILE_SMS_TO_FLASH,
	MOBILE_IDLE_FLASH,
	MOBILE_FLASH_LOOKSMS,
	MOBILE_DRAW_FLASH,
	MOBILE_FLASH_TO_SMS,
	MOBILE_HOLSTER_FLASH,
	MOBILE_SMS_PUNCH,
	MOBILE_FLASH_PUNCH,
	MOBILE_RAISE_SMS,
	MOBILE_RAISE_FLASH,
	MOBILE_RAISE_IDLE,
	MOBILE_LOWER_SMS,
	MOBILE_LOWER_FLASH
};

void CMobile::Spawn( void )
{
	Precache();
	m_iId = WEAPON_MOBILE;
	SET_MODEL( ENT( pev ), "models/weapons/mobile/w_mobile.mdl" );
	m_iClip = WEAPON_NOCLIP;
	m_fFlashMode = FALSE;
	m_fireState = 0;

	FallInit();
}

void CMobile::Precache( void )
{
	PRECACHE_MODEL( "models/weapons/mobile/v_mobile.mdl" );
	PRECACHE_MODEL( "models/weapons/mobile/w_mobile.mdl" );
	PRECACHE_SOUND( "weapons/mobile/mobile_switch.wav" );
	PRECACHE_SOUND( "weapons/mobile/mobile_sms.wav" );
	PRECACHE_SOUND( "weapons/mobile/punch_swing.wav" );
	PRECACHE_SOUND( "weapons/mobile/punch_smack.wav" );
}

int CMobile::GetItemInfo( ItemInfo *p )
{
	p->pszName = STRING( pev->classname );
	p->pszAmmo1 = NULL;
	p->iMaxAmmo1 = WEAPON_NOCLIP;
	p->pszAmmo2 = NULL;
	p->iMaxAmmo2 = WEAPON_NOCLIP;
	p->iMaxClip = WEAPON_NOCLIP;
	p->iSlot = 4;
	p->iPosition = 5;
	p->iId = WEAPON_MOBILE;
	p->iFlags = ITEM_FLAG_SELECTONEMPTY | ITEM_FLAG_NOAUTOSWITCHTO;
	p->iWeight = MOBILE_WEIGHT;
	return 1;
}

int CMobile::AddToPlayer( CBasePlayer *pPlayer )
{
	if( CBasePlayerWeapon::AddToPlayer( pPlayer ) )
	{
#ifndef CLIENT_DLL
		pPlayer->COF_AddInventoryItem( "inventoryitems/weapons/weapon_mobile.txt" );
#endif

		MESSAGE_BEGIN( MSG_ONE, gmsgWeapPickup, NULL, pPlayer->pev );
			WRITE_BYTE( m_iId );
		MESSAGE_END();
		return TRUE;
	}

	return FALSE;
}

BOOL CMobile::Deploy( void )
{
	m_fFlashMode = m_fireState != 0;
	const int iDrawAnim = m_fFlashMode ? MOBILE_DRAW_FLASH : MOBILE_DRAW_SMS;
#ifndef CLIENT_DLL
	if( m_fFlashMode )
		COF_SetMobileFlashlight( m_pPlayer, TRUE );
#endif
	return DefaultDeploy( "models/weapons/mobile/v_mobile.mdl", "", iDrawAnim, "onehanded" );
}

void CMobile::Holster( int skiplocal )
{
	m_fFlashMode = m_fireState != 0;
#ifndef CLIENT_DLL
	if( m_fFlashMode )
		COF_SetMobileFlashlight( m_pPlayer, FALSE );
#endif
	m_pPlayer->m_flNextAttack = UTIL_WeaponTimeBase() + 0.5f;
	SendWeaponAnim( m_fFlashMode ? MOBILE_HOLSTER_FLASH : MOBILE_HOLSTER_SMS );
}

void CMobile::ToggleFlashlight( void )
{
	m_fFlashMode = m_fireState != 0;
	m_fFlashMode = !m_fFlashMode;
	m_fireState = m_fFlashMode ? 1 : 0;

#ifndef CLIENT_DLL
	COF_SetMobileFlashlight( m_pPlayer, m_fFlashMode );
#endif

	SendWeaponAnim( m_fFlashMode ? MOBILE_SMS_TO_FLASH : MOBILE_FLASH_TO_SMS );

	m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.7f;
	m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + 0.7f;
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + 1.0f;
}

void CMobile::PunchAttack( void )
{
	m_fFlashMode = m_fireState != 0;
	SendWeaponAnim( m_fFlashMode ? MOBILE_FLASH_PUNCH : MOBILE_SMS_PUNCH );
	m_pPlayer->SetAnimation( PLAYER_ATTACK1 );
	m_pPlayer->pev->punchangle.x = RANDOM_FLOAT( 2.0f, 4.0f );

#ifndef CLIENT_DLL
	COF_MobilePunchTrace( m_pPlayer );
#endif

	m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.4f;
	m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + MOBILE_ATTACK_DELAY;
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + 1.0f;
}

void CMobile::PrimaryAttack( void )
{
	ToggleFlashlight();
}

void CMobile::SecondaryAttack( void )
{
	PunchAttack();
}

void CMobile::WeaponIdle( void )
{
	if( m_flTimeWeaponIdle > UTIL_WeaponTimeBase() )
		return;

	m_fFlashMode = m_fireState != 0;
	if( RANDOM_LONG( 0, 3 ) == 0 )
	{
		SendWeaponAnim( m_fFlashMode ? MOBILE_FLASH_LOOKSMS : MOBILE_LOOK_SMS );
		m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + 1.6f;
		return;
	}

	SendWeaponAnim( m_fFlashMode ? MOBILE_IDLE_FLASH : MOBILE_IDLE_SMS );
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + RANDOM_FLOAT( 4.0f, 7.0f );
}
