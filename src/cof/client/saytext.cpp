// Recovered CoF SayText contract: analysis/ui/chat-client.md.
// Uses the SDK HUD interface; the visible rows are CoF pager labels, not HL chat.
#include "hud.h"
#include "cl_util.h"
#include "ui_font.h"
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cstdio>

namespace {
char chatRows[6][256];
float chatDeadline;
int chatReceived;
bool ChatVisible() {
    const char* level = gEngfuncs.pfnGetLevelName();
    return level && std::strstr(level,"cof_");
}
int ScrollChat() {
    ConsolePrint(chatRows[0]);
    std::memmove(chatRows[0],chatRows[1],sizeof(chatRows)-sizeof(chatRows[0]));
    std::memset(chatRows[5],0,sizeof(chatRows[5]));
    if(chatRows[0][0]==' ') {chatRows[0][0]=2;return 1+ScrollChat();}
    return 1;
}
int FreeRow() {
    for(int i=0;i<5;++i) if(!chatRows[i][0]) return i;
    ScrollChat();return 4;
}
// Keep codepoints together when the port receives UTF-8. Original was byte based.
size_t NextGlyph(const std::string& text,size_t pos) {
    size_t next=pos+1;
    while(next<text.size() && (static_cast<unsigned char>(text[next])&0xc0)==0x80) ++next;
    return next;
}
void AppendChat(std::string text) {
    while(!text.empty()) {
        size_t cut=text.size(),lastSpace=0,previous=1;
        int width=10,height=0;
        for(size_t i=1;i<text.size();) {
            size_t next=NextGlyph(text,i);
            if(text[i]==' ' && i>1) lastSpace=i;
            int advance=0;
            std::string glyph=text.substr(i,next-i);
            GetConsoleStringSize(glyph.c_str(),&advance,&height);
            width+=advance;
            if(width>std::max(50,ScreenWidth-40)) {
                cut=lastSpace?lastSpace:previous;
                if(cut<=1) cut=next;
                break;
            }
            previous=i;i=next;
        }
        int row=FreeRow();
        const size_t bytes=std::min(cut,sizeof(chatRows[row])-1);
        std::memcpy(chatRows[row],text.data(),bytes);chatRows[row][bytes]=0;
        if(cut==text.size()) break;
        text.erase(0,cut);
        if(text[0]!=' ') text.insert(text.begin(),' ');
    }
}
}

DECLARE_MESSAGE(m_SayText,SayText)
int CHudSayText::Init() {
    gHUD.AddHudElem(this);HOOK_MESSAGE(SayText);InitHUDData();
    m_HUD_saytext=gEngfuncs.pfnRegisterVariable("hud_saytext","1",0);
    m_HUD_saytext_time=gEngfuncs.pfnRegisterVariable("hud_saytext_time","5",0);
    m_iFlags|=HUD_INTERMISSION;return 1;
}
void CHudSayText::InitHUDData() {std::memset(chatRows,0,sizeof(chatRows));chatDeadline=0;}
int CHudSayText::VidInit() {return 1;}
int CHudSayText::Draw(float now) {
    if(!m_HUD_saytext->value) return 1;
    chatDeadline=std::min(chatDeadline,now+m_HUD_saytext_time->value);
    if(chatDeadline<=now) {
        if(chatRows[0][0]) {chatDeadline=now+m_HUD_saytext_time->value;ScrollChat();}
        else m_iFlags&=~HUD_ACTIVE;
    }
    if(ChatVisible()) for(int i=0;i<5;++i)
        if(chatRows[i][0]) CofPagerText(5,ScreenHeight/2+8+i*32,chatRows[i]+1);
    return 1;
}
int CHudSayText::MsgFunc_SayText(const char*,int size,void* buffer) {
    // Accept only the BYTE + terminated STRING wire format, bounded by the packet.
    if(!buffer||size<2) return 1;
    const unsigned char* bytes=static_cast<const unsigned char*>(buffer);
    const char* text=reinterpret_cast<const char*>(bytes+1);
    if(!std::memchr(text,0,size-1)) return 1;
    SayTextPrint(text,size-1,bytes[0]);++chatReceived;return 1;
}
void CHudSayText::SayTextPrint(const char* text,int size,int) {
    if(!text||size<=0||!*text) return;
    size_t count=0;
    while(count<size_t(size)&&count<255&&text[count]) ++count;
    const bool empty=!chatRows[0][0];
    AppendChat(std::string(text,count));
    if(empty) chatDeadline=gHUD.m_flTime+m_HUD_saytext_time->value;
    m_iFlags|=HUD_ACTIVE;
    PlaySound("player/police/police_pager.wav",1);
}
void CHudSayText::EnsureTextFitsInOneLineAndWrapIfHaveTo(int) {
    // Wrapping occurs before insertion, avoiding pointers invalidated by scrolling.
}
#include "chat_runtime_tests.inc"
