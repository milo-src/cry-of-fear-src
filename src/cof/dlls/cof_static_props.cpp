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
static const char *COF_DefaultStaticModelForClass( const char *pszClassname )
{
	if( !pszClassname )
		return NULL;

	if( !stricmp( pszClassname, "statue_eagle" ) ) return "models/Props/UtomhusD/eagle.mdl";
	if( !stricmp( pszClassname, "statue_horse" ) ) return "models/Props/UtomhusD/horse.mdl";
	if( !stricmp( pszClassname, "statue_lion" ) ) return "models/Props/UtomhusD/lion.mdl";
	if( !stricmp( pszClassname, "statue_owl" ) ) return "models/Props/UtomhusD/owl.mdl";
	if( !stricmp( pszClassname, "boat" ) ) return "models/boat.mdl";
	if( !stricmp( pszClassname, "cof_deadcat" ) ) return "models/Props/Blandat/dead_cat.mdl";

	return NULL;
}

class CCOFStaticPropCompat : public CBaseAnimating
{
public:
	void Spawn( void )
	{
		pev->solid = SOLID_NOT;
		pev->movetype = MOVETYPE_NONE;

		if( FStringNull( pev->model ) )
		{
			const char *pszModel = COF_DefaultStaticModelForClass( STRING( pev->classname ) );
			if( pszModel )
				pev->model = MAKE_STRING( pszModel );
		}

		if( COF_HasText( pev->model ) )
		{
			const char *pszModel = STRING( pev->model );
			if( !strnicmp( pszModel, "cryoffear/", 10 ) )
				pev->model = MAKE_STRING( pszModel + 10 );

			PRECACHE_MODEL( STRING( pev->model ) );
			SET_MODEL( ENT( pev ), STRING( pev->model ) );
		}

		InitBoneControllers();
		ResetSequenceInfo();
	}
};

LINK_ENTITY_TO_CLASS( statue_eagle, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( statue_horse, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( statue_lion, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( statue_owl, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( boat, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( cof_deadcat, CCOFStaticPropCompat )
LINK_ENTITY_TO_CLASS( prop, CCOFStaticPropCompat )

