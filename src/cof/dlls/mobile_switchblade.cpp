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

LINK_ENTITY_TO_CLASS( weapon_mobile_switchblade, CMobileSwitchblade )

#define MOBILE_SWITCHBLADE_RANGE		38.0f
#define MOBILE_SWITCHBLADE_DAMAGE		6.0f
#define MOBILE_SWITCHBLADE_KNIFE_DELAY	0.97f
#define MOBILE_SWITCHBLADE_DRAW_TIME	0.50f
#define MOBILE_SWITCHBLADE_HOLSTER_TIME	0.55f
#define MOBILE_SWITCHBLADE_SWITCH_TIME	1.00f
#define MOBILE_SWITCHBLADE_IDLE_TIME	3600.0f

enum mobile_switchblade_e
{
	MOBILE_SWITCHBLADE_IDLE_SMS = 0,
	MOBILE_SWITCHBLADE_LOOK_SMS,
	MOBILE_SWITCHBLADE_DRAW_SMS,
	MOBILE_SWITCHBLADE_HOLSTER_SMS,
	MOBILE_SWITCHBLADE_SMS_TO_FLASH,
	MOBILE_SWITCHBLADE_IDLE_FLASH,
	MOBILE_SWITCHBLADE_FLASH_LOOKSMS,
	MOBILE_SWITCHBLADE_DRAW_FLASH,
	MOBILE_SWITCHBLADE_FLASH_TO_SMS,
	MOBILE_SWITCHBLADE_HOLSTER_FLASH,
	MOBILE_SWITCHBLADE_SMS_KNIFE,
	MOBILE_SWITCHBLADE_FLASH_KNIFE
};

#ifndef CLIENT_DLL
extern int gmsgFlashlight;
extern void FindHullIntersection( const Vector &vecSrc, TraceResult &tr, float *mins, float *maxs, edict_t *pEntity );

static void COF_SetMobileSwitchbladeFlashlight( CBasePlayer *pPlayer, BOOL enabled )
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

	pPlayer->m_flFlashLightTime = 0.0f;
}

static void COF_PlayMobileSwitchbladeHitSound( CBasePlayer *pPlayer, BOOL hitFlesh, BOOL hitWorld )
{
	if( hitFlesh )
	{
		EMIT_SOUND( ENT( pPlayer->pev ), CHAN_ITEM,
			RANDOM_LONG( 0, 1 ) ? "weapons/switchblade/switchblade_hitbody1.wav" : "weapons/switchblade/switchblade_hitbody2.wav",
			1.0f, ATTN_NORM );
		return;
	}

	if( hitWorld )
	{
		EMIT_SOUND_DYN( ENT( pPlayer->pev ), CHAN_ITEM,
			RANDOM_LONG( 0, 1 ) ? "weapons/switchblade/switchblade_hitwall1.wav" : "weapons/switchblade/switchblade_hitwall2.wav",
			0.8f, ATTN_NORM, 0, 96 + RANDOM_LONG( 0, 6 ) );
	}
}

static BOOL COF_MobileSwitchbladeTraceAttack( CBasePlayer *pPlayer )
{
	TraceResult tr;

	UTIL_MakeVectors( pPlayer->pev->v_angle );
	Vector vecSrc = pPlayer->GetGunPosition();
	Vector vecEnd = vecSrc + gpGlobals->v_forward * MOBILE_SWITCHBLADE_RANGE;

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
		EMIT_SOUND_DYN( ENT( pPlayer->pev ), CHAN_ITEM, "weapons/switchblade/switchblade_swing.wav", 0.9f, ATTN_NORM, 0, 96 + RANDOM_LONG( 0, 6 ) );
		return FALSE;
	}

	CBaseEntity *pEntity = CBaseEntity::Instance( tr.pHit );
	if( pEntity )
	{
		ClearMultiDamage();
		pEntity->TraceAttack( pPlayer->pev, MOBILE_SWITCHBLADE_DAMAGE, gpGlobals->v_forward, &tr, DMG_CLUB );
		ApplyMultiDamage( pPlayer->pev, pPlayer->pev );
	}

	const BOOL hitFlesh = pEntity && pEntity->Classify() != CLASS_NONE && pEntity->Classify() != CLASS_MACHINE;
	if( !hitFlesh )
	{
		TEXTURETYPE_PlaySound( &tr, vecSrc, vecSrc + ( vecEnd - vecSrc ) * 2.0f, BULLET_PLAYER_CROWBAR );
		DecalGunshot( &tr, BULLET_PLAYER_CROWBAR );
	}

	COF_PlayMobileSwitchbladeHitSound( pPlayer, hitFlesh, !hitFlesh );
	return TRUE;
}
#endif

void CMobileSwitchblade::Spawn( void )
{
	Precache();
	m_iId = WEAPON_MOBILE_SWITCHBLADE;
	SET_MODEL( ENT( pev ), "models/weapons/mobile/w_mobile.mdl" );
	m_iClip = WEAPON_NOCLIP;
	m_fFlashMode = FALSE;
	m_fireState = 0;
	m_iSwing = 0;

	FallInit();
}

void CMobileSwitchblade::Precache( void )
{
	PRECACHE_MODEL( "models/weapons/mobile/v_mobile.mdl" );
	PRECACHE_MODEL( "models/weapons/mobile/w_mobile.mdl" );
	PRECACHE_SOUND( "weapons/mobile/mobile_switch.wav" );
	PRECACHE_SOUND( "weapons/mobile/mobile_sms.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_swing.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_hitbody1.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_hitbody2.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_hitwall1.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_hitwall2.wav" );
}

int CMobileSwitchblade::GetItemInfo( ItemInfo *p )
{
	p->pszName = STRING( pev->classname );
	p->pszAmmo1 = NULL;
	p->iMaxAmmo1 = WEAPON_NOCLIP;
	p->pszAmmo2 = NULL;
	p->iMaxAmmo2 = WEAPON_NOCLIP;
	p->iMaxClip = WEAPON_NOCLIP;
	p->iSlot = 4;
	p->iPosition = 6;
	p->iId = WEAPON_MOBILE_SWITCHBLADE;
	p->iFlags = ITEM_FLAG_SELECTONEMPTY | ITEM_FLAG_NOAUTOSWITCHTO;
	p->iWeight = MOBILE_SWITCHBLADE_WEIGHT;
	return 1;
}

int CMobileSwitchblade::AddToPlayer( CBasePlayer *pPlayer )
{
	if( CBasePlayerWeapon::AddToPlayer( pPlayer ) )
	{
		MESSAGE_BEGIN( MSG_ONE, gmsgWeapPickup, NULL, pPlayer->pev );
			WRITE_BYTE( m_iId );
		MESSAGE_END();
		return TRUE;
	}

	return FALSE;
}

BOOL CMobileSwitchblade::Deploy( void )
{
	m_fFlashMode = m_fireState != 0;
	const int iDrawAnim = m_fFlashMode ? MOBILE_SWITCHBLADE_DRAW_FLASH : MOBILE_SWITCHBLADE_DRAW_SMS;
#ifndef CLIENT_DLL
	if( m_fFlashMode )
		COF_SetMobileSwitchbladeFlashlight( m_pPlayer, TRUE );
#endif

	const BOOL result = DefaultDeploy( "models/weapons/mobile/v_mobile.mdl", "", iDrawAnim, "onehanded" );
	if( result )
		m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + MOBILE_SWITCHBLADE_DRAW_TIME;
	return result;
}

void CMobileSwitchblade::Holster( int skiplocal )
{
	m_fFlashMode = m_fireState != 0;
#ifndef CLIENT_DLL
	if( m_fFlashMode )
		COF_SetMobileSwitchbladeFlashlight( m_pPlayer, FALSE );
#endif

	m_pPlayer->m_flNextAttack = UTIL_WeaponTimeBase() + MOBILE_SWITCHBLADE_HOLSTER_TIME;
	SendWeaponAnim( m_fFlashMode ? MOBILE_SWITCHBLADE_HOLSTER_FLASH : MOBILE_SWITCHBLADE_HOLSTER_SMS );
}

void CMobileSwitchblade::ToggleFlashlight( void )
{
	m_fFlashMode = m_fireState != 0;
	m_fFlashMode = !m_fFlashMode;
	m_fireState = m_fFlashMode ? 1 : 0;

#ifndef CLIENT_DLL
	COF_SetMobileSwitchbladeFlashlight( m_pPlayer, m_fFlashMode );
#endif

	SendWeaponAnim( m_fFlashMode ? MOBILE_SWITCHBLADE_SMS_TO_FLASH : MOBILE_SWITCHBLADE_FLASH_TO_SMS );

	m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + MOBILE_SWITCHBLADE_SWITCH_TIME;
	m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + MOBILE_SWITCHBLADE_SWITCH_TIME;
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + MOBILE_SWITCHBLADE_SWITCH_TIME;
}

void CMobileSwitchblade::KnifeAttack( void )
{
	m_fFlashMode = m_fireState != 0;
	SendWeaponAnim( m_fFlashMode ? MOBILE_SWITCHBLADE_FLASH_KNIFE : MOBILE_SWITCHBLADE_SMS_KNIFE );
	m_pPlayer->SetAnimation( PLAYER_ATTACK1 );
	m_pPlayer->pev->punchangle.x = RANDOM_FLOAT( 0.8f, 1.8f );

#ifndef CLIENT_DLL
	COF_MobileSwitchbladeTraceAttack( m_pPlayer );
#endif

	m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + MOBILE_SWITCHBLADE_KNIFE_DELAY;
	m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + MOBILE_SWITCHBLADE_KNIFE_DELAY;
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + MOBILE_SWITCHBLADE_KNIFE_DELAY;
}

void CMobileSwitchblade::PrimaryAttack( void )
{
	ToggleFlashlight();
}

void CMobileSwitchblade::SecondaryAttack( void )
{
	KnifeAttack();
}

void CMobileSwitchblade::WeaponIdle( void )
{
	m_fFlashMode = m_fireState != 0;
	const int iIdleAnim = m_fFlashMode ? MOBILE_SWITCHBLADE_IDLE_FLASH : MOBILE_SWITCHBLADE_IDLE_SMS;
	const int iCurrentAnim = m_pPlayer ? m_pPlayer->pev->weaponanim : -1;

	if( m_flTimeWeaponIdle > UTIL_WeaponTimeBase() )
	{
		if( ( iCurrentAnim == MOBILE_SWITCHBLADE_IDLE_SMS || iCurrentAnim == MOBILE_SWITCHBLADE_IDLE_FLASH ) && iCurrentAnim != iIdleAnim )
		{
			SendWeaponAnim( iIdleAnim );
			m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + MOBILE_SWITCHBLADE_IDLE_TIME;
		}
		return;
	}

	if( iCurrentAnim != iIdleAnim )
		SendWeaponAnim( iIdleAnim );
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + MOBILE_SWITCHBLADE_IDLE_TIME;
}
