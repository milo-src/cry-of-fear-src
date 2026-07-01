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
#define COF_MAX_SUBTITLE_LINES 768
#define COF_MAX_SUBTITLE_TEXT 192

static BOOL g_fCOFSubtitlesLoaded = FALSE;
static int g_iCOFSubtitleLines = 0;
static char g_szCOFSubtitles[COF_MAX_SUBTITLE_LINES][COF_MAX_SUBTITLE_TEXT];

static void COF_CleanSubtitleLine( char *pszLine )
{
	if( !pszLine )
		return;

	size_t len = strlen( pszLine );
	while( len > 0 && ( pszLine[len - 1] == '\r' || pszLine[len - 1] == '\n' || pszLine[len - 1] == ' ' || pszLine[len - 1] == '\t' || pszLine[len - 1] == '*' ) )
		pszLine[--len] = '\0';
}

static void COF_LoadSubtitles( void )
{
	if( g_fCOFSubtitlesLoaded )
		return;

	g_fCOFSubtitlesLoaded = TRUE;

	int length = 0;
	byte *pFile = LOAD_FILE_FOR_ME( "txtfiles/subtitles.txt", &length );
	if( !pFile || length <= 0 )
		return;

	int line = 0;
	int start = 0;
	while( start <= length && line < COF_MAX_SUBTITLE_LINES )
	{
		int end = start;
		while( end < length && pFile[end] != '\n' )
			end++;

		int copyLen = Q_min( end - start, COF_MAX_SUBTITLE_TEXT - 1 );
		if( copyLen < 0 )
			copyLen = 0;

		memcpy( g_szCOFSubtitles[line], pFile + start, copyLen );
		g_szCOFSubtitles[line][copyLen] = '\0';
		COF_CleanSubtitleLine( g_szCOFSubtitles[line] );

		line++;
		start = end + 1;
		if( end >= length )
			break;
	}

	g_iCOFSubtitleLines = line;
	FREE_FILE( pFile );
}

static const char *COF_GetSubtitleLine( int iLine )
{
	COF_LoadSubtitles();

	if( iLine < 0 || iLine >= g_iCOFSubtitleLines )
		return NULL;

	return g_szCOFSubtitles[iLine];
}

static void COF_ShowSubtitleLine( CBaseEntity *pActivator, int iLine )
{
	const char *pszLine = COF_GetSubtitleLine( iLine );
	if( !pszLine || !pszLine[0] )
		return;

	CBasePlayer *pPlayer = COF_PlayerFromEntity( pActivator );
	if( pPlayer )
		ClientPrint( pPlayer->pev, HUD_PRINTCENTER, pszLine );
}

static void COF_SendMP3Command( const char *pszTrack )
{
	if( !pszTrack || !pszTrack[0] )
		return;

	for( int i = 1; i <= gpGlobals->maxClients; i++ )
	{
		CBasePlayer *pPlayer = (CBasePlayer *)UTIL_PlayerByIndex( i );
		if( !pPlayer )
			continue;

		if( !strnicmp( pszTrack, "mp3/", 4 ) )
			CLIENT_COMMAND( pPlayer->edict(), "mp3 play %s\n", pszTrack );
		else
			CLIENT_COMMAND( pPlayer->edict(), "mp3 play mp3/%s\n", pszTrack );
	}
}

static void COF_StopMP3( void )
{
	for( int i = 1; i <= gpGlobals->maxClients; i++ )
	{
		CBasePlayer *pPlayer = (CBasePlayer *)UTIL_PlayerByIndex( i );
		if( pPlayer )
			CLIENT_COMMAND( pPlayer->edict(), "mp3 stop\n" );
	}
}


class CCOFFmodStream : public CBaseDelay
{
public:
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
};

LINK_ENTITY_TO_CLASS( ambient_fmodstream, CCOFFmodStream )

void CCOFFmodStream::Spawn( void )
{
	pev->solid = SOLID_NOT;
	SetUse( &CCOFFmodStream::Use );
}

void CCOFFmodStream::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if( useType == USE_OFF )
		COF_StopMP3();
	else if( COF_HasText( pev->message ) )
		COF_SendMP3Command( STRING( pev->message ) );

	SUB_UseTargets( pActivator, useType, value );
}

class CCOFKillMP3 : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFKillMP3::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_StopMP3();
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_killmp3, CCOFKillMP3 )

class CCOFSimpleText : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFSimpleText::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_ShowText( pActivator, pev->message );
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_simpletext, CCOFSimpleText )
LINK_ENTITY_TO_CLASS( cof_chapter, CCOFSimpleText )
LINK_ENTITY_TO_CLASS( cof_blackandwhite, CCOFSimpleText )

class CCOFSubtitleMain : public CBaseDelay
{
public:
	CCOFSubtitleMain() : m_iLineNumber( -1 ) {}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "linenumber" ) )
		{
			m_iLineNumber = atoi( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void )
	{
		pev->solid = SOLID_NOT;
		SetUse( &CCOFSubtitleMain::Use );
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_ShowSubtitleLine( pActivator, m_iLineNumber );
		SUB_UseTargets( pActivator, useType, value );
	}

	int m_iLineNumber;
};

class CCOFSubtitleLineChange : public CBaseDelay
{
public:
	CCOFSubtitleLineChange() : m_iLineChange( -1 ) {}

	void KeyValue( KeyValueData *pkvd )
	{
		if( FStrEq( pkvd->szKeyName, "linechange" ) )
		{
			m_iLineChange = atoi( pkvd->szValue );
			pkvd->fHandled = TRUE;
		}
		else
			CBaseDelay::KeyValue( pkvd );
	}

	void Spawn( void )
	{
		pev->solid = SOLID_NOT;
		SetUse( &CCOFSubtitleLineChange::Use );
	}

	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_ShowSubtitleLine( pActivator, m_iLineChange );
		SUB_UseTargets( pActivator, useType, value );
	}

	int m_iLineChange;
};

LINK_ENTITY_TO_CLASS( subtitle_main, CCOFSubtitleMain )
LINK_ENTITY_TO_CLASS( subtitle_linechange, CCOFSubtitleLineChange )
LINK_ENTITY_TO_CLASS( subtitle_multiple, CCOFSubtitleMain )

class CCOFObjective : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFObjective::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_ShowText( pActivator, pev->message );
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_objective, CCOFObjective )

class CCOFScreenEffect : public CBaseDelay
{
public:
	void Spawn( void ) { pev->solid = SOLID_NOT; SetUse( &CCOFScreenEffect::Use ); }
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
	{
		COF_ShowText( pActivator, pev->message );
		SUB_UseTargets( pActivator, useType, value );
	}
};

LINK_ENTITY_TO_CLASS( cof_blur, CCOFScreenEffect )
LINK_ENTITY_TO_CLASS( cof_credits, CCOFScreenEffect )


LINK_ENTITY_TO_CLASS( cof_billboard, CCOFScreenEffect )
LINK_ENTITY_TO_CLASS( cof_bosshealthbar, CCOFScreenEffect )
LINK_ENTITY_TO_CLASS( env_fog, CCOFScreenEffect )