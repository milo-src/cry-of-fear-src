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
class CCOFCustomize : public CBaseDelay
{
public:
	CCOFCustomize() :
		m_iSkin( -1 ),
		m_iBody( -1 ),
		m_flFrame( -1.0f ),
		m_flFramerate( -1.0f ),
		m_iVisible( -1 ),
		m_iSolid( -1 ),
		m_iszModel( iStringNull )
	{
	}

	void KeyValue( KeyValueData *pkvd );
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );

	int m_iSkin;
	int m_iBody;
	float m_flFrame;
	float m_flFramerate;
	int m_iVisible;
	int m_iSolid;
	string_t m_iszModel;
};

LINK_ENTITY_TO_CLASS( env_customize, CCOFCustomize )

void CCOFCustomize::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "skin" ) )
	{
		m_iSkin = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "body" ) )
	{
		m_iBody = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "frame" ) )
	{
		m_flFrame = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_fFramerate" ) )
	{
		m_flFramerate = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_iVisible" ) )
	{
		m_iVisible = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_iSolid" ) )
	{
		m_iSolid = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "m_iszModel" ) )
	{
		m_iszModel = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( !strncmp( pkvd->szKeyName, "m_fController", 13 ) ||
		FStrEq( pkvd->szKeyName, "m_iPlayerReact" ) ||
		FStrEq( pkvd->szKeyName, "m_voicePitch" ) ||
		FStrEq( pkvd->szKeyName, "m_flRadius" ) ||
		FStrEq( pkvd->szKeyName, "m_iProvoked" ) ||
		FStrEq( pkvd->szKeyName, "m_iMonsterClip" ) ||
		FStrEq( pkvd->szKeyName, "m_iPrisoner" ) ||
		FStrEq( pkvd->szKeyName, "m_iClass" ) ||
		FStrEq( pkvd->szKeyName, "m_bloodColor" ) )
	{
		pkvd->fHandled = TRUE;
	}
	else
		CBaseDelay::KeyValue( pkvd );
}

void CCOFCustomize::Spawn( void )
{
	pev->solid = SOLID_NOT;
	SetUse( &CCOFCustomize::Use );
}

void CCOFCustomize::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if( !COF_HasText( pev->target ) )
		return;

	CBaseEntity *pEntity = NULL;
	while( ( pEntity = UTIL_FindEntityByTargetname( pEntity, STRING( pev->target ) ) ) != NULL )
	{
		if( m_iSkin >= 0 )
			pEntity->pev->skin = m_iSkin;
		if( m_iBody >= 0 )
			pEntity->pev->body = m_iBody;
		if( m_flFrame >= 0.0f )
			pEntity->pev->frame = m_flFrame;
		if( m_flFramerate >= 0.0f )
			pEntity->pev->framerate = m_flFramerate;

		if( COF_HasText( m_iszModel ) )
		{
			PRECACHE_MODEL( STRING( m_iszModel ) );
			SET_MODEL( pEntity->edict(), STRING( m_iszModel ) );
		}

		if( m_iVisible == 1 )
			pEntity->pev->effects &= ~EF_NODRAW;
		else if( m_iVisible == 2 )
			pEntity->pev->effects |= EF_NODRAW;
		else if( m_iVisible == 3 )
			pEntity->pev->effects ^= EF_NODRAW;

		if( m_iSolid == 0 )
			pEntity->pev->solid = SOLID_NOT;
		else if( m_iSolid == 1 && pEntity->pev->model )
		{
			const char *pszModel = STRING( pEntity->pev->model );
			if( pszModel && pszModel[0] == '*' )
				pEntity->pev->solid = SOLID_BSP;
		}

		UTIL_SetOrigin( pEntity->pev, pEntity->pev->origin );
	}

	SUB_UseTargets( pActivator, useType, value );
}

class CCOFMonsterRandomSpawn : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFMonsterRandomSpawn::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		if( COF_HasText( pev->message ) )
		{
			CBaseEntity *pSpawned = CBaseEntity::Create( STRING( pev->message ), pev->origin, pev->angles, edict() );
			if( pSpawned && pev->health > 0 )
				pSpawned->pev->health = pev->health;
		}

		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_monster_random_spawn, CCOFMonsterRandomSpawn )

class CCOFMdlCutscene : public CBaseAnimating
{
public:
	CCOFMdlCutscene()
	{
		memset( m_iszAnimations, 0, sizeof( m_iszAnimations ) );
		m_hActivator.Set( NULL );
	}

	void KeyValue( KeyValueData *pkvd );
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	void EXPORT AnimateThink( void );

	string_t m_iszAnimations[8];
	EHANDLE m_hActivator;
};

LINK_ENTITY_TO_CLASS( cof_mdlcutscene, CCOFMdlCutscene )
LINK_ENTITY_TO_CLASS( cutscene_model, CCOFMdlCutscene )

void CCOFMdlCutscene::KeyValue( KeyValueData *pkvd )
{
	if( !strncmp( pkvd->szKeyName, "animation", 9 ) )
	{
		const int index = atoi( pkvd->szKeyName + 9 ) - 1;
		if( index >= 0 && index < (int)ARRAYSIZE( m_iszAnimations ) )
			m_iszAnimations[index] = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
		CBaseAnimating::KeyValue( pkvd );
}

void CCOFMdlCutscene::Spawn( void )
{
	pev->solid = SOLID_NOT;
	pev->movetype = MOVETYPE_NONE;

	if( COF_HasText( pev->model ) )
	{
		PRECACHE_MODEL( STRING( pev->model ) );
		SET_MODEL( ENT( pev ), STRING( pev->model ) );
	}

	InitBoneControllers();
	ResetSequenceInfo();
	SetUse( &CCOFMdlCutscene::Use );
}

void CCOFMdlCutscene::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	m_hActivator = pActivator;

	if( COF_HasText( m_iszAnimations[0] ) )
	{
		const int sequence = LookupSequence( STRING( m_iszAnimations[0] ) );
		if( sequence >= 0 )
			pev->sequence = sequence;
	}

	pev->frame = 0;
	pev->framerate = 1.0f;
	ResetSequenceInfo();
	SetThink( &CCOFMdlCutscene::AnimateThink );
	pev->nextthink = gpGlobals->time + 0.05f;
}

void CCOFMdlCutscene::AnimateThink( void )
{
	StudioFrameAdvance();

	if( m_fSequenceFinished && !m_fSequenceLoops )
	{
		pev->framerate = 0.0f;
		ResetThink();
		SUB_UseTargets( (CBaseEntity *)m_hActivator, USE_TOGGLE, 0 );
		return;
	}

	pev->nextthink = gpGlobals->time + 0.05f;
}

