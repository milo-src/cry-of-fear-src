/***
*
*   Cry of Fear compatibility monsters.
*
****/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "schedule.h"
#include "player.h"
#include "weapons.h"
#include "cof_utils.h"
#define SLOWER_AE_ATTACK_RIGHT 1
#define SLOWER_AE_ATTACK_HEAVY 3
#define SLOWER_FLINCH_DELAY 1.6f

enum COFSlowerVariant
{
	SLOWER_NORMAL = 0,
	SLOWER_FAST,
	SLOWER_STUCK,
};

class CCOFMonsterSlower : public CBaseMonster
{
public:
	CCOFMonsterSlower();
	void Spawn( void );
	void Precache( void );
	void StartMonster( void );
	void MonsterThink( void );
	void SetYawSpeed( void );
	int Classify( void ) { return CLASS_ALIEN_MONSTER; }
	int IRelationship( CBaseEntity *pTarget );
	void HandleAnimEvent( MonsterEvent_t *pEvent );
	BOOL CheckMeleeAttack1( float flDot, float flDist );
	BOOL CheckRangeAttack1( float flDot, float flDist ) { return FALSE; }
	BOOL CheckRangeAttack2( float flDot, float flDist ) { return FALSE; }
	void Killed( entvars_t *pevAttacker, int iGib );
	int TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType );
	int IgnoreConditions( void );
	void PainSound( void );
	void AlertSound( void );
	void IdleSound( void );
	void AttackSound( void );

private:
	COFSlowerVariant GetVariant( void ) const;
	BOOL IsFastVariant( void ) const;
	BOOL IsStuckVariant( void ) const;
	const char *DefaultModel( void ) const;
	void NormalizeBodygroup( void );
	float SkillHealth( void ) const;
	float SkillDamage( BOOL fHeavyAttack ) const;
	BOOL IsHeavyAttackSequence( void );
	BOOL ShouldUseBaseAI( void ) const;
	CBaseEntity *FindSlowerEnemy( void );
	void SetSlowerEnemy( CBaseEntity *pEnemy );
	void SlowerCombatThink( float flInterval );
	void MoveTowardEnemy( float flInterval, float flDist );
	void HammerAttack( BOOL fHeavyAttack );
	void QueueDeathTrigger( void );
	void FireQueuedDeathTrigger( void );

	static const char *pAttackSounds[];
	static const char *pFastAttackSounds[];
	static const char *pPainSounds[];
	static const char *pFastPainSounds[];
	static const char *pAlertSounds[];
	static const char *pFastAlertSounds[];
	static const char *pHitSounds[];
	static const char *pMissSounds[];
	static const char *pExtraSounds[];

	BOOL m_fFirstHitReacted;
	float m_flNextPainSound;
	float m_flNextFlinch;
	float m_flNextEnemySearch;
	string_t m_iszQueuedDeathTarget;
	float m_flQueuedDeathTargetTime;
};

LINK_ENTITY_TO_CLASS( monster_slower, CCOFMonsterSlower )
LINK_ENTITY_TO_CLASS( monster_slower3, CCOFMonsterSlower )
LINK_ENTITY_TO_CLASS( monster_slowerstuck, CCOFMonsterSlower )

const char *CCOFMonsterSlower::pAttackSounds[] =
{
	"slower/slower_attack1.wav",
	"slower/slower_attack2.wav",
};

const char *CCOFMonsterSlower::pFastAttackSounds[] =
{
	"slower3/slower_attack1.wav",
	"slower3/slower_attack2.wav",
};

const char *CCOFMonsterSlower::pPainSounds[] =
{
	"slower/slower_pain1.wav",
	"slower/slower_pain2.wav",
};

const char *CCOFMonsterSlower::pFastPainSounds[] =
{
	"slower3/slower_pain1.wav",
	"slower3/slower_pain2.wav",
};

const char *CCOFMonsterSlower::pAlertSounds[] =
{
	"slower/slower_alert10.wav",
	"slower/slower_alert20.wav",
	"slower/slower_alert30.wav",
};

const char *CCOFMonsterSlower::pFastAlertSounds[] =
{
	"slower3/slower_alert10.wav",
	"slower3/slower_alert20.wav",
	"slower3/slower_alert30.wav",
};

const char *CCOFMonsterSlower::pHitSounds[] =
{
	"slower/hammer_strike1.wav",
	"slower/hammer_strike2.wav",
	"slower/hammer_strike3.wav",
};

const char *CCOFMonsterSlower::pMissSounds[] =
{
	"slower/hammer_miss1.wav",
	"slower/hammer_miss2.wav",
};

const char *CCOFMonsterSlower::pExtraSounds[] =
{
	"common/npc_step1.wav",
	"slower/scream1.wav",
	"slower/head_gore.wav",
	"slower/k_crawl1.wav",
	"slower/k_crawl2.wav",
	"slower/k_crawl3.wav",
	"slower/k_crawl4.wav",
	"slower/k_crawl5.wav",
	"slower/k_crawl6.wav",
	"slower/k_crawl7.wav",
};

CCOFMonsterSlower::CCOFMonsterSlower() :
	m_fFirstHitReacted( FALSE ),
	m_flNextPainSound( 0.0f ),
	m_flNextFlinch( 0.0f ),
	m_flNextEnemySearch( 0.0f ),
	m_iszQueuedDeathTarget( iStringNull ),
	m_flQueuedDeathTargetTime( 0.0f )
{
}

COFSlowerVariant CCOFMonsterSlower::GetVariant( void ) const
{
	if( FClassnameIs( pev, "monster_slower3" ) )
		return SLOWER_FAST;

	if( FClassnameIs( pev, "monster_slowerstuck" ) )
		return SLOWER_STUCK;

	return SLOWER_NORMAL;
}

BOOL CCOFMonsterSlower::IsFastVariant( void ) const
{
	return GetVariant() == SLOWER_FAST;
}

BOOL CCOFMonsterSlower::IsStuckVariant( void ) const
{
	return GetVariant() == SLOWER_STUCK;
}

const char *CCOFMonsterSlower::DefaultModel( void ) const
{
	switch( GetVariant() )
	{
	case SLOWER_FAST:
		return "models/slower3.mdl";
	case SLOWER_STUCK:
		return "models/slower2.mdl";
	default:
		return "models/slower.mdl";
	}
}

void CCOFMonsterSlower::NormalizeBodygroup( void )
{
	if( pev->body >= 0 )
		return;

	const char *pszModel = STRING( pev->model );

	if( strstr( pszModel, "slower2.mdl" ) )
		pev->body = RANDOM_LONG( 0, 2 );
	else if( strstr( pszModel, "slower3.mdl" ) || strstr( pszModel, "slowerno.mdl" ) || strstr( pszModel, "slowerno_boss.mdl" ) )
		pev->body = 0;
	else
		pev->body = RANDOM_LONG( 0, 5 );
}

float CCOFMonsterSlower::SkillHealth( void ) const
{
	switch( (int)CVAR_GET_FLOAT( "skill" ) )
	{
	case 1: return 20.0f;
	case 2: return 40.0f;
	case 3: return 70.0f;
	default: return 110.0f;
	}
}

float CCOFMonsterSlower::SkillDamage( BOOL fHeavyAttack ) const
{
	float flDamage;

	switch( (int)CVAR_GET_FLOAT( "skill" ) )
	{
	case 1: flDamage = 5.0f; break;
	case 2: flDamage = 7.0f; break;
	case 3: flDamage = 10.0f; break;
	default: flDamage = 20.0f; break;
	}

	if( fHeavyAttack )
		flDamage *= 1.5f;

	return flDamage;
}

BOOL CCOFMonsterSlower::IsHeavyAttackSequence( void )
{
	if( IsFastVariant() || IsStuckVariant() )
		return FALSE;

	return pev->sequence == LookupSequence( "attack4" );
}

void CCOFMonsterSlower::Precache( void )
{
	if( FStringNull( pev->model ) )
		pev->model = MAKE_STRING( DefaultModel() );

	PRECACHE_MODEL( STRING( pev->model ) );
	PRECACHE_MODEL( "models/slower.mdl" );
	PRECACHE_MODEL( "models/slower2.mdl" );
	PRECACHE_MODEL( "models/slower3.mdl" );
	PRECACHE_MODEL( "models/slower_headgibs.mdl" );
	PRECACHE_SOUND_ARRAY( pAttackSounds );
	PRECACHE_SOUND_ARRAY( pFastAttackSounds );
	PRECACHE_SOUND_ARRAY( pPainSounds );
	PRECACHE_SOUND_ARRAY( pFastPainSounds );
	PRECACHE_SOUND_ARRAY( pAlertSounds );
	PRECACHE_SOUND_ARRAY( pFastAlertSounds );
	PRECACHE_SOUND_ARRAY( pHitSounds );
	PRECACHE_SOUND_ARRAY( pMissSounds );
	PRECACHE_SOUND_ARRAY( pExtraSounds );
}

void CCOFMonsterSlower::Spawn( void )
{
	Precache();
	NormalizeBodygroup();

	SET_MODEL( ENT( pev ), STRING( pev->model ) );
	UTIL_SetSize( pev, VEC_HUMAN_HULL_MIN, VEC_HUMAN_HULL_MAX );

	pev->solid = SOLID_SLIDEBOX;
	pev->movetype = MOVETYPE_STEP;
	pev->takedamage = DAMAGE_AIM;
	pev->health = pev->health > 0 ? pev->health : SkillHealth();
	pev->max_health = pev->health;
	pev->view_ofs = VEC_VIEW;
	m_bloodColor = BLOOD_COLOR_RED;
	m_flFieldOfView = 0.5f;
	m_MonsterState = MONSTERSTATE_NONE;
	m_afCapability = bits_CAP_DOORS_GROUP | bits_CAP_MELEE_ATTACK1;

	MonsterInit();
}

void CCOFMonsterSlower::StartMonster( void )
{
	CBaseMonster::StartMonster();

	m_flDistLook = IsFastVariant() ? 2300.0f : 1900.0f;
	m_flDistTooFar = IsFastVariant() ? 1400.0f : 1100.0f;

	if( !m_pCine && m_MonsterState != MONSTERSTATE_DEAD )
		SetActivity( ACT_IDLE );
}

BOOL CCOFMonsterSlower::ShouldUseBaseAI( void ) const
{
	return m_pCine != NULL ||
		m_MonsterState == MONSTERSTATE_SCRIPT ||
		m_MonsterState == MONSTERSTATE_DEAD ||
		pev->deadflag != DEAD_NO;
}

CBaseEntity *CCOFMonsterSlower::FindSlowerEnemy( void )
{
	CBaseEntity *pPlayer = UTIL_PlayerByIndex( 1 );

	if( !pPlayer || !pPlayer->IsAlive() || FBitSet( pPlayer->pev->flags, FL_NOTARGET ) )
		return NULL;

	const float flDist = ( pPlayer->pev->origin - pev->origin ).Length();
	if( flDist > m_flDistLook )
		return NULL;

	if( flDist > 192.0f && !FInViewCone( pPlayer ) )
		return NULL;

	if( flDist > 256.0f && !FVisible( pPlayer ) )
		return NULL;

	return pPlayer;
}

void CCOFMonsterSlower::SetSlowerEnemy( CBaseEntity *pEnemy )
{
	if( !pEnemy )
		return;

	if( m_hEnemy != pEnemy )
	{
		m_hEnemy = pEnemy;
		m_vecEnemyLKP = pEnemy->pev->origin;
		AlertSound();
	}

	SetConditions( bits_COND_NEW_ENEMY | bits_COND_SEE_ENEMY | bits_COND_SEE_CLIENT | bits_COND_SEE_HATE );
	m_IdealMonsterState = MONSTERSTATE_COMBAT;
	m_MonsterState = MONSTERSTATE_COMBAT;
}

void CCOFMonsterSlower::MoveTowardEnemy( float flInterval, float flDist )
{
	if( m_hEnemy == 0 )
		return;

	const float flAttackDist = IsFastVariant() ? 92.0f : 82.0f;
	if( flDist <= flAttackDist * 0.82f )
		return;

	if( m_Activity != ACT_WALK )
		SetActivity( ACT_WALK );

	Vector vecDir = m_hEnemy->pev->origin - pev->origin;
	vecDir.z = 0;
	pev->ideal_yaw = UTIL_VecToYaw( vecDir );
	ChangeYaw( pev->yaw_speed );

	const float flSpeed = IsFastVariant() ? 245.0f : ( IsStuckVariant() ? 90.0f : 155.0f );
	const float flStep = flSpeed * flInterval;

	if( !WALK_MOVE( ENT( pev ), pev->angles.y, flStep, WALKMOVE_NORMAL ) )
	{
		if( !WALK_MOVE( ENT( pev ), pev->angles.y + 35.0f, flStep * 0.65f, WALKMOVE_NORMAL ) )
			WALK_MOVE( ENT( pev ), pev->angles.y - 35.0f, flStep * 0.65f, WALKMOVE_NORMAL );
	}
}

void CCOFMonsterSlower::SlowerCombatThink( float flInterval )
{
	if( gpGlobals->time >= m_flNextEnemySearch || m_hEnemy == 0 || !m_hEnemy->IsAlive() )
	{
		m_flNextEnemySearch = gpGlobals->time + 0.25f;
		SetSlowerEnemy( FindSlowerEnemy() );
	}

	if( m_hEnemy == 0 || !m_hEnemy->IsAlive() )
	{
		if( m_Activity != ACT_IDLE )
			SetActivity( ACT_IDLE );

		m_MonsterState = MONSTERSTATE_IDLE;
		return;
	}

	m_vecEnemyLKP = m_hEnemy->pev->origin;

	Vector vecToEnemy = m_hEnemy->pev->origin - pev->origin;
	vecToEnemy.z = 0;
	const float flDist = vecToEnemy.Length();
	const float flAttackDist = IsFastVariant() ? 92.0f : 82.0f;

	if( flDist > 0.1f )
	{
		pev->ideal_yaw = UTIL_VecToYaw( vecToEnemy );
		ChangeYaw( pev->yaw_speed );
	}

	if( m_Activity == ACT_MELEE_ATTACK1 )
	{
		if( m_fSequenceFinished && gpGlobals->time >= m_flNextAttack - 0.25f )
			SetActivity( flDist <= flAttackDist ? ACT_IDLE : ACT_WALK );
		return;
	}

	if( flDist <= flAttackDist && gpGlobals->time >= m_flNextAttack )
	{
		SetActivity( ACT_MELEE_ATTACK1 );
		m_flNextAttack = gpGlobals->time + ( IsFastVariant() ? 0.72f : 1.0f );
		return;
	}

	MoveTowardEnemy( flInterval, flDist );
}

void CCOFMonsterSlower::MonsterThink( void )
{
	if( ShouldUseBaseAI() )
	{
		CBaseMonster::MonsterThink();
		FireQueuedDeathTrigger();
		return;
	}

	pev->nextthink = gpGlobals->time + 0.05f;

	float flInterval = StudioFrameAdvance();
	DispatchAnimEvents( flInterval );

	SlowerCombatThink( flInterval );
	FCheckAITrigger();
}

void CCOFMonsterSlower::SetYawSpeed( void )
{
	switch( m_Activity )
	{
	case ACT_MELEE_ATTACK1:
		pev->yaw_speed = IsFastVariant() ? 190 : 150;
		break;
	case ACT_WALK:
	case ACT_RUN:
		pev->yaw_speed = IsFastVariant() ? 170 : 120;
		break;
	default:
		pev->yaw_speed = IsFastVariant() ? 130 : 95;
		break;
	}
}

BOOL CCOFMonsterSlower::CheckMeleeAttack1( float flDot, float flDist )
{
	const float flAttackDist = IsFastVariant() ? 92.0f : 82.0f;

	if( flDist <= flAttackDist && flDot >= 0.62f && m_hEnemy != 0 )
		return TRUE;

	return FALSE;
}

int CCOFMonsterSlower::IRelationship( CBaseEntity *pTarget )
{
	if( pTarget && pTarget->IsPlayer() )
		return R_HT;

	return CBaseMonster::IRelationship( pTarget );
}

void CCOFMonsterSlower::HammerAttack( BOOL fHeavyAttack )
{
	CBaseEntity *pHurt = CheckTraceHullAttack( IsFastVariant() ? 86.0f : 78.0f, (int)SkillDamage( fHeavyAttack ), DMG_CLUB );

	if( pHurt )
	{
		if( pHurt->pev->flags & ( FL_MONSTER | FL_CLIENT ) )
		{
			pHurt->pev->punchangle.x = fHeavyAttack ? 8 : 5;
			pHurt->pev->punchangle.z = fHeavyAttack ? RANDOM_FLOAT( -7, 7 ) : RANDOM_FLOAT( -4, 4 );
			pHurt->pev->velocity = pHurt->pev->velocity - gpGlobals->v_forward * ( fHeavyAttack ? 155 : 110 );
		}

		EMIT_SOUND_DYN( ENT( pev ), CHAN_WEAPON, RANDOM_SOUND_ARRAY( pHitSounds ), 1.0f, ATTN_NORM, 0, 100 + RANDOM_LONG( -5, 5 ) );
	}
	else
	{
		EMIT_SOUND_DYN( ENT( pev ), CHAN_WEAPON, RANDOM_SOUND_ARRAY( pMissSounds ), 1.0f, ATTN_NORM, 0, 100 + RANDOM_LONG( -5, 5 ) );
	}

	if( RANDOM_LONG( 0, 1 ) )
		AttackSound();
}

void CCOFMonsterSlower::HandleAnimEvent( MonsterEvent_t *pEvent )
{
	switch( pEvent->event )
	{
	case SLOWER_AE_ATTACK_RIGHT:
		HammerAttack( FALSE );
		break;
	case SLOWER_AE_ATTACK_HEAVY:
		HammerAttack( IsHeavyAttackSequence() );
		break;
	default:
		CBaseMonster::HandleAnimEvent( pEvent );
		break;
	}
}

void CCOFMonsterSlower::Killed( entvars_t *pevAttacker, int iGib )
{
	QueueDeathTrigger();
	CBaseMonster::Killed( pevAttacker, iGib );
}

void CCOFMonsterSlower::QueueDeathTrigger( void )
{
	if( m_iTriggerCondition != AITRIGGER_DEATH || !COF_HasText( m_iszTriggerTarget ) )
		return;

	m_iszQueuedDeathTarget = m_iszTriggerTarget;
	m_flQueuedDeathTargetTime = gpGlobals->time + 0.2f;
	m_iTriggerCondition = AITRIGGER_NONE;
}

void CCOFMonsterSlower::FireQueuedDeathTrigger( void )
{
	if( !COF_HasText( m_iszQueuedDeathTarget ) || gpGlobals->time < m_flQueuedDeathTargetTime )
		return;

	if( m_IdealMonsterState != MONSTERSTATE_DEAD && m_MonsterState != MONSTERSTATE_DEAD && pev->deadflag == DEAD_NO )
		return;

	FireTargets( STRING( m_iszQueuedDeathTarget ), this, this, USE_TOGGLE, 0 );
	m_iszQueuedDeathTarget = iStringNull;
}

int CCOFMonsterSlower::TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType )
{
	if( IsAlive() && gpGlobals->time >= m_flNextPainSound )
	{
		PainSound();
		m_flNextPainSound = gpGlobals->time + 0.65f;
	}

	if( IsAlive() && !m_fFirstHitReacted )
	{
		m_fFirstHitReacted = TRUE;
		m_flNextAttack = gpGlobals->time + ( IsFastVariant() ? 0.45f : 0.75f );
		m_flNextFlinch = 0.0f;
	}

	if( IsAlive() && pevAttacker )
	{
		CBaseEntity *pAttacker = CBaseEntity::Instance( ENT( pevAttacker ) );
		if( pAttacker && pAttacker->IsPlayer() )
			SetSlowerEnemy( pAttacker );
	}

	return CBaseMonster::TakeDamage( pevInflictor, pevAttacker, flDamage, bitsDamageType );
}

int CCOFMonsterSlower::IgnoreConditions( void )
{
	int iIgnore = CBaseMonster::IgnoreConditions();

	if( m_Activity == ACT_MELEE_ATTACK1 )
		iIgnore |= bits_COND_LIGHT_DAMAGE | bits_COND_HEAVY_DAMAGE;

	if( m_Activity == ACT_SMALL_FLINCH || m_Activity == ACT_BIG_FLINCH )
	{
		if( m_flNextFlinch < gpGlobals->time )
			m_flNextFlinch = gpGlobals->time + SLOWER_FLINCH_DELAY;
	}
	else if( m_flNextFlinch >= gpGlobals->time )
	{
		iIgnore |= bits_COND_LIGHT_DAMAGE | bits_COND_HEAVY_DAMAGE;
	}

	return iIgnore;
}

void CCOFMonsterSlower::PainSound( void )
{
	if( IsFastVariant() )
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pFastPainSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
	else
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pPainSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
}

void CCOFMonsterSlower::AlertSound( void )
{
	if( IsFastVariant() )
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pFastAlertSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
	else
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pAlertSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
}

void CCOFMonsterSlower::IdleSound( void )
{
	if( !IsStuckVariant() && RANDOM_LONG( 0, 2 ) == 0 )
		AlertSound();
}

void CCOFMonsterSlower::AttackSound( void )
{
	if( IsFastVariant() )
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pFastAttackSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
	else
		EMIT_SOUND_DYN( ENT( pev ), CHAN_VOICE, RANDOM_SOUND_ARRAY( pAttackSounds ), 1.0f, ATTN_NORM, 0, 95 + RANDOM_LONG( 0, 9 ) );
}

class CCOFMonsterCompat : public CBaseMonster
{
public:
	CCOFMonsterCompat() :
		m_flNextEnemySearch( 0.0f ),
		m_flNextAttackTime( 0.0f ),
		m_iszQueuedDeathTarget( iStringNull ),
		m_flQueuedDeathTargetTime( 0.0f )
	{
	}

	void Spawn( void );
	void Precache( void );
	void StartMonster( void );
	void MonsterThink( void );
	void SetYawSpeed( void );
	int Classify( void ) { return CLASS_ALIEN_MONSTER; }
	int IRelationship( CBaseEntity *pTarget );
	BOOL CheckMeleeAttack1( float flDot, float flDist );
	BOOL CheckRangeAttack1( float flDot, float flDist ) { return FALSE; }
	BOOL CheckRangeAttack2( float flDot, float flDist ) { return FALSE; }
	int TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType );
	void Killed( entvars_t *pevAttacker, int iGib );

private:
	const char *DefaultModel( void ) const;
	float DefaultHealth( void ) const;
	float MoveSpeed( void ) const;
	float AttackDamage( void ) const;
	float AttackDistance( void ) const;
	CBaseEntity *FindEnemy( void );
	void SetEnemy( CBaseEntity *pEnemy );
	void CombatThink( float flInterval );
	void MoveTowardEnemy( float flInterval, float flDist );
	void MeleeAttack( void );
	void QueueDeathTrigger( void );
	void FireQueuedDeathTrigger( void );

	float m_flNextEnemySearch;
	float m_flNextAttackTime;
	string_t m_iszQueuedDeathTarget;
	float m_flQueuedDeathTargetTime;
};

LINK_ENTITY_TO_CLASS( monster_sewmo, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_rcrazy, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_faceless, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_facelessv, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_nerd, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_faster, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_child, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_spitter, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_stranger, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_taller, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_sawrunner, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_baby, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_suicider, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_krypande, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_twitcher, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_twitcher2, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_twitcher3, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_twitcher4, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_crab, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_watro, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_crazybitch, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_sawcrazy, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_ruben, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_booksimonsledgehammer, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_booksimon, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_bosschainsaw, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_sewerboss, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_doctorboss, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_roofboss, CCOFMonsterCompat )
LINK_ENTITY_TO_CLASS( monster_custom, CCOFMonsterCompat )

const char *CCOFMonsterCompat::DefaultModel( void ) const
{
	if( FClassnameIs( pev, "monster_sewmo" ) ) return "models/sewmo.mdl";
	if( FClassnameIs( pev, "monster_rcrazy" ) ) return "models/runningcrazy.mdl";
	if( FClassnameIs( pev, "monster_faceless" ) || FClassnameIs( pev, "monster_facelessv" ) ) return "models/Faceless.mdl";
	if( FClassnameIs( pev, "monster_nerd" ) ) return "models/psycho.mdl";
	if( FClassnameIs( pev, "monster_faster" ) ) return "models/faster.mdl";
	if( FClassnameIs( pev, "monster_child" ) ) return "models/children.mdl";
	if( FClassnameIs( pev, "monster_spitter" ) ) return "models/spitter.mdl";
	if( FClassnameIs( pev, "monster_stranger" ) ) return "models/stranger.mdl";
	if( FClassnameIs( pev, "monster_taller" ) ) return "models/taller.mdl";
	if( FClassnameIs( pev, "monster_sawrunner" ) ) return "models/sawrunner.mdl";
	if( FClassnameIs( pev, "monster_baby" ) ) return "models/baby.mdl";
	if( FClassnameIs( pev, "monster_suicider" ) ) return "models/suicider.mdl";
	if( FClassnameIs( pev, "monster_krypande" ) ) return "models/krypande.mdl";
	if( FClassnameIs( pev, "monster_twitcher" ) || FClassnameIs( pev, "monster_twitcher2" ) ||
		FClassnameIs( pev, "monster_twitcher3" ) || FClassnameIs( pev, "monster_twitcher4" ) ) return "models/twister.mdl";
	if( FClassnameIs( pev, "monster_crab" ) ) return "models/Facehead.mdl";
	if( FClassnameIs( pev, "monster_watro" ) ) return "models/watro.mdl";
	if( FClassnameIs( pev, "monster_crazybitch" ) ) return "models/crazywoman.mdl";
	if( FClassnameIs( pev, "monster_sawcrazy" ) ) return "models/sawcrazy.mdl";
	if( FClassnameIs( pev, "monster_ruben" ) ) return "models/crazyrumpel.mdl";
	if( FClassnameIs( pev, "monster_booksimonsledgehammer" ) ) return "models/booksimon_m.mdl";
	if( FClassnameIs( pev, "monster_booksimon" ) ) return "models/booksimon.mdl";
	if( FClassnameIs( pev, "monster_bosschainsaw" ) ) return "models/chainsawguy.mdl";
	if( FClassnameIs( pev, "monster_sewerboss" ) ) return "models/sewer_boss.mdl";
	if( FClassnameIs( pev, "monster_doctorboss" ) ) return "models/doctor_boss.mdl";
	if( FClassnameIs( pev, "monster_roofboss" ) ) return "models/carcassboss.mdl";

	return "models/slower.mdl";
}

float CCOFMonsterCompat::DefaultHealth( void ) const
{
	if( FClassnameIs( pev, "monster_sawrunner" ) || FClassnameIs( pev, "monster_bosschainsaw" ) )
		return 400.0f;
	if( FClassnameIs( pev, "monster_booksimon" ) || FClassnameIs( pev, "monster_booksimonsledgehammer" ) ||
		FClassnameIs( pev, "monster_doctorboss" ) || FClassnameIs( pev, "monster_roofboss" ) ||
		FClassnameIs( pev, "monster_sewerboss" ) )
		return 700.0f;
	if( FClassnameIs( pev, "monster_baby" ) || FClassnameIs( pev, "monster_crab" ) )
		return 35.0f;

	return 80.0f;
}

float CCOFMonsterCompat::MoveSpeed( void ) const
{
	if( FClassnameIs( pev, "monster_faster" ) || FClassnameIs( pev, "monster_rcrazy" ) ||
		FClassnameIs( pev, "monster_sawrunner" ) )
		return 250.0f;
	if( FClassnameIs( pev, "monster_baby" ) || FClassnameIs( pev, "monster_crab" ) ||
		FClassnameIs( pev, "monster_krypande" ) )
		return 95.0f;

	return 155.0f;
}

float CCOFMonsterCompat::AttackDamage( void ) const
{
	if( FClassnameIs( pev, "monster_sawrunner" ) || FClassnameIs( pev, "monster_bosschainsaw" ) )
		return 35.0f;
	if( FClassnameIs( pev, "monster_booksimon" ) || FClassnameIs( pev, "monster_booksimonsledgehammer" ) ||
		FClassnameIs( pev, "monster_doctorboss" ) || FClassnameIs( pev, "monster_roofboss" ) ||
		FClassnameIs( pev, "monster_sewerboss" ) )
		return 25.0f;
	if( FClassnameIs( pev, "monster_baby" ) || FClassnameIs( pev, "monster_crab" ) )
		return 8.0f;

	return 14.0f;
}

float CCOFMonsterCompat::AttackDistance( void ) const
{
	if( FClassnameIs( pev, "monster_baby" ) || FClassnameIs( pev, "monster_crab" ) ||
		FClassnameIs( pev, "monster_krypande" ) )
		return 58.0f;

	return 82.0f;
}

void CCOFMonsterCompat::Precache( void )
{
	if( FStringNull( pev->model ) )
		pev->model = MAKE_STRING( DefaultModel() );

	PRECACHE_MODEL( STRING( pev->model ) );
}

void CCOFMonsterCompat::Spawn( void )
{
	Precache();

	if( pev->body < 0 )
		pev->body = 0;

	SET_MODEL( ENT( pev ), STRING( pev->model ) );
	UTIL_SetSize( pev, VEC_HUMAN_HULL_MIN, VEC_HUMAN_HULL_MAX );

	pev->solid = SOLID_SLIDEBOX;
	pev->movetype = MOVETYPE_STEP;
	pev->takedamage = DAMAGE_AIM;
	pev->health = pev->health > 0 ? pev->health : DefaultHealth();
	pev->max_health = pev->health;
	pev->view_ofs = VEC_VIEW;
	m_bloodColor = BLOOD_COLOR_RED;
	m_flFieldOfView = 0.5f;
	m_MonsterState = MONSTERSTATE_NONE;
	m_afCapability = bits_CAP_DOORS_GROUP | bits_CAP_MELEE_ATTACK1;

	MonsterInit();
}

void CCOFMonsterCompat::StartMonster( void )
{
	CBaseMonster::StartMonster();
	m_flDistLook = 1800.0f;
	m_flDistTooFar = 1200.0f;

	if( !m_pCine && m_MonsterState != MONSTERSTATE_DEAD )
		SetActivity( ACT_IDLE );
}

void CCOFMonsterCompat::SetYawSpeed( void )
{
	switch( m_Activity )
	{
	case ACT_MELEE_ATTACK1:
		pev->yaw_speed = 170;
		break;
	case ACT_WALK:
	case ACT_RUN:
		pev->yaw_speed = 150;
		break;
	default:
		pev->yaw_speed = 110;
		break;
	}
}

int CCOFMonsterCompat::IRelationship( CBaseEntity *pTarget )
{
	if( pTarget && pTarget->IsPlayer() )
		return R_HT;

	return CBaseMonster::IRelationship( pTarget );
}

BOOL CCOFMonsterCompat::CheckMeleeAttack1( float flDot, float flDist )
{
	return m_hEnemy != 0 && flDist <= AttackDistance() && flDot >= 0.62f;
}

CBaseEntity *CCOFMonsterCompat::FindEnemy( void )
{
	CBaseEntity *pPlayer = UTIL_PlayerByIndex( 1 );
	if( !pPlayer || !pPlayer->IsAlive() || FBitSet( pPlayer->pev->flags, FL_NOTARGET ) )
		return NULL;

	const float flDist = ( pPlayer->pev->origin - pev->origin ).Length();
	if( flDist > m_flDistLook )
		return NULL;

	if( flDist > 192.0f && !FInViewCone( pPlayer ) )
		return NULL;

	if( flDist > 256.0f && !FVisible( pPlayer ) )
		return NULL;

	return pPlayer;
}

void CCOFMonsterCompat::SetEnemy( CBaseEntity *pEnemy )
{
	if( !pEnemy )
		return;

	m_hEnemy = pEnemy;
	m_vecEnemyLKP = pEnemy->pev->origin;
	SetConditions( bits_COND_NEW_ENEMY | bits_COND_SEE_ENEMY | bits_COND_SEE_CLIENT | bits_COND_SEE_HATE );
	m_IdealMonsterState = MONSTERSTATE_COMBAT;
	m_MonsterState = MONSTERSTATE_COMBAT;
}

void CCOFMonsterCompat::MoveTowardEnemy( float flInterval, float flDist )
{
	if( m_hEnemy == 0 || flDist <= AttackDistance() * 0.82f )
		return;

	if( m_Activity != ACT_WALK )
		SetActivity( ACT_WALK );

	Vector vecDir = m_hEnemy->pev->origin - pev->origin;
	vecDir.z = 0;
	pev->ideal_yaw = UTIL_VecToYaw( vecDir );
	ChangeYaw( pev->yaw_speed );

	const float flStep = MoveSpeed() * flInterval;
	if( !WALK_MOVE( ENT( pev ), pev->angles.y, flStep, WALKMOVE_NORMAL ) )
	{
		if( !WALK_MOVE( ENT( pev ), pev->angles.y + 35.0f, flStep * 0.65f, WALKMOVE_NORMAL ) )
			WALK_MOVE( ENT( pev ), pev->angles.y - 35.0f, flStep * 0.65f, WALKMOVE_NORMAL );
	}
}

void CCOFMonsterCompat::MeleeAttack( void )
{
	CBaseEntity *pHurt = CheckTraceHullAttack( AttackDistance(), (int)AttackDamage(), DMG_CLUB );
	if( pHurt && pHurt->pev->flags & ( FL_MONSTER | FL_CLIENT ) )
		pHurt->pev->punchangle.x = 5;
}

void CCOFMonsterCompat::CombatThink( float flInterval )
{
	if( gpGlobals->time >= m_flNextEnemySearch || m_hEnemy == 0 || !m_hEnemy->IsAlive() )
	{
		m_flNextEnemySearch = gpGlobals->time + 0.25f;
		SetEnemy( FindEnemy() );
	}

	if( m_hEnemy == 0 || !m_hEnemy->IsAlive() )
	{
		if( m_Activity != ACT_IDLE )
			SetActivity( ACT_IDLE );

		m_MonsterState = MONSTERSTATE_IDLE;
		return;
	}

	Vector vecToEnemy = m_hEnemy->pev->origin - pev->origin;
	vecToEnemy.z = 0;
	const float flDist = vecToEnemy.Length();

	if( flDist > 0.1f )
	{
		pev->ideal_yaw = UTIL_VecToYaw( vecToEnemy );
		ChangeYaw( pev->yaw_speed );
	}

	if( m_Activity == ACT_MELEE_ATTACK1 )
	{
		if( m_fSequenceFinished && gpGlobals->time >= m_flNextAttackTime - 0.2f )
			SetActivity( flDist <= AttackDistance() ? ACT_IDLE : ACT_WALK );
		return;
	}

	if( flDist <= AttackDistance() && gpGlobals->time >= m_flNextAttackTime )
	{
		SetActivity( ACT_MELEE_ATTACK1 );
		MeleeAttack();
		m_flNextAttackTime = gpGlobals->time + 0.9f;
		return;
	}

	MoveTowardEnemy( flInterval, flDist );
}

void CCOFMonsterCompat::MonsterThink( void )
{
	if( m_pCine || m_MonsterState == MONSTERSTATE_SCRIPT || m_MonsterState == MONSTERSTATE_DEAD || pev->deadflag != DEAD_NO )
	{
		CBaseMonster::MonsterThink();
		FireQueuedDeathTrigger();
		return;
	}

	pev->nextthink = gpGlobals->time + 0.05f;
	float flInterval = StudioFrameAdvance();
	DispatchAnimEvents( flInterval );
	CombatThink( flInterval );
	FCheckAITrigger();
}

int CCOFMonsterCompat::TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType )
{
	if( IsAlive() && pevAttacker )
	{
		CBaseEntity *pAttacker = CBaseEntity::Instance( ENT( pevAttacker ) );
		if( pAttacker && pAttacker->IsPlayer() )
			SetEnemy( pAttacker );
	}

	return CBaseMonster::TakeDamage( pevInflictor, pevAttacker, flDamage, bitsDamageType );
}

void CCOFMonsterCompat::Killed( entvars_t *pevAttacker, int iGib )
{
	QueueDeathTrigger();
	CBaseMonster::Killed( pevAttacker, iGib );
}

void CCOFMonsterCompat::QueueDeathTrigger( void )
{
	if( m_iTriggerCondition != AITRIGGER_DEATH || !COF_HasText( m_iszTriggerTarget ) )
		return;

	m_iszQueuedDeathTarget = m_iszTriggerTarget;
	m_flQueuedDeathTargetTime = gpGlobals->time + 0.2f;
	m_iTriggerCondition = AITRIGGER_NONE;
}

void CCOFMonsterCompat::FireQueuedDeathTrigger( void )
{
	if( !COF_HasText( m_iszQueuedDeathTarget ) || gpGlobals->time < m_flQueuedDeathTargetTime )
		return;

	if( m_IdealMonsterState != MONSTERSTATE_DEAD && m_MonsterState != MONSTERSTATE_DEAD && pev->deadflag == DEAD_NO )
		return;

	FireTargets( STRING( m_iszQueuedDeathTarget ), this, this, USE_TOGGLE, 0 );
	m_iszQueuedDeathTarget = iStringNull;
}
