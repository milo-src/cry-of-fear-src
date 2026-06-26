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

	FallInit();
}

void CMobile::Precache( void )
{
	PRECACHE_MODEL( "models/weapons/mobile/v_mobile.mdl" );
	PRECACHE_MODEL( "models/weapons/mobile/w_mobile.mdl" );
	PRECACHE_SOUND( "weapons/mobile/mobile_switch.wav" );
	PRECACHE_SOUND( "weapons/mobile/mobile_sms.wav" );
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
	const int iDrawAnim = m_fFlashMode ? MOBILE_DRAW_FLASH : MOBILE_DRAW_SMS;
	return DefaultDeploy( "models/weapons/mobile/v_mobile.mdl", "", iDrawAnim, "onehanded" );
}

void CMobile::Holster( int skiplocal )
{
	m_pPlayer->m_flNextAttack = UTIL_WeaponTimeBase() + 0.5f;
	SendWeaponAnim( m_fFlashMode ? MOBILE_HOLSTER_FLASH : MOBILE_HOLSTER_SMS );
}

void CMobile::PrimaryAttack( void )
{
	EMIT_SOUND( ENT( m_pPlayer->pev ), CHAN_WEAPON, "weapons/mobile/mobile_sms.wav", 0.8f, ATTN_NORM );
	SendWeaponAnim( m_fFlashMode ? MOBILE_FLASH_PUNCH : MOBILE_SMS_PUNCH );

	m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.6f;
	m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + 0.4f;
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + 1.0f;
}

void CMobile::SecondaryAttack( void )
{
	m_fFlashMode = !m_fFlashMode;

#ifndef CLIENT_DLL
	if( m_fFlashMode )
		m_pPlayer->FlashlightTurnOn();
	else
		m_pPlayer->FlashlightTurnOff();
#endif

	EMIT_SOUND( ENT( m_pPlayer->pev ), CHAN_WEAPON, "weapons/mobile/mobile_switch.wav", 0.8f, ATTN_NORM );
	SendWeaponAnim( m_fFlashMode ? MOBILE_SMS_TO_FLASH : MOBILE_FLASH_TO_SMS );

	m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.7f;
	m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + 0.7f;
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + 1.0f;
}

void CMobile::WeaponIdle( void )
{
	if( m_flTimeWeaponIdle > UTIL_WeaponTimeBase() )
		return;

	SendWeaponAnim( m_fFlashMode ? MOBILE_IDLE_FLASH : MOBILE_IDLE_SMS );
	m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + RANDOM_FLOAT( 5.0f, 8.0f );
}
