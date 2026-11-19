// Native client contracts and deliberately adapted SDK presentation: analysis/weapons/client.md.
#include "hud.h"
#include "cl_util.h"
#include "cl_entity.h"
#include "com_model.h"
#include "dlight.h"
#include "usercmd.h"
#include "ref_params.h"
#include "studio.h"
#include "r_studioint.h"
#include "weapon_studio_interface.h"
#include "triangleapi.h"
#include "studio_event.h"
#include "event_api.h"
#include "r_efx.h"
#include "movement.h"
#include "cof_weapons_client.h"
#include "ui_draw.h"
extern "C" {
#include "kbutton.h"
}
#include <cstdio>
#include <cstring>
#include <cstdlib>
extern void KeyDown(kbutton_t*);
extern void KeyUp(kbutton_t*);
extern bool CofInventoryVisible();
extern bool CofGameMenuVisible();
extern bool CofGameMenuWorld();
extern bool CofInventoryQuickSlotsTest();
extern engine_studio_api_t IEngineStudio;
namespace {
// Native third action is bit0x40; SDK reserves it for turning. Both port ends
// explicitly use 0x4000 instead. No enlarged original usercmd layout is copied.
constexpr unsigned ThirdAttackBit = 0x4000;
kbutton_t thirdAttack = {};
struct Weapon { int ammo; bool present; } weapons[32];
int reserve[32], current, clip;
int dualClip[2] = {-2,-2};
int weaponBody=-1;
bool tested;
float ironOffset[3];
bool ironActive, scoped;
bool photoPending;
struct HandView { cl_entity_t entity; int weapon, serial; bool active, firstEvents; } handViews[2];
int drawingHand=-1;
int ReadLong(const unsigned char* b) {
    unsigned int value=0;
    for(int i=0;i<4;++i) value|=static_cast<unsigned int>(b[i])<<(i*8);
    int result; std::memcpy(&result,&value,4); return result;
}
int HandsMessage(const char*,int size,void* data) {
    if(!data || size<1) return 0;
    const auto* b=static_cast<const unsigned char*>(data);
    if(b[0]==0) {
        if(size!=1) return 0;
        handViews[0].active=handViews[1].active=false; return 1;
    }
    if(b[0]>2 || size<16) return 0;
    const char* path=reinterpret_cast<const char*>(b+1);
    const char* end=static_cast<const char*>(std::memchr(path,0,size-14));
    if(!end || end-path>127 || end-path+15!=size || std::strncmp(path,"models/",7) ||
       std::strstr(path,"..") || !std::strstr(path,".mdl")) return 0;
    const auto* fields=reinterpret_cast<const unsigned char*>(end+1);
    const int sequence=static_cast<unsigned short>(fields[1]|(fields[2]<<8));
    if(fields[0]>=32) return 0;
    int index=0; model_t* model=gEngfuncs.CL_LoadModel(path,&index);
    if(!model) return 0;
    const studiohdr_t* header=static_cast<const studiohdr_t*>(IEngineStudio.Mod_Extradata(model));
    if(!header || sequence>=header->numseq) return 0;
    HandView& hand=handViews[b[0]-1];
    const int serial=ReadLong(fields+5);
    if(!hand.active || hand.serial!=serial || hand.entity.model!=model) {
        hand.entity={}; hand.entity.model=model; hand.entity.curstate.modelindex=index;
        hand.entity.curstate.sequence=sequence;
        hand.entity.curstate.framerate=1;
        hand.entity.curstate.animtime=ReadLong(fields+9)*0.001f;
        hand.entity.latched.prevanimtime=hand.entity.curstate.animtime;
        hand.entity.curstate.rendermode=0; hand.entity.curstate.renderamt=255;
        hand.weapon=fields[0]; hand.serial=serial; hand.active=true; hand.firstEvents=true;
    }
    hand.entity.curstate.body=fields[3]|(fields[4]<<8);
    return 1;
}
int WeaponBodyMessage(const char*,int size,void* data) {
    if(size!=1 || !data) return 0;
    weaponBody=*static_cast<unsigned char*>(data);
    cl_entity_t* view=gEngfuncs.GetViewModel();
    if(view) view->curstate.body=weaponBody;
    return 1;
}
int TakePhotoMessage(const char*,int size,void*) {
    if(size!=0) return 0;
    // Native queues a framebuffer copy for the camera's diffusegay texture.
    // Keep the pending request explicit: a cross-renderer texture-copy adapter
    // is still required. A white HUD flash would not implement this message.
    photoPending=true;
    return 1;
}
int DualMessage(const char*,int size,void* data) {
    if(size!=8 || !data) return 0;
    // Native wire is two signed LONGs, not two bytes. The paired port uses
    // -2/-2 to clear the display; -1 means that hand has no magazine.
    const auto* b=static_cast<const unsigned char*>(data);
    for(int hand=0;hand<2;++hand) {
        unsigned int value=0;
        for(int i=0;i<4;++i) value |= static_cast<unsigned int>(b[hand*4+i])<<(i*8);
        std::memcpy(&dualClip[hand],&value,sizeof(value));
    }
    return 1;
}
int IronMessage(const char*,int size,void* data) {
    if(size!=8 || !data) return 0;
    const auto* b=static_cast<const unsigned char*>(data);
    for(int i=0;i<3;++i) ironOffset[i]=static_cast<short>(b[i*2]|(b[i*2+1]<<8))*0.125f;
    // Original stores the vector and transition flag, but its actual model
    // alignment is authored into iron_* sequences. Do not add a second -20u
    // descriptor translation to those sequences. The port uses explicit zoom
    // byte to distinguish the zero-offset exit transition from active aim.
    ironActive=b[7] && b[6]>0;
    if(!b[7]) for(float& value:ironOffset) value=0;
    return 1;
}
int ScopeMessage(const char*,int size,void* data) {
    if(size!=1 || !data) return 0;
    scoped=*static_cast<unsigned char*>(data)!=0; return 1;
}
float RecoilPitch(float pitch,unsigned char amount) { return pitch-amount; }
int ViewKnockMessage(const char*,int size,void* data) {
    if(size!=1 || !data) return 0;
    // Native10071b20 changes real view angles; this is separate from the
    // decaying vuser3 camera spring. Scripted-camera suppression is adapted
    // to the port's explicit camera state instead of unidentified globals.
    if(CofMovementCameraActive() || gHUD.m_Health.m_iHealth<=0) return 1;
    float angles[3]; gEngfuncs.GetViewAngles(angles);
    angles[0]=RecoilPitch(angles[0],*static_cast<unsigned char*>(data));
    gEngfuncs.SetViewAngles(angles); return 1;
}
void Attack3Down() { KeyDown(&thirdAttack); }
void Attack3Up() { KeyUp(&thirdAttack); }
bool Blocked() { return CofInventoryVisible() || CofGameMenuVisible() || CofGameMenuWorld() ||
    CofMovementCameraActive() || gHUD.m_Health.m_iHealth <= 0; }
bool NewWeaponAudio(int id) {
    const int ids[] = {20,23,26,3,9,27,7,21,11,4,14,19};
    for (int value : ids) if (id == value) return true;
    return false;
}
void SoundEvent(const mstudioevent_s* event, const cl_entity_s* entity) {
    // Model options are a fixed 64-byte field, not an unbounded string.
    if (!std::memchr(event->options, 0, sizeof(event->options)) || !event->options[0]) return;
    char sound[256];
    const char* options = event->options;
    if (NewWeaponAudio(drawingHand<0?current:handViews[drawingHand].weapon) && std::strstr(options,"weapons/")) {
        const char* separator = std::strpbrk(options,"/\\");
        if (!separator) return;
        std::snprintf(sound,sizeof(sound),"weapons_new/%s",separator+1);
        // Original routes this branch through its local audio middleware. Xash
        // receives the same resource through its local sound API instead.
        gEngfuncs.pfnPlaySoundByNameAtPitch(sound,1,
            int(100.0f*(1.0f+gEngfuncs.pfnRandomFloat(-0.1f,0.1f))));
    } else {
        std::snprintf(sound,sizeof(sound),"%s%s",entity->model &&
            std::strstr(entity->model->name,"models/cs/") ? "cs/" : "",options);
        gEngfuncs.pfnPlaySoundByNameAtLocation(sound,1,entity->attachment[0]);
    }
}
void Muzzle(const cl_entity_s* entity,int attachment) {
    // Original uses authored flash models, not the unrelated SDK HL sprite.
    const char* model = "models/flash1.mdl"; float scale = 4;
    const int weapon=drawingHand<0?current:handViews[drawingHand].weapon;
    if (weapon == 4 || weapon == 21) scale = 6;
    if (weapon == 9 || weapon == 26) { model="models/flash2.mdl"; scale=6; }
    if (weapon == 11 || weapon == 23) { model="models/flash2.mdl"; scale=9; }
    if (weapon == 27) { model="models/flash2.mdl"; scale=2; }
    if (entity->model && std::strstr(entity->model->name,"models/cs/")) scale=2;
    static cl_entity_t flashes[16]; static unsigned next;
    cl_entity_t& flash=flashes[next++ % 16];
    flash=*entity; int index=0; flash.model=gEngfuncs.CL_LoadModel(model,&index);
    if (!flash.model) return;
    flash.index=0; flash.curstate.modelindex=index; flash.curstate.sequence=0;
    flash.curstate.frame=0; flash.curstate.framerate=0; flash.curstate.body=0;
    flash.curstate.skin=0; flash.curstate.effects=0; flash.curstate.renderfx=0;
    flash.curstate.rendermode=5; flash.curstate.renderamt=100;
    flash.curstate.scale=scale+gEngfuncs.pfnRandomFloat(-1,1);
    flash.curstate.animtime=gEngfuncs.GetClientTime();
    for(int i=0;i<3;++i) { flash.origin[i]=flash.curstate.origin[i]=entity->attachment[attachment][i];
        flash.angles[i]=flash.curstate.angles[i]=entity->angles[i]; }
    flash.angles[2]=flash.curstate.angles[2]=gEngfuncs.pfnRandomFloat(1,359);
    gEngfuncs.CL_CreateVisibleEntity(0,&flash);
    dlight_t* light=gEngfuncs.pEfxAPI->CL_AllocDlight(0);
    if(light) {
        for(int i=0;i<3;++i) light->origin[i]=entity->attachment[attachment][i];
        light->radius=128; light->color.r=225; light->color.g=170; light->color.b=105;
        light->die=gEngfuncs.GetClientTime()+0.06f;
    }
}
void ProtocolTest() {
    if (tested || !std::getenv("COF_WEAPONTEST")) return;
    tested=true; int failures=0;
    const int oldCurrent=current,oldClip=clip,oldReserve=reserve[2];
    const int oldBody=weaponBody;
    cl_entity_t* originalView=gEngfuncs.GetViewModel();
    const int oldViewBody=originalView?originalView->curstate.body:0;
    const int oldViewSequence=originalView?originalView->curstate.sequence:0;
    const bool oldIron=ironActive,oldScope=scoped;
    const bool oldPhoto=photoPending;
    const int oldDual[2]={dualClip[0],dualClip[1]};
    const HandView oldHands[2]={handViews[0],handViews[1]};
    float oldOffset[3]; std::memcpy(oldOffset,ironOffset,sizeof(oldOffset));
    unsigned char ammo[]={2,0x2c,1}, cur[]={1,3,17}, bad[]={1,32,17};
    auto check=[&](bool ok,const char* name) { if(!ok) ++failures;
        gEngfuncs.Con_Printf("COF_WEAPON_CLIENT %s %s\n",ok?"PASS":"FAIL",name); };
    check(CofWeaponsAmmoMessage(3,ammo) && reserve[2]==300,"ammo_short_preserves_above255");
    check(!CofWeaponsAmmoMessage(2,ammo) && reserve[2]==300,"ammo_reject_truncated");
    check(CofWeaponsCurrentMessage(3,cur) && current==3 && clip==17,"current_weapon_wire");
    check(!CofWeaponsCurrentMessage(3,bad) && current==3,"weapon_id_bounds");
    unsigned char iron[]={0,0,0x60,0xff,0x6e,0,50,1}, off[]={0,0,0,0,0,0,0,1}, scope[]={1};
    check(IronMessage("IronSights",8,iron) && ironActive && ironOffset[1]==-20 && ironOffset[2]==13.75f,
        "ironsights_signed_coord_and_target");
    check(!IronMessage("IronSights",7,off) && ironActive,"ironsights_truncation_keeps_state");
    check(IronMessage("IronSights",8,off) && !ironActive,"ironsights_exit_transition");
    check(ScopeMessage("Scope",1,scope) && scoped && !ScopeMessage("Scope",0,scope),"scope_wire_bounds");
    check(RecoilPitch(15,3)==12 && RecoilPitch(-10,4)==-14 &&
        !ViewKnockMessage("ViewKnock",0,scope),"viewknock_signed_pitch_byte_contract");
    check(CofInventoryQuickSlotsTest(),"quickslot_authoritative_resync_bounds");
    unsigned char dual[]={0x2c,1,0,0,0xff,0xff,0xff,0xff};
    unsigned char clearDual[]={0xfe,0xff,0xff,0xff,0xfe,0xff,0xff,0xff};
    check(DualMessage("DualAmmo",8,dual) && dualClip[0]==300 && dualClip[1]==-1,"dual_signed_long_pair");
    check(!DualMessage("DualAmmo",7,clearDual) && dualClip[0]==300,"dual_reject_truncated");
    check(DualMessage("DualAmmo",8,clearDual) && dualClip[0]==-2 && dualClip[1]==-2,"dual_clear_adapter");
    unsigned char packet[160]={1};
    const char* handModel="models/weapons/glock/v_glock.mdl";
    std::strcpy(reinterpret_cast<char*>(packet+1),handModel);
    const int fieldsOffset=int(std::strlen(handModel))+2;
    packet[fieldsOffset]=3; packet[fieldsOffset+5]=1;
    check(HandsMessage("CofHands",fieldsOffset+13,packet) && handViews[0].active &&
        handViews[0].entity.curstate.sequence==0,"hand_model_message");
    packet[0]=2; packet[fieldsOffset+1]=2; packet[fieldsOffset+5]=2;
    check(HandsMessage("CofHands",fieldsOffset+13,packet) && handViews[1].serial==2 &&
        handViews[0].serial==1 && handViews[0].entity.curstate.sequence==0,"hand_animation_independent");
    handViews[1].firstEvents=false;
    const float handStart=handViews[1].entity.curstate.animtime;
    packet[fieldsOffset+3]=2;
    check(HandsMessage("CofHands",fieldsOffset+13,packet) && handViews[1].entity.curstate.body==2 &&
        handViews[1].serial==2 && !handViews[1].firstEvents && handViews[1].entity.curstate.animtime==handStart,
        "hand_body_update_preserves_animation");
    check(!HandsMessage("CofHands",fieldsOffset+12,packet) && handViews[1].serial==2,"hand_truncation_keeps_state");
    unsigned char clearHand[]={0};
    check(HandsMessage("CofHands",1,clearHand) && !handViews[0].active && !handViews[1].active,"hand_clear");
    unsigned char body[]={2};
    check(WeaponBodyMessage("WeaponBody",1,body) && weaponBody==2 &&
        (!originalView || (originalView->curstate.body==2 && originalView->curstate.sequence==oldViewSequence)) &&
        !WeaponBodyMessage("WeaponBody",0,body),"weapon_body_byte_keeps_sequence");
    check(TakePhotoMessage("TakePhoto",0,nullptr) && photoPending &&
        !TakePhotoMessage("TakePhoto",1,body),"takephoto_empty_packet_pending_only");
    current=oldCurrent; clip=oldClip; reserve[2]=oldReserve;
    ironActive=oldIron; scoped=oldScope; std::memcpy(ironOffset,oldOffset,sizeof(oldOffset));
    dualClip[0]=oldDual[0]; dualClip[1]=oldDual[1];
    handViews[0]=oldHands[0]; handViews[1]=oldHands[1];
    weaponBody=oldBody; if(originalView) originalView->curstate.body=oldViewBody;
    photoPending=oldPhoto;
    gEngfuncs.Con_Printf("COF_WEAPON_CLIENT_COMPLETE failures=%d\n",failures);
}
}
bool CofWeaponsAmmoMessage(int size,const void* data) {
    if(size!=3 || !data) return false;
    const auto* b=static_cast<const unsigned char*>(data);
    if(b[0]>=32) return false;
    const int count=static_cast<short>(b[1]|(b[2]<<8));
    reserve[b[0]]=count<0?-count:count; return true;
}
bool CofWeaponsCurrentMessage(int size,const void* data) {
    if(size!=3 || !data) return false;
    const auto* b=static_cast<const unsigned char*>(data);
    const int id=static_cast<signed char>(b[1]), count=static_cast<signed char>(b[2]);
    if(id>=32) return false;
    if(id<1) { current=0; clip=-1; return true; }
    if(b[0]) { if(current!=id) weaponBody=-1; current=id; clip=count < -1 ? -count : count; }
    return true;
}
bool CofWeaponsListMessage(int size,const void* data) {
    if(size<9 || !data) return false;
    const char* begin=static_cast<const char*>(data);
    const char* end=static_cast<const char*>(std::memchr(begin,0,size));
    if(!end || end-begin>127 || end-begin+9!=size) return false;
    const auto* b=reinterpret_cast<const unsigned char*>(end+1);
    if(b[6]>=32 || (b[0]>=32 && b[0]!=255) || (b[2]>=32 && b[2]!=255) || b[4]>=10 || b[5]>=10) return false;
    weapons[b[6]]={static_cast<signed char>(b[0]),true}; return true;
}
void CofWeaponsClientReset() {
    std::memset(weapons,0,sizeof(weapons)); std::memset(reserve,0,sizeof(reserve));
    thirdAttack={}; current=0; clip=-1;
    weaponBody=-1;
    photoPending=false;
    dualClip[0]=dualClip[1]=-2;
    handViews[0]=HandView(); handViews[1]=HandView(); drawingHand=-1;
    ironActive=scoped=false; for(float& value:ironOffset) value=0;
}
void CofWeaponsClientInit() {
    CofWeaponsClientReset(); tested=false;
    gEngfuncs.pfnAddCommand("+attack3",Attack3Down); gEngfuncs.pfnAddCommand("-attack3",Attack3Up);
    gEngfuncs.pfnHookUserMsg("IronSights",IronMessage);
    gEngfuncs.pfnHookUserMsg("Scope",ScopeMessage);
    gEngfuncs.pfnHookUserMsg("DualAmmo",DualMessage);
    gEngfuncs.pfnHookUserMsg("CofHands",HandsMessage);
    gEngfuncs.pfnHookUserMsg("ViewKnock",ViewKnockMessage);
    gEngfuncs.pfnHookUserMsg("WeaponBody",WeaponBodyMessage);
    gEngfuncs.pfnHookUserMsg("TakePhoto",TakePhotoMessage);
}
bool CofWeaponsMirrorHand() { return drawingHand==0; }
void CofWeaponsHandEvent(bool begin) {
    if(drawingHand<0) return;
    HandView& hand=handViews[drawingHand];
    cl_entity_t* view=gEngfuncs.GetViewModel();
    // Engine's first-sequence event convention catches authored frame0 muzzle
    // events even when the reliable message arrives after its start timestamp.
    // Apply only after bones were calculated, not as a fake animation blend.
    if(begin) view->latched.sequencetime=hand.firstEvents?view->curstate.animtime:0;
    else { view->latched.sequencetime=0; hand.firstEvents=false; }
}
int CofWeaponsRenderHands(int flags,int (*draw)(int)) {
    cl_entity_t* view=gEngfuncs.GetViewModel();
    if(drawingHand>=0 || !view || IEngineStudio.GetCurrentEntity()!=view ||
       !handViews[0].active || !handViews[1].active || CofMovementCameraActive() || scoped) return -1;
    const cl_entity_t saved=*view;
    int result=0;
    for(int i=0;i<2;++i) {
        HandView& hand=handViews[i];
        *view=hand.entity;
        for(int axis=0;axis<3;++axis) {
            view->origin[axis]=saved.origin[axis]; view->angles[axis]=saved.angles[axis];
            view->curstate.origin[axis]=saved.curstate.origin[axis];
            view->curstate.angles[axis]=saved.curstate.angles[axis];
        }
        drawingHand=i;
        // Separate stable identity for RTX submissions; the engine viewmodel
        // pointer remains unchanged, retaining first-person depth/material flags.
        view->curstate.iuser4=i==0?COF_WEAPON_HAND_LEFT:COF_WEAPON_HAND_RIGHT;
        result |= draw(flags);
        static unsigned seen;
        if((flags&STUDIO_RENDER) && !(seen&(1u<<i)) && std::getenv("COF_WEAPONTEST")) {
            seen|=1u<<i;
            gEngfuncs.Con_Printf("COF_WEAPON_HAND_RENDER hand=%d sequence=%d model=%s\n",i+1,
                view->curstate.sequence,view->model->name);
        }
        hand.entity=*view;
        if(flags&STUDIO_RENDER) gEngfuncs.pTriAPI->CullFace(TRI_FRONT);
    }
    drawingHand=-1; *view=saved;
    IEngineStudio.SetRenderModel(view->model);
    if(view->model) IEngineStudio.StudioSetHeader(static_cast<studiohdr_t*>(IEngineStudio.Mod_Extradata(view->model)));
    return result;
}
bool CofWeaponsAiming() { return ironActive || scoped; }
void CofWeaponsClientView(ref_params_s* view) {
    if(view && weaponBody>=0 && !handViews[0].active && !handViews[1].active) {
        cl_entity_t* weapon=gEngfuncs.GetViewModel();
        if(weapon) weapon->curstate.body=weaponBody;
    }
    if(view && scoped && !CofMovementCameraActive()) {
        cl_entity_t* weapon=gEngfuncs.GetViewModel();
        if(weapon) weapon->model=nullptr; // SDK restores it from modelindex each frame.
    }
}
void CofWeaponsClientMove(usercmd_s* cmd,int active) {
    cmd->buttons &= ~ThirdAttackBit;
    if(active && !Blocked() && (thirdAttack.state&3)) cmd->buttons |= ThirdAttackBit;
    thirdAttack.state &= ~2;
}
bool CofWeaponsStudioEvent(const mstudioevent_s* event,const cl_entity_s* entity) {
    if(!event || !entity) return false;
    switch(event->event) {
    case 5001: Muzzle(entity,0); return true;
    case 5011: Muzzle(entity,1); return true;
    case 5021: Muzzle(entity,2); return true;
    case 5031: Muzzle(entity,3); return true;
    case 5004: SoundEvent(event,entity); return true;
    case 5050: {
        float origin[3]; for(int i=0;i<3;++i) origin[i]=entity->attachment[0][i];
        gEngfuncs.pEventAPI->EV_PlaySound(entity->index,origin,1,gEngfuncs.pfnRandomLong(0,1)==1 ?
            "weapons/flare/flare_strike1.wav":"weapons/flare/flare_strike2.wav",1,0.8f,0,100); return true; }
    case 5051: {
        // This authored release frame, not mouse-up, tells the server to throw.
        if(entity!=gEngfuncs.GetViewModel()) return true;
        char command[96]; std::snprintf(command,sizeof(command),"throwflare %d %d %d\n",
            int(entity->attachment[1][0]),int(entity->attachment[1][1]),int(entity->attachment[1][2]));
        gEngfuncs.pfnServerCmd(command); return true; }
    case 5080: {
        if(entity!=gEngfuncs.GetViewModel() || !std::memchr(event->options,0,sizeof(event->options))) return true;
        char command[48]; std::snprintf(command,sizeof(command),"zoominmdl %d\n",std::atoi(event->options));
        gEngfuncs.pfnServerCmd(command); return true; }
    default: return false;
    }
}
void CofWeaponsClientDraw() {
    ProtocolTest();
    if(scoped && !Blocked() && gHUD.m_pCvarDraw->value && !gHUD.m_iIntermission) {
        // Native CScope centers the 512x512 art and fills four surrounding black
        // panels. Keep its proportions on wide displays; never stretch a circle.
        const int side=ScreenHeight<512?ScreenHeight:512;
        const int left=(ScreenWidth-side)/2, top=(ScreenHeight-side)/2;
        gEngfuncs.pfnFillRGBABlend(0,0,left,ScreenHeight,0,0,0,255);
        gEngfuncs.pfnFillRGBABlend(left+side,0,ScreenWidth-left-side,ScreenHeight,0,0,0,255);
        gEngfuncs.pfnFillRGBABlend(left,0,side,top,0,0,0,255);
        gEngfuncs.pfnFillRGBABlend(left,top+side,side,ScreenHeight-top-side,0,0,0,255);
        CofDrawImage("gfx/vgui/telescope_scope.tga",left,top,side,side);
    }
    if(Blocked() || !current || !weapons[current].present || !gHUD.m_pCvarDraw->value ||
       gHUD.m_iIntermission || (gHUD.m_iHideHUDDisplay&0x0d)) return;
    const int ammo=weapons[current].ammo;
    if(dualClip[0]!=-2 || dualClip[1]!=-2) {
        char left[24],right[24],text[64];
        if(dualClip[0]>=0) std::snprintf(left,sizeof(left),"%d",dualClip[0]);
        else std::snprintf(left,sizeof(left),"--");
        if(dualClip[1]>=0) std::snprintf(right,sizeof(right),"%d",dualClip[1]);
        else std::snprintf(right,sizeof(right),"--");
        std::snprintf(text,sizeof(text),"L %s   R %s",left,right);
        gHUD.DrawHudStringReverse(ScreenWidth-32,ScreenHeight-48,0,text,220,220,220);
    } else if(ammo>=0 && ammo<32) {
        char text[64];
        if(clip>=0) std::snprintf(text,sizeof(text),"%d / %d",clip,reserve[ammo]);
        else std::snprintf(text,sizeof(text),"%d",reserve[ammo]);
        gHUD.DrawHudStringReverse(ScreenWidth-32,ScreenHeight-48,0,text,220,220,220);
    }
    // Original art, at its native32x32 size. Full original aim-specific HUD
    // visibility requires the remaining weapon modes, documented separately.
    if(!CofWeaponsAiming() && gHUD.m_iFOV>=90) CofDrawImage("gfx/vgui/crosshair.tga",ScreenWidth/2-16,ScreenHeight/2-16,32,32);
}
