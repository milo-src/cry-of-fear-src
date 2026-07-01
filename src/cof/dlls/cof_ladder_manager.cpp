/***
*
*   Cry of Fear ladder compatibility entities.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "cof_utils.h"
#include "cof_ladder_shared.h"

extern int gmsgCofLadder;

class CCOFLadderManager : public CBaseAnimating
{
public:
	CCOFLadderManager();

	void KeyValue( KeyValueData *pkvd );
	void Spawn( void );
	void Precache( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	void EXPORT LadderThink( void );

private:
	enum LadderStage
	{
		LADDER_IDLE = 0,
		LADDER_START,
		LADDER_LOOP,
		LADDER_END
	};

	BOOL HasModel( void ) const;
	BOOL BeginClimb( CBasePlayer *pPlayer, BOOL fFromBottom );
	BOOL FindEndpoints( BOOL fFromBottom, CBaseEntity **ppStart, CBaseEntity **ppEnd );
	const char *PickSequence( string_t iszSequence, const char *pszFallback = NULL );
	const char *PickLoopSequence( BOOL fGoingUp );
	float PlaySequenceByName( const char *pszSequence, BOOL fSendToPlayer = TRUE );
	void SendPlayerViewSequence( CBasePlayer *pPlayer, int iSequence, float flDuration );
	void SendLadderViewState( CBasePlayer *pPlayer, BOOL fActive, int iSequence = 0, float flDuration = 0.0f );
	void AdvanceStage( void );
	void UpdatePlayerPosition( void );
	void FinishClimb( BOOL fFireTargets );
	void RestorePlayerView( CBasePlayer *pPlayer );
	int EstimateLoopCount( const Vector &vecStart, const Vector &vecEnd ) const;

	string_t m_iszTopEnt;
	string_t m_iszBottomEnt;
	string_t m_iszStartUp;
	string_t m_iszLoopUp;
	string_t m_iszEndUp;
	string_t m_iszStartDown;
	string_t m_iszEndDown;
	float m_flDescendOffset;

	EHANDLE m_hPlayer;
	string_t m_iszSavedViewModel;
	string_t m_iszSavedWeaponModel;
	int m_iSavedMoveType;
	int m_iSavedSolid;

	Vector m_vecStartOrigin;
	Vector m_vecEndOrigin;
	Vector m_vecStartAngles;
	Vector m_vecEndAngles;

	float m_flClimbStartTime;
	float m_flClimbEndTime;
	float m_flStageEndTime;
	int m_iLoopsLeft;
	int m_iExitSide;
	BOOL m_fGoingUp;
	LadderStage m_iStage;
};

LINK_ENTITY_TO_CLASS( cof_ladder_manager, CCOFLadderManager )

CCOFLadderManager::CCOFLadderManager() :
	m_iszTopEnt( iStringNull ),
	m_iszBottomEnt( iStringNull ),
	m_iszStartUp( iStringNull ),
	m_iszLoopUp( iStringNull ),
	m_iszEndUp( iStringNull ),
	m_iszStartDown( iStringNull ),
	m_iszEndDown( iStringNull ),
	m_flDescendOffset( 0.0f ),
	m_iszSavedViewModel( iStringNull ),
	m_iszSavedWeaponModel( iStringNull ),
	m_iSavedMoveType( MOVETYPE_WALK ),
	m_iSavedSolid( SOLID_SLIDEBOX ),
	m_flClimbStartTime( 0.0f ),
	m_flClimbEndTime( 0.0f ),
	m_flStageEndTime( 0.0f ),
	m_iLoopsLeft( 0 ),
	m_iExitSide( 0 ),
	m_fGoingUp( TRUE ),
	m_iStage( LADDER_IDLE )
{
}

void CCOFLadderManager::KeyValue( KeyValueData *pkvd )
{
	if( FStrEq( pkvd->szKeyName, "topent" ) )
	{
		m_iszTopEnt = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "bottoment" ) )
	{
		m_iszBottomEnt = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "animation1" ) )
	{
		m_iszStartUp = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "animation2" ) )
	{
		m_iszLoopUp = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "animation3" ) )
	{
		m_iszEndUp = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "customond" ) )
	{
		m_iszStartDown = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "customoffd" ) )
	{
		m_iszEndDown = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if( FStrEq( pkvd->szKeyName, "descendoffset" ) )
	{
		m_flDescendOffset = COF_KeyFloat( pkvd );
		pkvd->fHandled = TRUE;
	}
	else
		CBaseAnimating::KeyValue( pkvd );
}

void CCOFLadderManager::Precache( void )
{
	if( HasModel() )
		PRECACHE_MODEL( STRING( pev->model ) );
}

void CCOFLadderManager::Spawn( void )
{
	Precache();

	pev->solid = SOLID_NOT;
	pev->movetype = MOVETYPE_NONE;

	if( HasModel() )
	{
		SET_MODEL( ENT( pev ), STRING( pev->model ) );
		pev->sequence = 0;
		pev->frame = 0;
		ResetSequenceInfo();
	}

	SetBits( pev->effects, EF_NODRAW );
	SetUse( &CCOFLadderManager::Use );
}

BOOL CCOFLadderManager::HasModel( void ) const
{
	return !FStringNull( pev->model ) && STRING( pev->model )[0] != '\0';
}

void CCOFLadderManager::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
	if( !pPlayer || m_iStage != LADDER_IDLE )
		return;

	const BOOL fFromBottom = value < 0.5f;
	if( !BeginClimb( pPlayer, fFromBottom ) )
	{
		CBaseEntity *pStart = NULL;
		CBaseEntity *pEnd = NULL;
		if( !FindEndpoints( fFromBottom, &pStart, &pEnd ) || !pEnd )
			return;

		pPlayer->pev->velocity = g_vecZero;
		pPlayer->pev->basevelocity = g_vecZero;
		UTIL_SetOrigin( pPlayer->pev, COF_FindClearPlayerOrigin( pPlayer, pEnd->pev->origin ) );
		pPlayer->pev->angles = pEnd->pev->angles;
		pPlayer->pev->v_angle = pEnd->pev->angles;
		pPlayer->pev->fixangle = TRUE;
		SUB_UseTargets( pPlayer, USE_TOGGLE, 0 );
	}
}

BOOL CCOFLadderManager::BeginClimb( CBasePlayer *pPlayer, BOOL fFromBottom )
{
	CBaseEntity *pStart = NULL;
	CBaseEntity *pEnd = NULL;
	if( !pPlayer || !HasModel() || !FindEndpoints( fFromBottom, &pStart, &pEnd ) )
		return FALSE;

	m_fGoingUp = fFromBottom;
	m_vecStartOrigin = COF_FindClearPlayerOrigin( pPlayer, pStart->pev->origin );
	m_vecEndOrigin = COF_FindClearPlayerOrigin( pPlayer, pEnd->pev->origin );
	m_vecStartAngles = pStart->pev->angles;
	m_vecEndAngles = pEnd->pev->angles;
	m_iLoopsLeft = EstimateLoopCount( m_vecStartOrigin, m_vecEndOrigin );
	const float flExitYaw = COF_AngleDelta( m_vecEndAngles.y, m_vecStartAngles.y );
	m_iExitSide = flExitYaw > 35.0f ? 1 : ( flExitYaw < -35.0f ? -1 : 0 );

	m_hPlayer = pPlayer;
	m_iszSavedViewModel = pPlayer->pev->viewmodel;
	m_iszSavedWeaponModel = pPlayer->pev->weaponmodel;
	m_iSavedMoveType = pPlayer->pev->movetype;
	m_iSavedSolid = pPlayer->pev->solid;

	pPlayer->pev->velocity = g_vecZero;
	pPlayer->pev->basevelocity = g_vecZero;
	UTIL_SetOrigin( pPlayer->pev, m_vecStartOrigin );
	pPlayer->pev->angles = m_vecStartAngles;
	pPlayer->pev->v_angle = m_vecStartAngles;
	pPlayer->pev->fixangle = TRUE;
	pPlayer->pev->viewmodel = pev->model;
	pPlayer->pev->weaponmodel = 0;
	pPlayer->pev->movetype = MOVETYPE_NONE;
	pPlayer->pev->solid = SOLID_NOT;
	pPlayer->m_fWeapon = FALSE;
	pPlayer->UpdateClientData();
	pPlayer->EnableControl( FALSE );

	SetBits( pev->effects, EF_NODRAW );
	m_iStage = LADDER_START;

	const char *pszStart = m_fGoingUp ? PickSequence( m_iszStartUp, "climb_start_up" ) : PickSequence( m_iszStartDown, "climb_start_down" );
	const char *pszLoop = PickLoopSequence( m_fGoingUp );
	const char *pszEnd = m_fGoingUp ? PickSequence( m_iszEndUp, "climb_end_up" ) : PickSequence( m_iszEndDown, "climb_end_down" );

	float flTotal = 0.0f;
	flTotal += PlaySequenceByName( pszStart, FALSE );
	if( pszLoop )
		flTotal += PlaySequenceByName( pszLoop, FALSE ) * m_iLoopsLeft;
	flTotal += PlaySequenceByName( pszEnd, FALSE );

	m_flClimbStartTime = gpGlobals->time;
	m_flClimbEndTime = gpGlobals->time + Q_max( flTotal, COF_LADDER_MIN_SEQUENCE_TIME );
	pPlayer->m_flNextAttack = UTIL_WeaponTimeBase() + flTotal + 0.1f;

	m_iStage = LADDER_START;
	m_flStageEndTime = gpGlobals->time + PlaySequenceByName( pszStart );
	SetThink( &CCOFLadderManager::LadderThink );
	pev->nextthink = gpGlobals->time + COF_LADDER_THINK_RATE;
	return TRUE;
}

BOOL CCOFLadderManager::FindEndpoints( BOOL fFromBottom, CBaseEntity **ppStart, CBaseEntity **ppEnd )
{
	if( ppStart )
		*ppStart = NULL;
	if( ppEnd )
		*ppEnd = NULL;

	string_t iszStart = fFromBottom ? m_iszBottomEnt : m_iszTopEnt;
	string_t iszEnd = fFromBottom ? m_iszTopEnt : m_iszBottomEnt;
	if( !COF_HasText( iszStart ) || !COF_HasText( iszEnd ) )
		return FALSE;

	CBaseEntity *pStart = UTIL_FindEntityByTargetname( NULL, STRING( iszStart ) );
	CBaseEntity *pEnd = UTIL_FindEntityByTargetname( NULL, STRING( iszEnd ) );
	if( !pStart || !pEnd )
		return FALSE;

	if( ppStart )
		*ppStart = pStart;
	if( ppEnd )
		*ppEnd = pEnd;
	return TRUE;
}

const char *CCOFLadderManager::PickSequence( string_t iszSequence, const char *pszFallback )
{
	if( COF_HasText( iszSequence ) && LookupSequence( STRING( iszSequence ) ) >= 0 )
		return STRING( iszSequence );

	if( pszFallback && pszFallback[0] && LookupSequence( pszFallback ) >= 0 )
		return pszFallback;

	return NULL;
}

const char *CCOFLadderManager::PickLoopSequence( BOOL fGoingUp )
{
	if( fGoingUp )
		return PickSequence( m_iszLoopUp, "climb_loop_up" );

	if( LookupSequence( "climb_loop_down" ) >= 0 )
		return "climb_loop_down";

	return PickSequence( m_iszLoopUp, "climb_loop_up" );
}

float CCOFLadderManager::PlaySequenceByName( const char *pszSequence, BOOL fSendToPlayer )
{
	if( !pszSequence || !pszSequence[0] )
		return 0.0f;

	const int iSequence = LookupSequence( pszSequence );
	if( iSequence < 0 )
		return 0.0f;

	pev->sequence = iSequence;
	pev->frame = 0.0f;
	pev->animtime = gpGlobals->time;
	ResetSequenceInfo();

	if( fSendToPlayer )
		SendPlayerViewSequence( (CBasePlayer *)(CBaseEntity *)m_hPlayer, iSequence, Q_max( COF_LADDER_MIN_SEQUENCE_TIME, 256.0f / Q_max( fabs( m_flFrameRate ), 1.0f ) ) );

	return Q_max( COF_LADDER_MIN_SEQUENCE_TIME, 256.0f / Q_max( fabs( m_flFrameRate ), 1.0f ) );
}

void CCOFLadderManager::SendPlayerViewSequence( CBasePlayer *pPlayer, int iSequence, float flDuration )
{
	if( !pPlayer || iSequence < 0 || !HasModel() )
		return;

	pPlayer->pev->viewmodel = pev->model;
	pPlayer->pev->weaponmodel = 0;
	pPlayer->pev->weaponanim = iSequence;
	pPlayer->m_fWeapon = FALSE;
	pPlayer->UpdateClientData();

	MESSAGE_BEGIN( MSG_ONE, SVC_WEAPONANIM, NULL, pPlayer->pev );
		WRITE_BYTE( iSequence );
		WRITE_BYTE( 0 );
	MESSAGE_END();

	SendLadderViewState( pPlayer, TRUE, iSequence, flDuration );
}

void CCOFLadderManager::SendLadderViewState( CBasePlayer *pPlayer, BOOL fActive, int iSequence, float flDuration )
{
	if( !pPlayer || !gmsgCofLadder )
		return;

	MESSAGE_BEGIN( MSG_ONE, gmsgCofLadder, NULL, pPlayer->pev );
		WRITE_BYTE( fActive ? 1 : 0 );
		if( fActive )
		{
			WRITE_STRING( HasModel() ? STRING( pev->model ) : "" );
			WRITE_BYTE( COF_ClampInt( iSequence, 0, 255 ) );
			WRITE_SHORT( COF_ClampInt( (int)( flDuration * 1000.0f ), 1, 30000 ) );
			WRITE_BYTE( (int)m_iStage );
			WRITE_CHAR( m_iStage == LADDER_END ? m_iExitSide : 0 );
		}
	MESSAGE_END();
}

void CCOFLadderManager::LadderThink( void )
{
	CBasePlayer *pPlayer = (CBasePlayer *)(CBaseEntity *)m_hPlayer;
	if( !pPlayer || !pPlayer->IsAlive() )
	{
		FinishClimb( FALSE );
		return;
	}

	StudioFrameAdvance();
	UpdatePlayerPosition();

	if( gpGlobals->time >= m_flStageEndTime || m_fSequenceFinished )
		AdvanceStage();

	if( m_iStage != LADDER_IDLE )
		pev->nextthink = gpGlobals->time + COF_LADDER_THINK_RATE;
}

void CCOFLadderManager::AdvanceStage( void )
{
	if( m_iStage == LADDER_START )
	{
		const char *pszLoop = PickLoopSequence( m_fGoingUp );
		if( m_iLoopsLeft > 0 && pszLoop )
		{
			m_iStage = LADDER_LOOP;
			m_iLoopsLeft--;
			m_flStageEndTime = gpGlobals->time + PlaySequenceByName( pszLoop );
			return;
		}

		m_iStage = LADDER_END;
		const char *pszEnd = m_fGoingUp ? PickSequence( m_iszEndUp, "climb_end_up" ) : PickSequence( m_iszEndDown, "climb_end_down" );
		m_flStageEndTime = gpGlobals->time + PlaySequenceByName( pszEnd );
		return;
	}

	if( m_iStage == LADDER_LOOP )
	{
		const char *pszLoop = PickLoopSequence( m_fGoingUp );
		if( m_iLoopsLeft > 0 && pszLoop )
		{
			m_iLoopsLeft--;
			m_flStageEndTime = gpGlobals->time + PlaySequenceByName( pszLoop );
			return;
		}

		m_iStage = LADDER_END;
		const char *pszEnd = m_fGoingUp ? PickSequence( m_iszEndUp, "climb_end_up" ) : PickSequence( m_iszEndDown, "climb_end_down" );
		m_flStageEndTime = gpGlobals->time + PlaySequenceByName( pszEnd );
		return;
	}

	FinishClimb( TRUE );
}

void CCOFLadderManager::UpdatePlayerPosition( void )
{
	CBasePlayer *pPlayer = (CBasePlayer *)(CBaseEntity *)m_hPlayer;
	if( !pPlayer )
		return;

	const float flDuration = Q_max( m_flClimbEndTime - m_flClimbStartTime, COF_LADDER_MIN_SEQUENCE_TIME );
	const float flRawFraction = COF_ClampFloat( ( gpGlobals->time - m_flClimbStartTime ) / flDuration, 0.0f, 1.0f );
	const float flMoveFraction = COF_SmoothStep( flRawFraction );

	Vector vecOrigin = m_vecStartOrigin + ( m_vecEndOrigin - m_vecStartOrigin ) * flMoveFraction;
	Vector vecAngles;
	vecAngles.x = COF_LerpAngle( m_vecStartAngles.x, m_vecEndAngles.x, flMoveFraction );
	vecAngles.y = COF_LerpAngle( m_vecStartAngles.y, m_vecEndAngles.y, flMoveFraction );
	vecAngles.z = COF_LerpAngle( m_vecStartAngles.z, m_vecEndAngles.z, flMoveFraction );

	pPlayer->pev->velocity = g_vecZero;
	pPlayer->pev->basevelocity = g_vecZero;
	pPlayer->pev->movetype = MOVETYPE_NONE;
	pPlayer->pev->solid = SOLID_NOT;
	UTIL_SetOrigin( pPlayer->pev, vecOrigin );
	pPlayer->pev->angles = vecAngles;
	pPlayer->pev->v_angle = vecAngles;
	pPlayer->pev->fixangle = TRUE;
}

void CCOFLadderManager::FinishClimb( BOOL fFireTargets )
{
	CBasePlayer *pPlayer = (CBasePlayer *)(CBaseEntity *)m_hPlayer;
	if( pPlayer )
	{
		pPlayer->pev->velocity = g_vecZero;
		pPlayer->pev->basevelocity = g_vecZero;
		UTIL_SetOrigin( pPlayer->pev, COF_FindClearPlayerOrigin( pPlayer, m_vecEndOrigin ) );
		pPlayer->pev->angles = m_vecEndAngles;
		pPlayer->pev->v_angle = m_vecEndAngles;
		pPlayer->pev->fixangle = TRUE;
		pPlayer->pev->movetype = m_iSavedMoveType;
		pPlayer->pev->solid = m_iSavedSolid;
		RestorePlayerView( pPlayer );
		SendLadderViewState( pPlayer, FALSE );
		pPlayer->EnableControl( TRUE );
		pPlayer->m_flNextAttack = UTIL_WeaponTimeBase() + 0.1f;
	}

	SetBits( pev->effects, EF_NODRAW );
	ResetThink();
	pev->nextthink = 0.0f;
	m_hPlayer = NULL;
	m_iStage = LADDER_IDLE;
	m_iLoopsLeft = 0;
	m_iExitSide = 0;
	m_flClimbStartTime = 0.0f;
	m_flClimbEndTime = 0.0f;

	if( fFireTargets )
	{
		CBaseEntity *pActivator = pPlayer ? (CBaseEntity *)pPlayer : (CBaseEntity *)this;
		SUB_UseTargets( pActivator, USE_TOGGLE, 0 );
	}
}

void CCOFLadderManager::RestorePlayerView( CBasePlayer *pPlayer )
{
	if( !pPlayer )
		return;

	pPlayer->pev->viewmodel = m_iszSavedViewModel;
	pPlayer->pev->weaponmodel = m_iszSavedWeaponModel;
	pPlayer->m_fWeapon = FALSE;

	if( pPlayer->m_pActiveItem )
		pPlayer->m_pActiveItem->UpdateItemInfo();

	pPlayer->UpdateClientData();
}

int CCOFLadderManager::EstimateLoopCount( const Vector &vecStart, const Vector &vecEnd ) const
{
	const float flDistance = ( vecEnd - vecStart ).Length();
	const float flUsefulDistance = Q_max( 0.0f, flDistance - m_flDescendOffset );
	return COF_ClampInt( (int)ceil( flUsefulDistance / COF_LADDER_LOOP_DISTANCE ), 0, COF_LADDER_MAX_LOOPS );
}
