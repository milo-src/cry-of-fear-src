// Evidence: analysis/weapons/ranged.json. Original DLL offsets never enter SDK objects.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "cof_weapons.h"
#include "movement.h"
#include <algorithm>
#include <cstdio>
#include <cstring>
#undef min
#undef max

namespace {
// damage values are installed skill.cfg defaults, overridable through existing skill cvars.
#define RANGED(n,id,ammo,maxammo,clip,grant,draw,idle,fire,reload,empty,dmg,cycle,snd,automatic) \
 {"weapon_" n,id,COF_FIREARM,"models/weapons/" n "/v_" n ".mdl","models/weapons/" n "/w_" n ".mdl","models/null.mdl","inventoryitems/weapons/weapon_" n ".txt",ammo,maxammo,clip,grant,draw,idle,fire,reload,empty,dmg,cycle,0,0,snd,automatic}
const CofWeaponDef definitions[] = {
 RANGED("glock",3,"glock",150,15,15,6,0,2,4,5,13,.1f,"weapons_new/glock/glock_fire.wav",false),
 RANGED("p345",7,"p345",80,8,8,6,0,2,4,5,20,.2f,"weapons_new/p345/p345_fire.wav",false),
 RANGED("revolver",21,"revolver",50,5,5,1,0,3,4,4,40,.65f,"weapons_new/revolver/revolver_fire.wav",false),
 RANGED("rifle",11,"rifle",50,5,5,1,0,3,4,4,70,1.66f,"weapons_new/rifle/rifle_fire.wav",false),
 RANGED("g43",26,"g43",40,10,10,0,9,4,29,28,50,.9f,"weapons_new/g43/g43_fire.wav",false),
 RANGED("shotgun",4,"shotgun",50,5,5,6,0,1,2,2,5,1.f,"weapons_new/shotgun/shoot.wav",false),
 RANGED("m16",9,"m16",200,20,20,0,1,2,3,4,16,.1f,"weapons_new/m16/m16_fire.wav",false),
 RANGED("mp5",27,"mp5",300,30,300,0,1,4,2,3,13,.06f,"weapons/mp5/mp5_shoot_loop.wav",true),
 RANGED("famas",23,"famas",150,30,30,1,0,4,5,6,15,.06f,"weapons/famas/famas_shoot.wav",true),
 RANGED("tmp",14,"tmp",300,30,30,1,0,4,5,6,7,.07f,"weapons/tmp/tmp_shoot_loop.wav",true),
 RANGED("vp70",19,"vp70",180,18,18,1,0,4,6,7,15,.55f,"weapons/vp70/vp70_fire.wav",true),
 {"weapon_browning_wheelchair",20,COF_FIREARM,"models/weapons/browning/v_wheelchair_browning.mdl","models/null.mdl","models/null.mdl","inventoryitems/weapons/weapon_browning_wheelchair.txt","browning",130,13,13,0,1,2,3,3,10,.25f,0,0,"weapons_new/browning/browning_fire.wav",false}
};
#undef RANGED
enum { Burst=10, Magazine=11, RoundStart=12, RoundTransfer=13, RoundNext=14, PushBack=15, ScopeFirst=16, ScopeFinish=17, RifleCycle=18, TacMid=19, TacFinish=20, TacToggle=21 };
int rifleShellModel;
int viewKnockMessage;
int weaponBodyMessage;
float Skill(const char* name, float fallback) {
 int level = int(CVAR_GET_FLOAT("difficulty")); if(level<1 || level>4) level=1;
 char key[80]; snprintf(key,sizeof(key),"%s%d",name,level);
 cvar_t* var=CVAR_GET_POINTER(key); return var ? var->value : fallback;
}
void Kick(CBasePlayer* p,float pitch,float yaw,float roll) {
 p->pev->vuser3=p->pev->vuser3+Vector(-pitch,yaw,roll)*20.f;
}
}

class CCofRanged : public CCofWeapon {
public:
 void Precache() override;
 BOOL Deploy() override;
 void Holster(int skiplocal=0) override;
 void ItemPostFrame() override;
 void PrimaryAttack() override;
 void SecondaryAttack() override;
 void Aim() override;
 void ExtraAction() override;
 void Reload() override;
 void WeaponIdle() override;
 void PendingAction() override;
 void SendWeaponAnim(int sequence,int skiplocal=1,int body=0) override;
 int Save(CSave&) override;
 int Restore(CRestore&) override;
 static TYPEDESCRIPTION m_SaveData[];
 void FireRound(float cycle);
 void UpdateSpread();
 void FinishRoundReload();
 void StopFireLoop();
 void RifleCycleThink();
 void UpdateTaclight();
 float Damage() const;
 int FireSequence() const;
 int IdleSequence() const;
 int m_burstRemaining, m_roundReload, m_reloadEmpty, m_cancelReload, m_seenDeploy, m_spreadFlags, m_loopPlaying;
 float m_spreadState,m_spreadDecay,m_spread;
 int m_boltState;
 float m_boltTime,m_ejectTime;
 int m_taclight,m_taclightOn;
};
TYPEDESCRIPTION CCofRanged::m_SaveData[] = {
 DEFINE_FIELD(CCofRanged,m_burstRemaining,FIELD_INTEGER), DEFINE_FIELD(CCofRanged,m_roundReload,FIELD_INTEGER),
 DEFINE_FIELD(CCofRanged,m_reloadEmpty,FIELD_INTEGER), DEFINE_FIELD(CCofRanged,m_cancelReload,FIELD_INTEGER),
 DEFINE_FIELD(CCofRanged,m_seenDeploy,FIELD_INTEGER), DEFINE_FIELD(CCofRanged,m_spreadFlags,FIELD_INTEGER),
 DEFINE_FIELD(CCofRanged,m_spreadState,FIELD_FLOAT), DEFINE_FIELD(CCofRanged,m_spreadDecay,FIELD_TIME),
 DEFINE_FIELD(CCofRanged,m_spread,FIELD_FLOAT), DEFINE_FIELD(CCofRanged,m_boltState,FIELD_INTEGER),
 DEFINE_FIELD(CCofRanged,m_boltTime,FIELD_TIME), DEFINE_FIELD(CCofRanged,m_ejectTime,FIELD_TIME),
 DEFINE_FIELD(CCofRanged,m_taclight,FIELD_INTEGER), DEFINE_FIELD(CCofRanged,m_taclightOn,FIELD_INTEGER)
};
IMPLEMENT_SAVERESTORE(CCofRanged,CCofWeapon);

void CCofRanged::Precache() {
 CCofWeapon::Precache();
 if(!viewKnockMessage)viewKnockMessage=REG_USER_MSG("ViewKnock",1);
 if(!weaponBodyMessage)weaponBodyMessage=REG_USER_MSG("WeaponBody",1);
 PRECACHE_SOUND("weapons/melee_swing.wav"); PRECACHE_SOUND("weapons/melee_hit.wav");
 if(Definition().id==11) {
  PRECACHE_MODEL("models/weapons/rifle/v_rifle_scope.mdl");rifleShellModel=PRECACHE_MODEL("models/556shell.mdl");
  PRECACHE_SOUND("weapons/rifle/rifle_cock_back.wav");PRECACHE_SOUND("weapons/rifle/rifle_cock_forward.wav");
 }
 if(Definition().id==27) PRECACHE_SOUND("weapons/mp5/mp5_shoot_end.wav");
 if(Definition().id==14) PRECACHE_SOUND("weapons/tmp/tmp_shoot_end.wav");
 if(Definition().id==3) {
  PRECACHE_SOUND("weapons/sleeve_generic2.wav");PRECACHE_SOUND("weapons/sleeve_generic3.wav");
  PRECACHE_SOUND("weapons/rifle/rifle_insert.wav");
 }
}
BOOL CCofRanged::Deploy() {
 if(!CCofWeapon::Deploy()) return FALSE;
 const int id=Definition().id; int seq=Definition().deploy;
 m_burstRemaining=m_roundReload=m_cancelReload=0;
 m_boltState=0;m_boltTime=m_ejectTime=0;
 m_spreadState=m_spread=0; m_spreadDecay=gpGlobals->time; m_spreadFlags=0;
 if(id==3) seq=!m_seenDeploy ? 29 : (m_iClip ? 6:7);
 else if(id==7) seq=m_iClip ? 6:7;
 else if(id==26) seq=m_iClip ? 0:1;
 else if(id==9) seq=m_mode ? 7:0;
 else if(id==11 && !m_seenDeploy) seq=19;
 else if((id==14 || id==19 || id==23) && !m_seenDeploy) seq=2;
 m_seenDeploy=1;UpdateTaclight();Lock(Animate(seq)); return TRUE;
}
void CCofRanged::SendWeaponAnim(int sequence,int skiplocal,int body) {
 CBasePlayerWeapon::SendWeaponAnim(sequence,skiplocal,Definition().id==3?pev->body:body);
}
void CCofRanged::UpdateTaclight() {
 if(Definition().id!=3)return;
 pev->body=m_taclight==2?(m_taclightOn?2:1):0;
 if(!m_pPlayer || m_pPlayer->m_pActiveItem!=this)return;
 if(m_taclight==2 && m_taclightOn)m_pPlayer->pev->effects|=EF_DIMLIGHT;
 else m_pPlayer->pev->effects&=~EF_DIMLIGHT;
 if(weaponBodyMessage){MESSAGE_BEGIN(MSG_ONE,weaponBodyMessage,NULL,m_pPlayer->pev);WRITE_BYTE(pev->body);MESSAGE_END();}
}
void CCofRanged::Holster(int skiplocal) {
 StopFireLoop();
 m_burstRemaining=m_roundReload=m_cancelReload=0;
 m_boltState=0;m_boltTime=m_ejectTime=0;
 if(m_pPlayer && Definition().id==3)m_pPlayer->pev->effects&=~EF_DIMLIGHT;
 CCofWeapon::Holster(skiplocal);
}
void CCofRanged::StopFireLoop() {
 if(!m_loopPlaying || !m_pPlayer)return;
 STOP_SOUND(m_pPlayer->edict(),CHAN_WEAPON,Definition().fireSound);
 EMIT_SOUND(m_pPlayer->edict(),CHAN_WEAPON,Definition().id==27?"weapons/mp5/mp5_shoot_end.wav":"weapons/tmp/tmp_shoot_end.wav",1,ATTN_NORM);
 m_loopPlaying=0;
}
float CCofRanged::Damage() const {
 switch(Definition().id) {
 case 3: case 27:return int(Skill("sk_cof_glock",13));
 case 14:return int(Skill("sk_cof_glock",13)/1.65f);
 case 7:return int(Skill("sk_cof_p345",20));
 case 21:return int(Skill("sk_cof_revolver",40));
 case 11:return int(Skill("sk_cof_rifle",70));
 case 26:return int(Skill("sk_cof_g43",50));
 case 4:return int(Skill("sk_cof_shotgun",5));
 case 9:return int(Skill("sk_cof_m16",16));
 case 19:return int(Skill("sk_cof_VP70",15));
 default:return Definition().damage;
 }
}
void CCofRanged::UpdateSpread() {
 if(!m_pPlayer) return;
 const int flags=m_pPlayer->pev->flags;
 const float speed=m_pPlayer->pev->velocity.Length2D();
 int state=0; float floor=0;
 if(speed>10 && !(flags & (FL_DUCKING|0x40000))) {
  state|=1; m_spreadState=std::max(m_spreadState,3.f); floor=3;
  if(!(m_spreadFlags&1)) m_spreadState*=1.5f;
 }
 if(flags&0x40000) {
  state|=2; m_spreadState=std::max(m_spreadState,7.f); floor=7;
  if(!(m_spreadFlags&2)) m_spreadState*=3;
 }
 if(flags&FL_DUCKING) {
  state|=4; if(!(m_spreadFlags&4)) m_spreadState*=.5f;
  if(speed>10) {m_spreadState=std::max(m_spreadState,2.f);floor=2;}
 }
 if(!(flags&FL_ONGROUND)) {
  state|=8; if(!(m_spreadFlags&8)) m_spreadState+=8;
  m_spreadState=std::max(m_spreadState,8.f);floor=8;
 }
 m_spreadFlags=state;
 static const float cones[]={0,.00872f,.01745f,.02617f,.0349f,.04362f,.05234f,.06105f,.06976f,.07846f,.08716f};
 int band=std::max(0,std::min(10,int(m_spreadState))); m_spread=cones[band];
 if(gpGlobals->time>m_spreadDecay) {m_spreadState-=1;m_spreadDecay=gpGlobals->time+.1f;}
 m_spreadState=std::min(10.f,std::max(floor,m_spreadState));
}
int CCofRanged::FireSequence() const {
 const bool last=m_iClip==1;
 switch(Definition().id) {
 case 3:return m_aimed ? (last?38:34):(last?3:2);
 case 7:return m_aimed ? (last?26:25):(last?3:2);
 case 21:return m_aimed ? 18:3;
 case 11:return m_aimed ? 0:3;
 case 26:return m_aimed ? (last?11:13+RANDOM_LONG(0,2)):(last?3:4+RANDOM_LONG(0,2));
 case 4:return m_aimed ? 16:1;
 case 9:return m_aimed ? 21:(m_mode?9:2);
 case 27:return m_aimed ? 10:4+RANDOM_LONG(0,2);
 case 23:return m_aimed ? 17:4;
 case 14:return m_aimed ? 13:4;
 case 19:return m_aimed ? 10:4;
 default:return Definition().fire;
 }
}
int CCofRanged::IdleSequence() const {
 switch(Definition().id) {
 case 3:return m_aimed ? (m_iClip?32:33):(m_iClip?0:1);
 case 7:return m_aimed ? (m_iClip?21:22):(m_iClip?0:1);
 case 21:return m_aimed?16:0;
 case 26:return m_aimed ? (m_iClip?18:19):(m_iClip?9:10);
 case 4:return m_aimed?15:0;
 case 9:return m_aimed?19:(m_mode?8:1);
 case 27:return m_aimed?9:1;
 case 23:return m_aimed?16:0;
 case 14:return m_aimed?11:0;
 case 19:return m_aimed?9:0;
 default:return Definition().idle;
 }
}
void CCofRanged::FireRound(float cycle) {
 if(!m_pPlayer || !HasAmmo() || m_pPlayer->pev->waterlevel==3) return;
 const int id=Definition().id;
 float spread=m_spread;
 if(id==4) spread=.06976f;
 if(id==11 && m_aimed) spread=.00873f;
 const bool looping=id==27 || id==14;
 Shoot(Damage(),spread,id==4?8:1,FireSequence(),cycle,looping?NULL:Definition().fireSound,id==4?2048.f:8192.f);
 if(looping && !m_loopPlaying) {EMIT_SOUND(m_pPlayer->edict(),CHAN_WEAPON,Definition().fireSound,1,ATTN_NORM);m_loopPlaying=1;}
 if(!m_iClip)StopFireLoop();
 // 100f9100 sends integral ViewKnock: permanent aim recoil, separate from spring.
 const int viewKnock=id==26?6:(id==4?5:(id==21?4:(id==11?(m_aimed?3:5):((id==27 || id==23 || id==14)?1:3))));
 if(viewKnockMessage) {MESSAGE_BEGIN(MSG_ONE,viewKnockMessage,NULL,m_pPlayer->pev);WRITE_BYTE(viewKnock);MESSAGE_END();}
 float increment=0,recovery=.35f;
 switch(id) {
 case 3:increment=1.25f;recovery=.55f;break;
 case 7:increment=.85f;recovery=.75f;break;
 case 21:increment=3.15f;break;
 case 11:increment=5;recovery=1.8f;break;
 case 26:increment=2.4f;recovery=.95f;break;
 case 9: case 19:increment=.75f;break;
 case 27:increment=.35f;break;
 case 23:increment=.15f;recovery=.25f;break;
 case 14:increment=.25f;recovery=.25f;break;
 }
 m_spreadState+=increment;m_spreadDecay=gpGlobals->time+recovery;
 if(id==9 || id==19) {
  int roll=RANDOM_LONG(0,2);Kick(m_pPlayer,roll==1?-1.f:1.f,1,roll==2?-1.f:1.f);
 } else if(id==11) Kick(m_pPlayer,float(RANDOM_LONG(m_aimed?-4:-9,m_aimed?4:9)),m_aimed?3.f:4.f,m_aimed?2.f:4.f);
 else {int mag=id==26?8:(id==7 || id==4?4:2);float side=id==26?5.f:(id==7?3.f:(id==4?2.f:1.f));Kick(m_pPlayer,float(RANDOM_LONG(-mag,mag)),side,side);}
 if(m_iClip==0 && (id==3 || id==7 || id==21 || id==27 || id==23 || id==14 || id==20)) Lock(1);
 if(id==27)m_flNextSecondaryAttack=gpGlobals->time+1.f;
 if(id==11) {
  m_boltState=m_aimed?1:0;m_boltTime=m_aimed?gpGlobals->time+.66f:0;
  m_ejectTime=gpGlobals->time+.76f;m_action=RifleCycle;
  m_actionTime=m_aimed?m_boltTime:m_ejectTime;
 }
}
void CCofRanged::RifleCycleThink() {
 // 10066540 keeps scope active: bolt sounds and opposite roll impulses, no rezoom.
 const float now=gpGlobals->time;
 if(!m_aimed)m_boltState=0;
 if(m_boltState==1 && now>=m_boltTime) {
  EMIT_SOUND(m_pPlayer->edict(),CHAN_WEAPON,"weapons/rifle/rifle_cock_back.wav",1,ATTN_NORM);
  Kick(m_pPlayer,0,0,15);m_boltState=2;m_boltTime=now+.33f;
 } else if(m_boltState==2 && now>=m_boltTime) {
  EMIT_SOUND(m_pPlayer->edict(),CHAN_WEAPON,"weapons/rifle/rifle_cock_forward.wav",1,ATTN_NORM);
  Kick(m_pPlayer,0,0,-15);m_boltState=0;
 }
 if(m_ejectTime>0 && now>=m_ejectTime) {
  // RifleEjectBrass10067b90 + shared TE_MODEL helper1011cf70.
  UTIL_MakeVectors(m_pPlayer->pev->v_angle);
  Vector origin=m_pPlayer->GetGunPosition()+gpGlobals->v_forward*60+gpGlobals->v_up*20;
  Vector velocity=gpGlobals->v_right*200+gpGlobals->v_up*60+gpGlobals->v_forward*40;
  MESSAGE_BEGIN(MSG_PVS,SVC_TEMPENTITY,origin);
  WRITE_BYTE(TE_MODEL);WRITE_COORD(origin.x);WRITE_COORD(origin.y);WRITE_COORD(origin.z);
  WRITE_COORD(velocity.x);WRITE_COORD(velocity.y);WRITE_COORD(velocity.z);
  WRITE_ANGLE(m_pPlayer->pev->angles.y);WRITE_SHORT(rifleShellModel);WRITE_BYTE(1);WRITE_BYTE(25);MESSAGE_END();
  m_ejectTime=0;
 }
 m_actionTime=m_boltState?m_boltTime:0;
 if(m_ejectTime>0 && (m_actionTime==0 || m_ejectTime<m_actionTime))m_actionTime=m_ejectTime;
 m_action=m_actionTime>0?RifleCycle:0;
}
void CCofRanged::PrimaryAttack() {
 if(!m_pPlayer || m_fInReload || m_roundReload || m_burstRemaining || gpGlobals->time<m_flNextPrimaryAttack) return;
 if(m_pPlayer->pev->waterlevel==3 || !HasAmmo()) {PlayEmptySound();Lock(.5f);return;}
 const int id=Definition().id;
 UpdateSpread();
 if(id==19 || (id==9 && m_mode)) {
  FireRound(id==19?.55f:.75f);m_burstRemaining=2;
  if(HasAmmo()){m_action=Burst;m_actionTime=gpGlobals->time+(id==19?.027f:.05f);}else m_burstRemaining=0;
 } else FireRound(Definition().cycle);
}
void CCofRanged::ItemPostFrame() {
 if(!m_pPlayer) return;
 if(Definition().id==3 && m_taclight==1 && !m_fInReload && !m_actionTime && gpGlobals->time>=m_flNextPrimaryAttack && gpGlobals->time>=m_flNextSecondaryAttack) {
  if(m_aimed)SetAim(false);
  Animate(m_iClip?8:9);EMIT_SOUND(edict(),CHAN_VOICE,"weapons/sleeve_generic2.wav",1,ATTN_NORM);
  Lock(5);m_action=TacMid;m_actionTime=gpGlobals->time+1;return;
 }
 if(!(m_pPlayer->pev->button&IN_ATTACK) || !HasAmmo() || m_pPlayer->pev->waterlevel==3)StopFireLoop();
 UpdateSpread();
 if(m_roundReload) {
  if((m_pPlayer->m_afButtonPressed & IN_ATTACK) && (Definition().id!=4 || m_iClip>0)) m_cancelReload=1;
  return;
 }
 CCofWeapon::ItemPostFrame();
}
void CCofRanged::Reload() {
 const int id=Definition().id;
 if(!m_pPlayer || m_fInReload || m_roundReload || m_burstRemaining || m_actionTime>gpGlobals->time || m_iClip>=Definition().clip || gpGlobals->time<m_flNextPrimaryAttack) return;
 if(id!=23 && (m_iPrimaryAmmoType<0 || m_pPlayer->m_rgAmmo[m_iPrimaryAmmoType]<=0)) return;
 StopFireLoop();
 if(m_aimed) {SetAim(false);m_pPlayer->pev->viewmodel=ALLOC_STRING(ViewModel());}
 m_reloadEmpty=m_iClip==0;m_cancelReload=0;m_reloadTime=0;
 if(id==21 || id==11 || id==4) {
  m_roundReload=1;m_fInReload=TRUE;
  if(id==21)m_iClip=0;
  Animate(id==4?2:4);m_action=RoundStart;
  m_actionTime=gpGlobals->time+(id==21?1.5f:(id==11?.66f:.5f));
  // Keep ItemPostFrame alive to latch interruption while weapon attack timers block firing.
  m_flNextPrimaryAttack=m_flNextSecondaryAttack=m_actionTime;
  m_pPlayer->m_flNextAttack=gpGlobals->time;
 } else {
  int seq=m_reloadEmpty?Definition().reloadEmpty:Definition().reload;
  if(id==9 && m_mode)seq=m_reloadEmpty?11:10;
  m_iClip=0;m_fInReload=TRUE;m_action=Magazine;
  const float duration=Animate(seq);Lock(duration);m_actionTime=gpGlobals->time+duration;
 }
 SyncMovement();
}
void CCofRanged::FinishRoundReload() {
 const int id=Definition().id;
 const bool interrupted=m_cancelReload!=0;
 m_roundReload=m_fInReload=m_cancelReload=0;m_action=0;m_actionTime=0;
 int seq=id==21?10:(id==11?6:(m_reloadEmpty?5:4));
 Animate(seq);Lock(id==21?(interrupted?1.f:.83f):(id==11?.66f:(m_reloadEmpty?.6f:.5f)));SyncMovement();
}
void CCofRanged::PendingAction() {
 if(!m_pPlayer || !m_pPlayer->IsAlive()) {m_action=m_burstRemaining=m_roundReload=m_fInReload=0;return;}
 const int id=Definition().id;
 if(m_action==TacMid) {
  EMIT_SOUND(edict(),CHAN_VOICE,"weapons/rifle/rifle_insert.wav",1,ATTN_NORM);
  Lock(5);m_action=TacFinish;m_actionTime=gpGlobals->time+1;return;
 }
 if(m_action==TacFinish) {
  EMIT_SOUND(edict(),CHAN_VOICE,"weapons/sleeve_generic3.wav",1,ATTN_NORM);
  m_taclight=2;UpdateTaclight();Animate(m_iClip?6:7);Lock(1);m_action=0;return;
 }
 if(m_action==TacToggle) {m_taclightOn=!m_taclightOn;UpdateTaclight();m_action=0;return;}
 if(m_action==RifleCycle) {RifleCycleThink();return;}
 if(m_action==Burst) {
  if(!HasAmmo() || m_pPlayer->pev->waterlevel==3) {m_burstRemaining=0;m_action=0;return;}
  const float until=m_flNextPrimaryAttack;FireRound(0);
  m_flNextPrimaryAttack=m_flNextSecondaryAttack=until;m_pPlayer->m_flNextAttack=until;
  if(--m_burstRemaining>0 && HasAmmo())m_actionTime=gpGlobals->time+(id==19?.027f:.05f);
  else {m_burstRemaining=0;m_action=0;}
  return;
 }
 if(m_action==Magazine) {
  int amount=Definition().clip;
  if(id!=23) {amount=std::min(amount,m_pPlayer->m_rgAmmo[m_iPrimaryAmmoType]);m_pPlayer->m_rgAmmo[m_iPrimaryAmmoType]-=amount;}
  m_iClip=amount;m_fInReload=0;m_action=0;SyncMovement();return;
 }
 if(m_action==RoundStart || m_action==RoundNext) {
  if(m_iClip>=Definition().clip || m_pPlayer->m_rgAmmo[m_iPrimaryAmmoType]<=0 || (m_cancelReload && m_iClip>0)) {FinishRoundReload();return;}
  Animate(id==21?5+m_iClip:(id==11?5:3));m_action=RoundTransfer;
  m_actionTime=gpGlobals->time+(id==21?.5f:(id==11?.3f:.33f));return;
 }
 if(m_action==RoundTransfer) {
  if(m_iClip<Definition().clip && m_pPlayer->m_rgAmmo[m_iPrimaryAmmoType]>0) {++m_iClip;--m_pPlayer->m_rgAmmo[m_iPrimaryAmmoType];}
  m_action=RoundNext;m_actionTime=gpGlobals->time+(id==21?.33f:(id==11?.5f:.32f));return;
 }
 if(m_action==PushBack) {
  if(m_pPlayer->m_cofStamina>0) {
   if(!m_pPlayer->m_cofUnlimitedStamina)m_pPlayer->m_cofStamina-=15;
   EMIT_SOUND(m_pPlayer->edict(),CHAN_WEAPON,"weapons/melee_swing.wav",1,ATTN_NORM);Kick(m_pPlayer,1,1,-8);
   CBaseEntity* target=NULL;
   while((target=UTIL_FindEntityInSphere(target,m_pPlayer->GetGunPosition(),40))!=NULL) {
    if(target!=m_pPlayer && target->MyMonsterPointer() && target->IsAlive()) {
     target->TakeDamage(m_pPlayer->pev,m_pPlayer->pev,3,0x5001000);
     EMIT_SOUND(target->edict(),CHAN_AUTO,"weapons/melee_hit.wav",1,ATTN_NORM);
    }
   }
  }
  m_action=0;return;
 }
 if(m_action==ScopeFirst) {SetAim(true,85);m_action=ScopeFinish;m_actionTime=gpGlobals->time+.15f;return;}
 if(m_action==ScopeFinish) {SetAim(true,30);m_pPlayer->pev->viewmodel=ALLOC_STRING("models/weapons/rifle/v_rifle_scope.mdl");m_action=0;return;}
 CCofWeapon::PendingAction();
}
void CCofRanged::SecondaryAttack() {
 if(!m_pPlayer || m_aimed || m_fInReload || m_roundReload || m_burstRemaining || m_actionTime>gpGlobals->time) return;
 const int id=Definition().id;if(id==20)return;
 StopFireLoop();
 int seq=0;bool shove=false;
 switch(id) {
 case 3:seq=m_iClip?27:28;break;case 7:seq=m_iClip?17:18;break;case 21:seq=20;break;
 case 11:seq=12;shove=true;break;case 26:seq=m_iClip?26:27;shove=true;break;
 case 4:seq=18;shove=true;break;case 9:seq=22;shove=true;break;case 23:seq=11;shove=true;break;
 case 27:seq=18;break;case 14:seq=14;break;case 19:seq=21;break;
 }
 if(shove) {
  if(m_pPlayer->m_cofStamina<=0)return;
  Animate(seq);Lock(1);m_action=PushBack;m_actionTime=gpGlobals->time+.23f;
 } else Swing(Skill("sk_cof_weapon_melee",5),.3f,id==27?1.25f:1.f,seq);
}
void CCofRanged::Aim() {
 if(!m_pPlayer || m_fInReload || m_roundReload || m_burstRemaining || m_actionTime>gpGlobals->time || gpGlobals->time<m_flNextPrimaryAttack || gpGlobals->time<m_flNextSecondaryAttack || Definition().id==20)return;
 if(Definition().id==11) {
  if(m_aimed) {SetAim(false);m_pPlayer->pev->viewmodel=ALLOC_STRING(ViewModel());Animate(8);}
  else {Animate(7);m_action=ScopeFirst;m_actionTime=gpGlobals->time+.1f;}
  Lock(.25f);return;
 }
 const bool entering=!m_aimed;int seq=0;
 // Native vtable+12c/+130 methods select authored iron_to/from animations.
 switch(Definition().id) {
 case 3:seq=entering?(m_iClip?30:31):(m_iClip?36:37);break;
 case 7:seq=entering?(m_iClip?19:20):(m_iClip?23:24);break;
 case 21:seq=entering?15:17;break;
 case 26:seq=entering?(m_iClip?20:21):(m_iClip?16:17);break;
 case 4:seq=entering?14:17;break;case 9:seq=entering?18:20;break;
 case 27:seq=entering?8:11;break;case 23:seq=entering?15:18;break;
 case 14:seq=entering?10:12;break;case 19:seq=entering?8:12;break;
 }
 SetAim(entering,50);const float duration=Animate(seq);Lock(.3f);
 m_flTimeWeaponIdle=gpGlobals->time+(Definition().id==21?.3f:duration);
}
void CCofRanged::ExtraAction() {
 if(Definition().id==3) {
  if(!m_pPlayer || m_taclight!=2 || m_aimed || m_fInReload || m_actionTime>gpGlobals->time || gpGlobals->time<m_flNextPrimaryAttack || gpGlobals->time<m_flNextSecondaryAttack)return;
  Animate(m_iClip?17:18);Lock(.66f);m_action=TacToggle;m_actionTime=gpGlobals->time+.3f;return;
 }
 if(Definition().id!=9 || !m_pPlayer || m_fInReload || m_burstRemaining || m_actionTime>gpGlobals->time || gpGlobals->time<m_flNextPrimaryAttack)return;
 Animate(m_aimed?(m_mode?33:32):(m_mode?13:6));m_mode=!m_mode;Lock(1);
}
void CCofRanged::WeaponIdle() {
 if(!m_pPlayer || m_fInReload || m_roundReload || m_burstRemaining || gpGlobals->time<m_flTimeWeaponIdle)return;
 const float duration=Animate(IdleSequence());m_flTimeWeaponIdle=gpGlobals->time+std::max(duration,.1f);
}

#define COF_RANGED_CLASS(name,index) class name : public CCofRanged { public: const CofWeaponDef& Definition() const override { return definitions[index]; } };
COF_RANGED_CLASS(CCofGlock,0) COF_RANGED_CLASS(CCofP345,1) COF_RANGED_CLASS(CCofRevolver,2)
COF_RANGED_CLASS(CCofRifle,3) COF_RANGED_CLASS(CCofG43,4) COF_RANGED_CLASS(CCofShotgun,5)
COF_RANGED_CLASS(CCofM16,6) COF_RANGED_CLASS(CCofMP5,7) COF_RANGED_CLASS(CCofFamas,8)
COF_RANGED_CLASS(CCofTMP,9) COF_RANGED_CLASS(CCofVP70,10) COF_RANGED_CLASS(CCofBrowning,11)
#undef COF_RANGED_CLASS
LINK_ENTITY_TO_CLASS(weapon_glock,CCofGlock); LINK_ENTITY_TO_CLASS(weapon_beretta,CCofGlock);
LINK_ENTITY_TO_CLASS(weapon_p345,CCofP345); LINK_ENTITY_TO_CLASS(weapon_P228,CCofP345);
LINK_ENTITY_TO_CLASS(weapon_revolver,CCofRevolver); LINK_ENTITY_TO_CLASS(weapon_rifle,CCofRifle);
LINK_ENTITY_TO_CLASS(weapon_g43,CCofG43); LINK_ENTITY_TO_CLASS(weapon_shotgun,CCofShotgun);
LINK_ENTITY_TO_CLASS(weapon_m16,CCofM16); LINK_ENTITY_TO_CLASS(weapon_mp5k,CCofM16);
LINK_ENTITY_TO_CLASS(weapon_mp5,CCofMP5); LINK_ENTITY_TO_CLASS(weapon_famas,CCofFamas);
LINK_ENTITY_TO_CLASS(weapon_tmp,CCofTMP); LINK_ENTITY_TO_CLASS(weapon_uzi,CCofTMP);
LINK_ENTITY_TO_CLASS(weapon_vp70,CCofVP70); LINK_ENTITY_TO_CLASS(weapon_browning_wheelchair,CCofBrowning);
const char* const cofRangedClasses[]={"weapon_glock","weapon_p345","weapon_revolver","weapon_rifle","weapon_g43","weapon_shotgun","weapon_m16","weapon_mp5","weapon_famas","weapon_tmp","weapon_vp70","weapon_browning_wheelchair",NULL};

bool CofRangedAttachTaclight(CCofWeapon* weapon) {
 if(!weapon || weapon->Definition().id!=3 || weapon->Definition().kind!=COF_FIREARM)return false;
 CCofRanged* glock=static_cast<CCofRanged*>(weapon);
 if(glock->m_taclight)return false;
 glock->m_taclight=1;return true;
}
bool CofRangedTaclightOn(CCofWeapon* weapon) {
 if(!weapon || weapon->Definition().id!=3 || weapon->Definition().kind!=COF_FIREARM)return false;
 CCofRanged* glock=static_cast<CCofRanged*>(weapon);
 return glock->m_taclight==2 && glock->m_taclightOn;
}

// Isolated runtime fixture: real factory/handlers, no global clock manipulation.
int CofRangedTests(CBasePlayer* player) {
 if(!player || !player->IsAlive())return 1;
 int failures=0;
 const entvars_t saved=*player->pev;
 int ammo[MAX_AMMO_SLOTS];memcpy(ammo,player->m_rgAmmo,sizeof(ammo));
 const float nextAttack=player->m_flNextAttack;
 const int fov=player->m_iFOV,volume=player->m_iWeaponVolume,flash=player->m_iWeaponFlash;
 const int pressed=player->m_afButtonPressed;
 auto check=[&](bool condition,const char* label) {
  ALERT(at_console,"COF_WEAPON_TEST %s ranged_%s\n",condition?"PASS":"FAIL",label);
  if(!condition)++failures;
 };
 auto create=[&](const char* name)->CCofRanged* {
  CBaseEntity* entity=CBaseEntity::Create(name,player->pev->origin+Vector(0,0,128),g_vecZero,NULL);
  check(entity!=NULL,name);if(!entity)return NULL;
  CCofRanged* weapon=static_cast<CCofRanged*>(entity);
  weapon->m_pPlayer=player;weapon->m_iPrimaryAmmoType=CBasePlayer::GetAmmoIndex(weapon->Definition().ammo);
  if(weapon->m_iPrimaryAmmoType<0) {check(false,"ammo_registered");weapon->m_pPlayer=NULL;UTIL_Remove(weapon);return NULL;}
  weapon->pev->solid=SOLID_NOT;weapon->pev->effects|=EF_NODRAW;weapon->SetTouch(NULL);weapon->SetThink(NULL);
  weapon->m_flNextPrimaryAttack=weapon->m_flNextSecondaryAttack=0;weapon->m_actionTime=0;
  return weapon;
 };
 auto pending=[](CCofRanged* w) {w->m_actionTime=0;w->PendingAction();};
 auto remove=[](CCofRanged* w) {w->StopFireLoop();w->m_pPlayer=NULL;UTIL_Remove(w);};
 player->pev->waterlevel=0;player->pev->v_angle=Vector(-90,0,0);player->pev->punchangle=g_vecZero;
 CCofRanged* w=create("weapon_m16");
 if(w) {
  w->m_iClip=5;w->ExtraAction();check(w->m_mode==1,"m16_toggle_burst");
  w->m_flNextPrimaryAttack=0;w->PrimaryAttack();
  check(w->m_iClip==4 && w->m_burstRemaining==2 && w->m_action==Burst,"burst_first_round");
  const float cooldown=w->m_flNextPrimaryAttack;pending(w);pending(w);
  check(w->m_iClip==2 && !w->m_burstRemaining && !w->m_action && w->m_flNextPrimaryAttack==cooldown,"burst_three_rounds_fixed_cooldown");
  w->m_iClip=1;w->m_flNextPrimaryAttack=0;w->PrimaryAttack();
  check(w->m_iClip==0 && !w->m_burstRemaining,"burst_no_negative_clip");remove(w);
 }
 w=create("weapon_vp70");
 if(w) {w->m_iClip=2;w->PrimaryAttack();pending(w);check(w->m_iClip==0 && !w->m_burstRemaining && !w->m_action,"vp70_short_burst");remove(w);}
 w=create("weapon_glock");
 if(w) {
  w->m_iClip=7;player->m_rgAmmo[w->m_iPrimaryAmmoType]=4;w->Reload();
  check(w->m_iClip==0 && w->m_fInReload && w->m_action==Magazine,"magazine_discards_partial");
  pending(w);check(w->m_iClip==4 && player->m_rgAmmo[w->m_iPrimaryAmmoType]==0 && !w->m_fInReload,"magazine_reserve_limited");
  w->m_actionTime=0;w->m_flNextPrimaryAttack=w->m_flNextSecondaryAttack=0;w->Aim();
  check(w->m_aimed && player->pev->weaponanim==30,"glock_authored_aim_enter");
  w->m_flNextPrimaryAttack=w->m_flNextSecondaryAttack=0;
  w->Aim();check(!w->m_aimed && player->pev->weaponanim==36,"glock_authored_aim_exit");
  CBasePlayerItem* active=player->m_pActiveItem;player->m_pActiveItem=w;
  check(CofRangedAttachTaclight(w) && !CofRangedAttachTaclight(w),"glock_taclight_unique_attach");
  w->m_flNextPrimaryAttack=w->m_flNextSecondaryAttack=0;w->ItemPostFrame();
  check(w->m_action==TacMid && player->pev->weaponanim==8 && w->m_actionTime==gpGlobals->time+1,"glock_taclight_attach_begin");
  pending(w);check(w->m_action==TacFinish && w->m_taclight==1 && w->m_actionTime==gpGlobals->time+1,"glock_taclight_mid_attach");
  pending(w);check(w->m_taclight==2 && w->pev->body==1,"glock_taclight_attached_off");
  w->m_flNextPrimaryAttack=w->m_flNextSecondaryAttack=0;w->ExtraAction();
  check(w->m_action==TacToggle && !w->m_taclightOn && w->m_actionTime==gpGlobals->time+.3f,"glock_taclight_toggle_delayed");
  pending(w);check(w->m_taclightOn && w->pev->body==2 && (player->pev->effects&EF_DIMLIGHT),"glock_taclight_enabled");
  w->m_flNextPrimaryAttack=w->m_flNextSecondaryAttack=0;w->ExtraAction();pending(w);
  check(!w->m_taclightOn && w->pev->body==1 && !(player->pev->effects&EF_DIMLIGHT),"glock_taclight_disabled");
  player->m_pActiveItem=active;remove(w);
 }
 w=create("weapon_rifle");
 if(w) {
  w->m_iClip=1;player->m_rgAmmo[w->m_iPrimaryAmmoType]=3;w->Reload();pending(w);pending(w);
  check(w->m_iClip==2 && player->m_rgAmmo[w->m_iPrimaryAmmoType]==2,"rifle_one_round_transfer");
  player->m_afButtonPressed=IN_ATTACK;w->ItemPostFrame();pending(w);
  check(!w->m_fInReload && !w->m_roundReload && w->m_iClip==2,"rifle_reload_interrupt");
  CBasePlayerItem* active=player->m_pActiveItem;
  const int scoped=player->m_cofScopedRifle,blocked=player->m_cofWeaponSprintBlocked;
  const int hold=player->m_cofHoldBreath,heal=player->m_cofHealQueue,healLast=player->m_cofHealLast;
  const float stamina=player->m_cofStamina,holdUntil=player->m_cofHoldBreathUntil;
  player->m_pActiveItem=w;w->m_flNextPrimaryAttack=w->m_flNextSecondaryAttack=0;w->Aim();pending(w);pending(w);
  check(w->m_aimed && player->pev->fov==30 && player->m_cofScopedRifle,"rifle_scope_adapter");
  player->m_cofHoldBreath=0;player->m_cofHoldBreathUntil=0;player->m_cofStamina=40;
  player->m_cofHealQueue=0;player->pev->button=0x1000;CofMovementPreThink(player);
  check(player->m_cofHoldBreath!=0,"rifle_scope_hold_breath");
  w->m_flNextPrimaryAttack=w->m_flNextSecondaryAttack=0;w->PrimaryAttack();
  check(w->m_boltState==1 && w->m_action==RifleCycle && w->m_aimed,"rifle_shot_keeps_scope");
  const float spring=player->pev->vuser3.z;w->m_boltTime=gpGlobals->time;pending(w);
  check(w->m_boltState==2 && player->pev->vuser3.z==spring+300,"rifle_bolt_back_impulse");
  w->m_ejectTime=gpGlobals->time;pending(w);check(w->m_ejectTime==0,"rifle_delayed_case_ejection");
  w->m_boltTime=gpGlobals->time;pending(w);
  check(!w->m_boltState && !w->m_action && player->pev->vuser3.z==spring,"rifle_bolt_forward_impulse");
  w->m_flNextPrimaryAttack=w->m_flNextSecondaryAttack=0;w->Aim();CofMovementPreThink(player);
  check(!player->m_cofHoldBreath && !player->m_cofScopedRifle,"rifle_unscope_releases_breath");
  player->m_pActiveItem=active;player->m_cofScopedRifle=scoped;player->m_cofWeaponSprintBlocked=blocked;
  player->m_cofHoldBreath=hold;player->m_cofHoldBreathUntil=holdUntil;player->m_cofStamina=stamina;
  player->m_cofHealQueue=heal;player->m_cofHealLast=healLast;remove(w);
 }
 w=create("weapon_revolver");
 if(w) {
  w->m_iClip=3;player->m_rgAmmo[w->m_iPrimaryAmmoType]=2;w->Reload();
  check(w->m_iClip==0 && w->m_roundReload,"revolver_cylinder_discard");
  pending(w);pending(w);w->m_cancelReload=1;pending(w);
  check(w->m_iClip==1 && !w->m_roundReload && w->m_flNextPrimaryAttack==gpGlobals->time+1,"revolver_interrupted_close");remove(w);
 }
 w=create("weapon_shotgun");
 if(w) {
  w->m_iClip=0;player->m_rgAmmo[w->m_iPrimaryAmmoType]=1;w->Reload();pending(w);pending(w);pending(w);
  check(w->m_iClip==1 && !w->m_fInReload && player->pev->weaponanim==5,"shotgun_empty_reload_pump");remove(w);
 }
 w=create("weapon_famas");
 if(w) {w->m_iClip=0;player->m_rgAmmo[w->m_iPrimaryAmmoType]=0;w->Reload();pending(w);check(w->m_iClip==30 && !w->m_fInReload && player->m_rgAmmo[w->m_iPrimaryAmmoType]==0,"famas_free_reload");remove(w);}
 w=create("weapon_g43");
 if(w) {w->m_iClip=1;w->m_aimed=1;check(w->FireSequence()==11,"g43_last_aimed_round_sequence");w->m_iClip=2;int seq=w->FireSequence();check(seq>=13 && seq<=15,"g43_aimed_fire_variants");remove(w);}
 *player->pev=saved;memcpy(player->m_rgAmmo,ammo,sizeof(ammo));player->m_flNextAttack=nextAttack;
 player->m_iFOV=fov;player->m_iWeaponVolume=volume;player->m_iWeaponFlash=flash;player->m_afButtonPressed=pressed;
 ALERT(at_console,"COF_WEAPON_RANGED_COMPLETE failures=%d\n",failures);return failures;
}
