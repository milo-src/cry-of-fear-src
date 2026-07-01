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
class CCOFDynLight : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFDynLight::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
};

LINK_ENTITY_TO_CLASS( env_dynlight, CCOFDynLight )
LINK_ENTITY_TO_CLASS( env_elight, CCOFDynLight )

void CCOFDynLight::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	const int radius = Q_min( 255, Q_max( 1, (int)( pev->scale > 0 ? pev->scale : 48 ) ) );
	MESSAGE_BEGIN( MSG_PVS, SVC_TEMPENTITY, pev->origin );
		WRITE_BYTE( TE_DLIGHT );
		WRITE_COORD( pev->origin.x );
		WRITE_COORD( pev->origin.y );
		WRITE_COORD( pev->origin.z );
		WRITE_BYTE( radius );
		WRITE_BYTE( (int)pev->rendercolor.x );
		WRITE_BYTE( (int)pev->rendercolor.y );
		WRITE_BYTE( (int)pev->rendercolor.z );
		WRITE_BYTE( 10 );
		WRITE_BYTE( 0 );
	MESSAGE_END();

	SUB_UseTargets( pActivator, useType, value );
}

class CCOFStaticDecal : public CBaseDelay
{
public:
	void Spawn( void );
	void EXPORT PlaceDecal( void );
};

LINK_ENTITY_TO_CLASS( env_static_decal, CCOFStaticDecal )

void CCOFStaticDecal::Spawn( void )
{
	pev->solid = SOLID_NOT;
	SetThink( &CCOFStaticDecal::PlaceDecal );
	pev->nextthink = gpGlobals->time + 0.1f;
}

void CCOFStaticDecal::PlaceDecal( void )
{
	if( !COF_HasText( pev->netname ) )
		return;

	int decal = DECAL_INDEX( STRING( pev->netname ) );
	if( decal < 0 )
		return;

	static const Vector dirs[] =
	{
		Vector( 1, 0, 0 ), Vector( -1, 0, 0 ), Vector( 0, 1, 0 ),
		Vector( 0, -1, 0 ), Vector( 0, 0, 1 ), Vector( 0, 0, -1 )
	};

	TraceResult tr;
	for( int i = 0; i < (int)ARRAYSIZE( dirs ); i++ )
	{
		UTIL_TraceLine( pev->origin, pev->origin + dirs[i] * 24.0f, ignore_monsters, ENT( pev ), &tr );
		if( tr.flFraction < 1.0f )
		{
			const int high = decal > 255;
			MESSAGE_BEGIN( MSG_BROADCAST, SVC_TEMPENTITY );
				WRITE_BYTE( high ? TE_WORLDDECALHIGH : TE_WORLDDECAL );
				WRITE_COORD( tr.vecEndPos.x );
				WRITE_COORD( tr.vecEndPos.y );
				WRITE_COORD( tr.vecEndPos.z );
				WRITE_BYTE( high ? decal - 256 : decal );
			MESSAGE_END();
			return;
		}
	}
}

class CCOFParticle : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFParticle::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( env_particle, CCOFParticle )

class CCOFDripper : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFDripper::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( dripper, CCOFDripper )

class CCOFTapeRecorder : public CBaseAnimating
{
public:
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	int ObjectCaps( void ) { return ( CBaseAnimating::ObjectCaps() & ~FCAP_ACROSS_TRANSITION ) | FCAP_IMPULSE_USE; }
};

LINK_ENTITY_TO_CLASS( tape_recorder, CCOFTapeRecorder )

void CCOFTapeRecorder::Spawn( void )
{
	pev->movetype = MOVETYPE_TOSS;
	pev->solid = SOLID_TRIGGER;

	if( FStringNull( pev->model ) )
		pev->model = MAKE_STRING( "models/tape_recorder.mdl" );

	PRECACHE_MODEL( STRING( pev->model ) );
	SET_MODEL( ENT( pev ), STRING( pev->model ) );
	UTIL_SetSize( pev, Vector( -16, -16, 0 ), Vector( 16, 16, 16 ) );
	UTIL_SetOrigin( pev, pev->origin );
	SetUse( &CCOFTapeRecorder::Use );
}

void CCOFTapeRecorder::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	COF_ShowText( pActivator, pev->message );
	SUB_UseTargets( pActivator, useType, value );
}


LINK_ENTITY_TO_CLASS( env_grass_sprite, CCOFParticle )
LINK_ENTITY_TO_CLASS( camera_spot_trigger, CCOFParticle )
