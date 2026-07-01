/***
*
*   Cry of Fear compatibility entities.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "cof_utils.h"
static const char *COF_DefaultWorldModelForPickup( const char *pszClassname )
{
	if( !pszClassname )
		return NULL;

	if( !stricmp( pszClassname, "weapon_syringe" ) ) return "models/weapons/syringe/w_syringe.mdl";
	if( !stricmp( pszClassname, "weapon_lantern" ) ) return "models/weapons/lantern/w_lantern.mdl";
	if( !stricmp( pszClassname, "weapon_m16" ) ) return "models/weapons/m16/w_m16.mdl";
	if( !stricmp( pszClassname, "weapon_branch" ) ) return "models/weapons/branch/w_branch.mdl";
	if( !stricmp( pszClassname, "weapon_tmp" ) ) return "models/weapons/tmp/w_tmp.mdl";
	if( !stricmp( pszClassname, "weapon_vp70" ) ) return "models/weapons/vp70/w_vp70.mdl";
	if( !stricmp( pszClassname, "weapon_flare" ) ) return "models/weapons/flare/w_flare.mdl";
	if( !stricmp( pszClassname, "weapon_glock" ) ) return "models/weapons/glock/w_glock.mdl";
	if( !stricmp( pszClassname, "weapon_glocktac" ) ) return "models/weapons/glock/w_glock.mdl";
	if( !stricmp( pszClassname, "weapon_instituteglock" ) ) return "models/weapons/glock/w_glock.mdl";
	if( !stricmp( pszClassname, "weapon_p345" ) ) return "models/weapons/p345/w_p345.mdl";
	if( !stricmp( pszClassname, "weapon_p345blackslide" ) ) return "models/weapons/p345/w_p345.mdl";
	if( !stricmp( pszClassname, "weapon_revolver" ) ) return "models/weapons/revolver/w_revolver.mdl";
	if( !stricmp( pszClassname, "weapon_rifle" ) ) return "models/weapons/rifle/w_rifle.mdl";
	if( !stricmp( pszClassname, "weapon_sledgehammer" ) ) return "models/weapons/sledgehammer/w_sledgehammer.mdl";
	if( !stricmp( pszClassname, "weapon_g43" ) ) return "models/weapons/g43/w_g43.mdl";
	if( !stricmp( pszClassname, "weapon_flashlight" ) ) return "models/weapons/flashlight/w_flashlight.mdl";
	if( !stricmp( pszClassname, "weapon_nightstick" ) ) return "models/weapons/nightstick/w_nightstick.mdl";
	if( !stricmp( pszClassname, "weapon_axe" ) ) return "models/weapons/axe/w_axe.mdl";
	if( !stricmp( pszClassname, "weapon_camera" ) ) return "models/weapons/camera/w_camera.mdl";
	if( !stricmp( pszClassname, "weapon_famas" ) ) return "models/weapons/famas/w_famas.mdl";
	if( !stricmp( pszClassname, "weapon_browning" ) ) return "models/weapons/browning/w_browning.mdl";
	if( !stricmp( pszClassname, "weapon_browning_wheelchair" ) ) return "models/weapons/browning/w_browning.mdl";
	if( !stricmp( pszClassname, "weapon_booklaser" ) ) return "models/weapons/booklaser/w_booklaser.mdl";
	if( !stricmp( pszClassname, "weapon_m76" ) ) return "models/weapons/m76/w_m76.mdl";

	if( !stricmp( pszClassname, "ammo_glock" ) ) return "models/ammo/clip.mdl";
	if( !stricmp( pszClassname, "ammo_p345" ) ) return "models/ammo/p345_clip.mdl";
	if( !stricmp( pszClassname, "ammo_revolver" ) ) return "models/ammo/ammo_revolver.mdl";
	if( !stricmp( pszClassname, "ammo_shells" ) ) return "models/ammo/ammo_shotshells.mdl";
	if( !stricmp( pszClassname, "ammo_tmp" ) ) return "models/ammo/ammo_tmp.mdl";
	if( !stricmp( pszClassname, "ammo_m16" ) ) return "models/ammo/ammo_m16.mdl";
	if( !stricmp( pszClassname, "ammo_vp70" ) ) return "models/ammo/vp70_clip.mdl";
	if( !stricmp( pszClassname, "ammo_g43" ) ) return "models/ammo/ammo_g43.mdl";
	if( !stricmp( pszClassname, "ammo_rifle" ) ) return "models/ammo/ammo_rifle.mdl";

	if( !stricmp( pszClassname, "aom_pills" ) ) return "models/items/w_pills.mdl";
	if( !stricmp( pszClassname, "item_phonebattery" ) ) return "models/items/phone_battery.mdl";
	if( !stricmp( pszClassname, "item_nightvision" ) ) return "models/items/w_nightvision.mdl";
	if( !stricmp( pszClassname, "item_glocktaclight" ) ) return "models/weapons/glock/glock_taclight.mdl";
	if( !stricmp( pszClassname, "item_padlock" ) ) return "models/items/padlock.mdl";
	if( !stricmp( pszClassname, "cof_hoodie" ) ) return "models/costumes/hoodie.mdl";
	if( !stricmp( pszClassname, "cof_passwordnote" ) ) return "models/items/generic_note.mdl";

	return NULL;
}

static void COF_InventoryTokenForPickup( const char *pszClassname, char *pszOut, size_t outSize )
{
	if( !pszOut || outSize == 0 )
		return;

	pszOut[0] = '\0';
	if( !pszClassname || !pszClassname[0] )
		return;

	if( !strnicmp( pszClassname, "ammo_", 5 ) )
		snprintf( pszOut, outSize, "inventoryitems/ammo/%s.txt", pszClassname );
	else
		strlcpy( pszOut, pszClassname, outSize );
}

class CCOFInventoryPickup : public CBaseAnimating
{
public:
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	int ObjectCaps( void ) { return ( CBaseAnimating::ObjectCaps() & ~FCAP_ACROSS_TRANSITION ) | FCAP_IMPULSE_USE; }
};

void CCOFInventoryPickup::Spawn( void )
{
	pev->movetype = MOVETYPE_TOSS;
	pev->solid = SOLID_TRIGGER;

	if( FStringNull( pev->model ) )
	{
		const char *pszModel = COF_DefaultWorldModelForPickup( STRING( pev->classname ) );
		if( pszModel )
			pev->model = MAKE_STRING( pszModel );
	}

	if( !FStringNull( pev->model ) )
	{
		PRECACHE_MODEL( STRING( pev->model ) );
		SET_MODEL( ENT( pev ), STRING( pev->model ) );
	}

	UTIL_SetSize( pev, Vector( -16, -16, 0 ), Vector( 16, 16, 16 ) );
	UTIL_SetOrigin( pev, pev->origin );
	SetUse( &CCOFInventoryPickup::Use );
}

void CCOFInventoryPickup::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
	if( !pPlayer )
		return;

	char szToken[128];
	COF_InventoryTokenForPickup( STRING( pev->classname ), szToken, sizeof( szToken ) );
	if( !szToken[0] || !pPlayer->COF_GiveInventoryItem( szToken ) )
	{
		ClientPrint( pPlayer->pev, HUD_PRINTCENTER, "Cannot pick up this item" );
		return;
	}

	EMIT_SOUND( ENT( pPlayer->pev ), CHAN_ITEM, "items/gunpickup2.wav", 1.0f, ATTN_NORM );
	SUB_UseTargets( pPlayer, USE_TOGGLE, 0 );
	UTIL_Remove( this );
}

LINK_ENTITY_TO_CLASS( weapon_syringe, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_lantern, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_m16, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_branch, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_tmp, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_vp70, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_flare, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_glocktac, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_instituteglock, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_p345, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_p345blackslide, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_revolver, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_rifle, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_sledgehammer, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_g43, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_flashlight, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_nightstick, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_axe, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_camera, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_famas, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_browning, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_browning_wheelchair, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_booklaser, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( weapon_m76, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_glock, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_p345, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_revolver, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_shells, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_tmp, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_m16, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_vp70, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_g43, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( ammo_rifle, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( aom_pills, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( item_phonebattery, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( item_nightvision, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( item_glocktaclight, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( item_padlock, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( cof_hoodie, CCOFInventoryPickup )
LINK_ENTITY_TO_CLASS( cof_passwordnote, CCOFInventoryPickup )

