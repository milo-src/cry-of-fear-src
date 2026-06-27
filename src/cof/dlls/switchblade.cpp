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

LINK_ENTITY_TO_CLASS( weapon_switchblade, CSwitchblade )

#define SWITCHBLADE_RANGE			38.0f
#define SWITCHBLADE_SLASH_DAMAGE	6.0f
#define SWITCHBLADE_STAB_DAMAGE		9.0f
#define SWITCHBLADE_SLASH_DELAY		0.48f
#define SWITCHBLADE_STAB_DELAY		0.72f
#define SWITCHBLADE_SWITCH_TIME		0.45f
#define SWITCHBLADE_DRAW_TIME		0.55f
#define SWITCHBLADE_HOLSTER_TIME	0.45f
#define SWITCHBLADE_IDLE_TIME		3600.0f

enum switchblade_e
{
	SWITCHBLADE_P1_IDLE = 0,
	SWITCHBLADE_P1_DRAW,
	SWITCHBLADE_P1_HOLSTER,
	SWITCHBLADE_P1_ATTACK1,
	SWITCHBLADE_P2_IDLE,
	SWITCHBLADE_P2_DRAW,
	SWITCHBLADE_P2_HOLSTER,
	SWITCHBLADE_P2_ATTACK1,
	SWITCHBLADE_P1_SPRINT_IDLE,
	SWITCHBLADE_P2_SPRINT_IDLE,
	SWITCHBLADE_P1_ATTACK2,
	SWITCHBLADE_P1_ATTACK3,
	SWITCHBLADE_P2_ATTACK2,
	SWITCHBLADE_P2_ATTACK3
};

#ifndef CLIENT_DLL
extern void FindHullIntersection( const Vector &vecSrc, TraceResult &tr, float *mins, float *maxs, edict_t *pEntity );

static void COF_PlaySwitchbladeHitSound( CBasePlayer *pPlayer, BOOL hitFlesh, BOOL hitWorld )
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

static BOOL COF_SwitchbladeTraceAttack( CBasePlayer *pPlayer, float flDamage )
{
	TraceResult tr;

	UTIL_MakeVectors( pPlayer->pev->v_angle );
	Vector vecSrc = pPlayer->GetGunPosition();
	Vector vecEnd = vecSrc + gpGlobals->v_forward * SWITCHBLADE_RANGE;

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
		pEntity->TraceAttack( pPlayer->pev, flDamage, gpGlobals->v_forward, &tr, DMG_CLUB );
		ApplyMultiDamage( pPlayer->pev, pPlayer->pev );
	}

	const BOOL hitFlesh = pEntity && pEntity->Classify() != CLASS_NONE && pEntity->Classify() != CLASS_MACHINE;
	if( !hitFlesh )
	{
		TEXTURETYPE_PlaySound( &tr, vecSrc, vecSrc + ( vecEnd - vecSrc ) * 2.0f, BULLET_PLAYER_CROWBAR );
		DecalGunshot( &tr, BULLET_PLAYER_CROWBAR );
	}

	COF_PlaySwitchbladeHitSound( pPlayer, hitFlesh, !hitFlesh );
	return TRUE;
}
#endif

void CSwitchblade::Spawn( void )
{
	Precache();
	m_iId = WEAPON_SWITCHBLADE;
	SET_MODEL( ENT( pev ), "models/weapons/switchblade/w_switchblade.mdl" );
	m_iClip = WEAPON_NOCLIP;
	m_iSwing = 0;
	m_fireState = 0;

	FallInit();
}

void CSwitchblade::Precache( void )
{
	PRECACHE_MODEL( "models/weapons/switchblade/v_switchblade.mdl" );
	PRECACHE_MODEL( "models/weapons/switchblade/w_switchblade.mdl" );

	PRECACHE_SOUND( "weapons/switchblade/switchblade_deploy.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_draw.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_draw2.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_hitbody1.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_hitbody2.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_hitwall1.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_hitwall2.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_holster.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_holster2.wav" );
	PRECACHE_SOUND( "weapons/switchblade/switchblade_swing.wav" );
}

int CSwitchblade::GetItemInfo( ItemInfo *p )
{
	p->pszName = STRING( pev->classname );
	p->pszAmmo1 = NULL;
	p->iMaxAmmo1 = WEAPON_NOCLIP;
	p->pszAmmo2 = NULL;
	p->iMaxAmmo2 = WEAPON_NOCLIP;
	p->iMaxClip = WEAPON_NOCLIP;
	p->iSlot = 0;
	p->iPosition = 1;
	p->iId = WEAPON_SWITCHBLADE;
	p->iFlags = ITEM_FLAG_SELECTONEMPTY;
	p->iWeight = SWITCHBLADE_WEIGHT;
	return 1;
}

int CSwitchblade::AddToPlayer( CBasePlayer *pPlayer )
{
	if( CBasePlayerWeapon::AddToPlayer( pPlayer ) )
	{
#ifndef CLIENT_DLL
		pPlayer->COF_AddInventoryItem( "inventoryitems/weapons/weapon_switchblade.txt" );
#endif

		MESSAGE_BEGIN( MSG_ONE, gmsgWeapPickup, NULL, pPlayer->pev );
			WRITE_BYTE( m_iId );
		MESSAGE_END();
		return TRUE;
	}

	return FALSE;
}

BOOL CSwitchblade::Deploy( void )
{
	const BOOL stabMode = m_fireState != 0;
	const int drawAnim = stabMode ? SWITCHBLADE_P2_DRAW : SWITCHBLADE_P1_DRAW;
	const BOOL result = DefaultDeploy( "models/weapons/switchblade/v_switchblade.mdl", "", drawAnim, "onehanded" );
	if( result )
	{
#ifndef CLIENT_DLL
		EMIT_SOUND( ENT( m_pPlayer->pev ), CHAN_ITEM, "weapons/switchblade/switchblade_deploy.wav", 0.9f, ATTN_NORM );
#endif
		m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + SWITCHBLADE_DRAW_TIME;
	}
	return result;
}

void CSwitchblade::Holster( int skiplocal )
{
	const BOOL stabMode = m_fireState != 0;
	m_pPlayer->m_flNextAttack = UTIL_WeaponTimeBase() + SWITCHBLADE_HOLSTER_TIME;
	SendWeaponAnim( stabMode ? SWITCHBLADE_P2_HOLSTER : SWITCHBLADE_P1_HOLSTER );
#ifndef CLIENT_DLL
	EMIT_SOUND( ENT( m_pPlayer->pev ), CHAN_ITEM,
		stabMode ? "weapons/switchblade/switchblade_holster2.wav" : "weapons/switchblade/switchblade_holster.wav",
		0.8f, ATTN_NORM );
#endif
}

void CSwitchblade::SwitchbladeAttack( BOOL stabMode )
{
	static const int slashAnims[] = { SWITCHBLADE_P1_ATTACK1, SWITCHBLADE_P1_ATTACK2, SWITCHBLADE_P1_ATTACK3 };
	static const int stabAnims[] = { SWITCHBLADE_P2_ATTACK1, SWITCHBLADE_P2_ATTACK2, SWITCHBLADE_P2_ATTACK3 };
	const int *pAnims = stabMode ? stabAnims : slashAnims;
	const int iAnim = pAnims[m_iSwing++ % 3];
	const float flDelay = stabMode ? SWITCHBLADE_STAB_DELAY : SWITCHBLADE_SLASH_DELAY;
	const float flDamage = stabMode ? SWITCHBLADE_STAB_DAMAGE : SWITCHBLADE_SLASH_DAMAGE;

	SendWeaponAnim( iAnim );
	m_pPlayer->SetAnimation( PLAYER_ATTACK1 );
	m_pPlayer->pev->punchangle.x = stabMode ? RANDOM_FLOAT( 1.5f, 3.0f ) : RANDOM_FLOAT( 0.8f, 1.8f );

#ifndef CLIENT_DLL
	COF_SwitchbladeTraceAttack( m_pPlayer, flDamage );
#endif

	m_flNextPrimaryAttack = GetNextAttackDelay( flDelay );
	m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + flDelay;
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + flDelay;
}

void CSwitchblade::PrimaryAttack( void )
{
	SwitchbladeAttack( m_fireState != 0 );
}

void CSwitchblade::ToggleMode( void )
{
	m_fireState = m_fireState ? 0 : 1;
	const BOOL stabMode = m_fireState != 0;

	SendWeaponAnim( stabMode ? SWITCHBLADE_P2_DRAW : SWITCHBLADE_P1_DRAW );
#ifndef CLIENT_DLL
	EMIT_SOUND( ENT( m_pPlayer->pev ), CHAN_ITEM,
		stabMode ? "weapons/switchblade/switchblade_draw2.wav" : "weapons/switchblade/switchblade_draw.wav",
		0.8f, ATTN_NORM );
#endif

	m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + SWITCHBLADE_SWITCH_TIME;
	m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + SWITCHBLADE_SWITCH_TIME;
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + SWITCHBLADE_SWITCH_TIME;
}

void CSwitchblade::SecondaryAttack( void )
{
	ToggleMode();
}

void CSwitchblade::WeaponIdle( void )
{
	const BOOL stabMode = m_fireState != 0;
	const int idleAnim = stabMode ? SWITCHBLADE_P2_IDLE : SWITCHBLADE_P1_IDLE;
	const int currentAnim = m_pPlayer ? m_pPlayer->pev->weaponanim : -1;

	if( m_flTimeWeaponIdle > UTIL_WeaponTimeBase() )
		return;

	if( currentAnim != idleAnim )
		SendWeaponAnim( idleAnim );
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + SWITCHBLADE_IDLE_TIME;
}
