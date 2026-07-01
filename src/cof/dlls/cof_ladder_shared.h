/***
*
*   Shared helpers for Cry of Fear ladder compatibility entities.
*
****/

#pragma once

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"

const float COF_LADDER_THINK_RATE = 0.02f;
const float COF_LADDER_MIN_SEQUENCE_TIME = 0.15f;
const float COF_LADDER_LOOP_DISTANCE = 96.0f;
const int COF_LADDER_MAX_LOOPS = 6;

inline int COF_ClampInt( int iValue, int iMin, int iMax )
{
	if( iValue < iMin )
		return iMin;
	if( iValue > iMax )
		return iMax;
	return iValue;
}

inline float COF_ClampFloat( float flValue, float flMin, float flMax )
{
	if( flValue < flMin )
		return flMin;
	if( flValue > flMax )
		return flMax;
	return flValue;
}

inline float COF_AngleDelta( float a, float b )
{
	float d = a - b;
	if( d > 180.0f )
		d -= 360.0f;
	else if( d < -180.0f )
		d += 360.0f;
	return d;
}

inline float COF_LerpAngle( float flStart, float flEnd, float flFraction )
{
	return flStart + COF_AngleDelta( flEnd, flStart ) * flFraction;
}

inline float COF_SmoothStep( float flFraction )
{
	flFraction = COF_ClampFloat( flFraction, 0.0f, 1.0f );
	return flFraction * flFraction * ( 3.0f - 2.0f * flFraction );
}

inline BOOL COF_IsPlayerOriginClear( CBasePlayer *pPlayer, const Vector &vecOrigin )
{
	if( !pPlayer )
		return FALSE;

	TraceResult tr;
	UTIL_TraceHull( vecOrigin, vecOrigin, ignore_monsters, human_hull, pPlayer->edict(), &tr );
	return !tr.fStartSolid && !tr.fAllSolid;
}

inline Vector COF_FindClearPlayerOrigin( CBasePlayer *pPlayer, const Vector &vecOrigin )
{
	if( COF_IsPlayerOriginClear( pPlayer, vecOrigin ) )
		return vecOrigin;

	for( float flOffset = 4.0f; flOffset <= 96.0f; flOffset += 4.0f )
	{
		const Vector vecTest = vecOrigin + Vector( 0.0f, 0.0f, flOffset );
		if( COF_IsPlayerOriginClear( pPlayer, vecTest ) )
			return vecTest;
	}

	return vecOrigin;
}
