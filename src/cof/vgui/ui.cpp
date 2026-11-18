#include "BaseWindow.h"
#include "BaseFontBackend.h"
#include "keydefs.h"
#include "ui.h"
#include "engine_bridge.h"
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <cctype>

namespace cof { namespace vgui {
namespace {
std::vector<Dialog*> windows;
std::map<std::string,std::string> language;
KeyValue scheme;
bool resourcesLoaded;
HFont normalFont, consoleFont, arrowFont;
int pointerX, pointerY, pressed=-1, combo=-1;
bool dragging, resizing;
int dragX,dragY;
bool scrollDragging;
int scrollGrab;
Rect paintClip={0,0,0,0};
Rect Intersect(Rect a,Rect b){int right=std::min(a.x+a.w,b.x+b.w),bottom=std::min(a.y+a.h,b.y+b.h);a.x=std::max(a.x,b.x);a.y=std::max(a.y,b.y);a.w=std::max(0,right-a.x);a.h=std::max(0,bottom-a.y);return a;}
struct ControlClip {
    Rect saved;
    ControlClip(const Control& c,int x,int y):saved(paintClip){paintClip=c.clip;if(paintClip.w>0){paintClip.x+=x;paintClip.y+=y;}}
    ~ControlClip(){paintClip=saved;}
};
cof_ui_engine_t engine = {};
std::string TokenKey(std::string value){for(char& c:value)c=char(std::tolower(static_cast<unsigned char>(c)));return value;}
int Clamp(int v,int lo,int hi) { return v<lo?lo:(v>hi?hi:v); }
float ClampF(float v,float lo,float hi) { return v<lo?lo:(v>hi?hi:v); }

void Fonts() {
    CBaseFont* current=g_FontMgr->GetIFontFromHandle(normalFont);
    if (!current || !current->IsEqualTo("Tahoma",16,0,0,FONT_COF_CONTROL))
        normalFont=CFontBuilder("Tahoma",16,0).SetFlags(FONT_COF_CONTROL).Create();
    consoleFont=normalFont;
    current=g_FontMgr->GetIFontFromHandle(arrowFont);
    if(!current||!current->IsEqualTo("Marlett",14,0,0,FONT_COF_CONTROL))
        arrowFont=CFontBuilder("Marlett",14,0).SetFlags(FONT_COF_CONTROL).Create();
}
void Resources() {
    if(resourcesLoaded) return;
    resourcesLoaded=true;
    LoadResource("resource/TrackerScheme.res",scheme);
    const char* paths[]={"resource/vgui_english.txt","resource/gameui_english.txt","resource/valve_english.txt","resource/cof_english.txt"};
    for(const char* path:paths) {
        KeyValue root;
        if(!LoadResource(path,root)) continue;
        const KeyValue* tokens=ResourceBody(root).Find("Tokens");
        if(tokens) for(const auto& kv:tokens->children) language[TokenKey(kv.name)]=kv.value;
    }
}
Rect Absolute(const Dialog& d,const Control& c) { Rect r=c.bounds; r.x+=d.bounds.x; r.y+=d.bounds.y; return r; }
int Hit(Dialog& d,int x,int y) {
    for(int i=int(d.controls.size())-1;i>=0;--i) {
        const Control& c=d.controls[i];
        Rect hit=Absolute(d,c);if(c.clip.w>0){Rect clip=c.clip;clip.x+=d.bounds.x;clip.y+=d.bounds.y;hit=Intersect(hit,clip);}
        if(c.visible&&c.enabled&&c.kind!=Kind::Label&&hit.Contains(x,y)) return i;
    }
    return -1;
}
void SliderAt(Dialog& d,Control& c,int x) {
    Rect r=Absolute(d,c);
    c.number=c.minimum+(c.maximum-c.minimum)*ClampF(float(x-r.x-4)/float(r.w>8?r.w-8:1),0,1);
    d.Changed(c);
}
Rect ScrollTrack(Rect r){return {r.x,r.y+r.w,r.w,std::max(1,r.h-2*r.w+1)};}
Rect ScrollThumb(const Control& c,Rect r){
    Rect track=ScrollTrack(r);int range=std::max(0,int(c.maximum-c.minimum));
    const int length=std::max(1,track.h-1);
    int h=std::min(length,std::max(track.w,length*c.pageSize/std::max(1,range+c.pageSize)));
    int y=range?int((length-h)*(c.number-c.minimum)/range):0;
    return {track.x,track.y+y,track.w-1,h};
}
void ScrollAt(Dialog& d,Control& c,int y){
    Rect r=Absolute(d,c),track=ScrollTrack(r),thumb=ScrollThumb(c,r);
    int travel=track.h-1-thumb.h;
    c.number=c.minimum+(travel>0?int(ClampF(float(y-track.y-scrollGrab)/travel,0,1)*(c.maximum-c.minimum)+.5f):0);
    d.Changed(c);
}
void Activate(Dialog& d,int index) {
    if(index<0||index>=int(d.controls.size())) return;
    Control& c=d.controls[index];
    if(!c.visible||!c.enabled) return;
    if(c.kind==Kind::Check) { c.checked=!c.checked; d.Changed(c); }
    else if(c.kind==Kind::Combo) combo=combo==index?-1:index;
    else if(c.kind==Kind::Button) d.Command(c.id);
    else if(c.kind==Kind::List) d.Changed(c);
}
class Host : public CMenuBaseWindow {
public:
    Host():CMenuBaseWindow("CoF VGUI") { bAllowDrag=false; }
    void Think() override {
        CMenuBaseWindow::Think();
        Dialog* d=windows.empty()?nullptr:windows.back();
        bool input=d&&d->focus>=0&&d->focus<int(d->controls.size())&&d->controls[d->focus].kind==Kind::Edit;
        UI_EnableTextInput(input);
    }
    void Draw() override {
        Fonts();
        for(Dialog* d:windows) d->Paint();
        if(windows.empty()||combo<0) return;
        Dialog& d=*windows.back();
        if(combo>=int(d.controls.size())) {combo=-1;return;}
        Control& c=d.controls[combo]; Rect r=Absolute(d,c); r.y+=r.h;
        const int rows=Clamp(int(c.choices.size()),1,12); r.h=rows*20;
        Fill(r,ThemeColor("ListPanel.BgColor",0xff282828)); Border(r,true);
        for(int i=0;i<rows;++i) {
            int item=c.scroll+i; if(item>=int(c.choices.size()))break;
            Rect row={r.x+2,r.y+i*20+1,r.w-4,20};
            if(row.Contains(pointerX,pointerY))Fill(row,0xff505050);
            Text(row,Localize(c.choices[item]));
        }
    }
    bool MouseMove(int x,int y) override {
        if(getenv("COF_POINTERTEST"))Con_Printf("COF_POINTER_MOVE %d %d drag=%d\n",x,y,dragging?1:0);
        pointerX=x;pointerY=y;
        if(windows.empty())return true;
        Dialog& d=*windows.back();
        if(d.Pointer(x,y,0,false))return true;
        if(dragging) {d.bounds.x=Clamp(x-dragX,0,ViewWidth()-std::min(d.bounds.w,280));d.bounds.y=Clamp(y-dragY,0,ViewHeight()-std::min(d.bounds.h,180));}
        if(resizing) {d.bounds.w=Clamp(x-d.bounds.x+dragX,280,ViewWidth()-d.bounds.x);d.bounds.h=Clamp(y-d.bounds.y+dragY,180,ViewHeight()-d.bounds.y);}
        if(pressed>=0&&pressed<int(d.controls.size())&&d.controls[pressed].kind==Kind::Slider)
            SliderAt(d,d.controls[pressed],x);
        if(scrollDragging&&pressed>=0&&pressed<int(d.controls.size())&&d.controls[pressed].kind==Kind::ScrollBar)
            ScrollAt(d,d.controls[pressed],y);
        return true;
    }
    bool KeyDown(int key) override { return Input(key,true); }
    bool KeyUp(int key) override { return Input(key,false); }
    void Char(int key) override {if(!windows.empty()) windows.back()->Character(key);}
protected:
    void _VidInit() override { SetCoord(0,0);SetSize(ViewWidth(),ViewHeight()); Fonts(); }
private:
    bool Input(int key,bool down) {
        if(getenv("COF_POINTERTEST")&&key==K_MOUSE1)Con_Printf("COF_POINTER_BUTTON %d at %d %d\n",down?1:0,pointerX,pointerY);
        if(windows.empty())return true;
        Dialog& d=*windows.back();
        if(d.CaptureKey(key,down))return true;
        if(key==K_MOUSE1&&d.Pointer(pointerX,pointerY,key,down))return true;
        if(key==K_MOUSE1) {
            if(!down) {
                int old=pressed;pressed=-1;dragging=resizing=scrollDragging=false;
                if(old>=0&&Hit(d,pointerX,pointerY)==old) Activate(d,old);
                return true;
            }
            if(combo>=0&&combo<int(d.controls.size())) {
                Control& c=d.controls[combo];Rect r=Absolute(d,c);r.y+=r.h;r.h=Clamp(int(c.choices.size()),1,12)*20;
                if(r.Contains(pointerX,pointerY)) {c.selected=Clamp(c.scroll+(pointerY-r.y)/20,0,int(c.choices.size())-1);combo=-1;d.Changed(c);return true;}
                combo=-1;
            }
            Rect close={d.bounds.x+d.bounds.w-22,d.bounds.y+5,16,16};
            if(close.Contains(pointerX,pointerY)) {d.Command("Close");return true;}
            Rect grip={d.bounds.x+d.bounds.w-12,d.bounds.y+d.bounds.h-12,12,12};
            if(d.resizable&&grip.Contains(pointerX,pointerY)){resizing=true;dragX=d.bounds.x+d.bounds.w-pointerX;dragY=d.bounds.y+d.bounds.h-pointerY;return true;}
            Rect titlebar={d.bounds.x,d.bounds.y,d.bounds.w,25};
            if(titlebar.Contains(pointerX,pointerY)){dragging=true;dragX=pointerX-d.bounds.x;dragY=pointerY-d.bounds.y;return true;}
            pressed=Hit(d,pointerX,pointerY);d.focus=pressed;
            if(pressed>=0){Control& c=d.controls[pressed];if(c.kind==Kind::Slider)SliderAt(d,c,pointerX);
                if(c.kind==Kind::ScrollBar){
                    Rect r=Absolute(d,c),track=ScrollTrack(r),thumb=ScrollThumb(c,r);
                    if(thumb.Contains(pointerX,pointerY)){scrollDragging=true;scrollGrab=pointerY-thumb.y;}
                    else {int delta=pointerY<track.y?-c.step:pointerY>=track.y+track.h?c.step:pointerY<thumb.y?-c.pageSize:c.pageSize;
                        c.number=ClampF(c.number+delta,c.minimum,c.maximum);d.Changed(c);}
                    return true;
                }
                if(c.kind==Kind::List){c.selected=Clamp(c.scroll+(pointerY-Absolute(d,c).y)/20,0,int(c.choices.size())-1);d.Changed(c);}
                if(c.kind==Kind::Edit)c.cursor=int(c.value.size());}
            return true;
        }
        if(combo>=0&&(key==K_MWHEELDOWN||key==K_MWHEELUP)&&down) {
            Control& c=d.controls[combo];c.scroll=Clamp(c.scroll+(key==K_MWHEELDOWN?1:-1),0,Clamp(int(c.choices.size())-12,0,10000));return true;
        }
        return d.Key(key,down);
    }
} host;
}

int ViewWidth(){return gpGlobals->scrWidth;}
int ViewHeight(){return gpGlobals->scrHeight;}
bool LoadResource(const std::string& path,KeyValue& result){
    int size=0;byte* data=EngFuncs::COM_LoadFile(path.c_str(),&size);if(!data)return false;
    std::string utf8,error;bool ok=DecodeResource(data,size,utf8,&error)&&ParseKeyValues(utf8,result,&error);
    EngFuncs::COM_FreeFile(data);return ok;
}
std::string Localize(const std::string& token){
    Resources();std::string key=token.size()&&token[0]=='#'?token.substr(1):token;
    auto it=language.find(TokenKey(key));if(it==language.end())return token;
    std::string text=it->second;
    // '&' marks an accelerator in VGUI labels; it is not visible glyph content.
    for(size_t i=0;i<text.size();) {if(text[i]=='&')text.erase(i,1);else ++i;}
    return text;
}
void Fill(Rect r,unsigned color){if(paintClip.w>0)r=Intersect(r,paintClip);if(r.w>0&&r.h>0)UI_FillRect(r.x,r.y,r.w,r.h,color);}
unsigned ThemeColor(const char* key,unsigned fallback){
    Resources();std::string name=key;
    const char* aliases[][2]={{"Label.TextColor","FgColor"},{"Label.DisabledFgColor","DisabledFgColor1"},
        {"Button.BgColor","BgColor"},{"TextEntry.BgColor","WindowBgColor"},
        {"Frame.BgColor","BgColor"},{"Frame.TitleTextColor","TitleBarFgColor"},{"ListPanel.BgColor","ListBG"}};
    for(const auto& pair:aliases)if(name==pair[0]){name=pair[1];break;}
    RGBA c=Scheme(scheme).Color(name,RGBA((fallback>>16)&255,(fallback>>8)&255,fallback&255,(fallback>>24)&255));
    return(unsigned(c.a)<<24)|(unsigned(c.r)<<16)|(unsigned(c.g)<<8)|unsigned(c.b);
}
void Border(Rect r,bool sunken){
    SchemeBorder(r,sunken?"InsetBorder":"RaisedBorder");
}
void SchemeBorder(Rect r,const char* name){
    Resources();const KeyValue* border=Scheme(scheme).Border(name);
    if(border){
        const char* sides[]={"Left","Top","Right","Bottom"};
        for(int side=0;side<4;++side){const KeyValue* edge=border->Find(sides[side]);if(!edge)continue;int depth=0;
            for(const auto& line:edge->children){int begin=0,end=0;std::sscanf(line.Get("offset","0 0").c_str(),"%d %d",&begin,&end);
                unsigned color=ThemeColor(line.Get("color","BorderDark").c_str(),0xff707070);
                if(side==0)Fill({r.x+depth,r.y+begin,1,r.h-begin-end},color);
                if(side==1)Fill({r.x+begin,r.y+depth,r.w-begin-end,1},color);
                if(side==2)Fill({r.x+r.w-1-depth,r.y+begin,1,r.h-begin-end},color);
                if(side==3)Fill({r.x+begin,r.y+r.h-1-depth,r.w-begin-end,1},color);
                ++depth;
            }
        }return;
    }
    bool sunken=std::string(name)=="InsetBorder";
    unsigned hi=ThemeColor("BorderBright",0xff777777),lo=ThemeColor("BorderDark",0xff141414);if(sunken)std::swap(hi,lo);
    Fill({r.x,r.y,r.w,1},hi);Fill({r.x,r.y,1,r.h},hi);
    Fill({r.x,r.y+r.h-1,r.w,1},lo);Fill({r.x+r.w-1,r.y,1,r.h},lo);
}
void Text(Rect r,const std::string& text,unsigned color,bool console,bool centered){
    Fonts();HFont font=console?consoleFont:normalFont;int tall=g_FontMgr->GetFontTall(font);
    if(r.w<=0||r.h<=0)return;
    Rect clip=paintClip.w>0?Intersect(r,paintClip):r;if(clip.w<=0||clip.h<=0)return;
    EngFuncs::PIC_EnableScissor(clip.x,clip.y,clip.w,clip.h);
    UI_DrawString(font,r.x,r.y,r.w,r.h,text.c_str(),color,tall,centered?QM_CENTER:QM_LEFT,ETF_FORCECOL|ETF_NOSIZELIMIT|ETF_NO_WRAP);
    EngFuncs::PIC_DisableScissor();
}
int TextWidth(const std::string& text,bool console){Fonts();return g_FontMgr->GetTextWideScaled(console?consoleFont:normalFont,text.c_str(),16);}
void Arrow(Rect r,bool down,unsigned color,bool menu){
    // GameUI 1007b322/10079630: Marlett u/t, not literal v/^ in Tahoma.
    Fonts();const int tall=g_FontMgr->GetFontTall(arrowFont);
    Rect clip=paintClip.w>0?Intersect(r,paintClip):r;if(clip.w<=0||clip.h<=0)return;
    EngFuncs::PIC_EnableScissor(clip.x,clip.y,clip.w,clip.h);
    UI_DrawString(arrowFont,r.x+(menu?3:1),r.y+(menu?0:down?-1:1),r.w-(menu?3:0),r.h,
        down?"u":"t",color,tall,menu?QM_LEFT:QM_CENTER,ETF_FORCECOL|ETF_NOSIZELIMIT|ETF_NO_WRAP);
    EngFuncs::PIC_DisableScissor();
}
int Complete(const std::string& p,int i,char* out,int capacity){return engine.complete?engine.complete(p.c_str(),i,out,capacity):0;}
void PaintControl(const Control& c,int x,int y,bool focused,bool hovered,bool down){
    if(!c.visible)return;Rect r=c.bounds;r.x+=x;r.y+=y;
    ControlClip clip(c,x,y);
    if(c.kind==Kind::Combo)paintClip=paintClip.w>0?Intersect(r,paintClip):r;
    unsigned fg=ThemeColor(c.enabled?"Label.TextColor":"Label.DisabledFgColor",c.enabled?0xffd8ded3:0xff777777);
    unsigned bg=ThemeColor("Button.BgColor",0x80282828);
    if(c.kind==Kind::Image){HIMAGE image=EngFuncs::PIC_Load(c.value.c_str());if(image){EngFuncs::PIC_Set(image,255,255,255,255);EngFuncs::PIC_DrawTrans(r.x,r.y,r.w,r.h);}return;}
    if(c.kind==Kind::Label){Text(r,Localize(c.text),fg);return;}
    if(c.kind==Kind::Button){Fill(r,bg);SchemeBorder(r,(down||c.checked)?"ButtonDepressedBorder":focused?"ButtonKeyFocusBorder":"ButtonBorder");Rect label=r;if(down){label.x+=2;++label.y;}Text(label,Localize(c.text),fg,false,true);}
    else if(c.kind==Kind::Check){Rect box={r.x,r.y+(r.h-12)/2,12,12};Fill(box,0xff222222);Border(box,true);if(c.checked)Text({box.x,box.y-2,12,16},"x",fg,false,true);r.x+=18;r.w-=18;Text(r,Localize(c.text),fg);}
    else if(c.kind==Kind::Slider){Rect track={r.x+4,r.y+10,r.w-8,5};Fill(track,0xff202020);Border(track,true);
        float t=c.maximum>c.minimum?ClampF((c.number-c.minimum)/(c.maximum-c.minimum),0,1):0;
        Rect thumb={r.x+int(t*(r.w-8)),r.y+4,8,16};Fill(thumb,0xff666666);Border(thumb);
        Text({r.x,r.y+22,r.w/2,18},Localize(c.leftText),fg);Text({r.x+r.w/2,r.y+22,r.w/2,18},Localize(c.rightText),fg,false,true);}
    else if(c.kind==Kind::Combo||c.kind==Kind::Edit){Fill(r,ThemeColor("TextEntry.BgColor",0xff202020));Border(r,true);
        std::string value=c.kind==Kind::Combo?(c.selected>=0&&c.selected<int(c.choices.size())?c.choices[c.selected]:""):c.value;
        if(c.kind==Kind::Combo)value=Localize(value);
        if(c.password)value.assign(value.size(),'*');Rect t={r.x+5,r.y+2,r.w-10-(c.kind==Kind::Combo?18:0),r.h-4};
        fg=ThemeColor(c.enabled?"WindowFgColor":"WindowDisabledFgColor",fg);
        std::string visible=value;int cursor=Clamp(c.cursor,0,int(value.size()));
        if(c.kind==Kind::Edit&&focused)while(cursor>0&&TextWidth(visible.substr(0,cursor),c.consoleFont)>t.w-2){size_t skip=1;while(skip<visible.size()&&(visible[skip]&0xc0)==0x80)++skip;visible.erase(0,skip);cursor-=int(skip);}
        Text(t,visible,fg,c.consoleFont);
        if(c.kind==Kind::Combo){Rect b={r.x+r.w-r.h+4,r.y+2,r.h-2,r.h-2};Fill(b,ThemeColor("MenuButton/ButtonBgColor",bg));SchemeBorder(b,down?"ScrollBarButtonDepressedBorder":"ScrollBarButtonBorder");Arrow(b,true,ThemeColor(c.enabled&&(hovered||down)?"MenuButton/ArmedArrowColor":"MenuButton/ButtonArrowColor",fg),true);}
        if(c.kind==Kind::Edit&&focused&&int(gpGlobals->time*2)%2==0){int cx=TextWidth(visible.substr(0,cursor),c.consoleFont);Fill({t.x+Clamp(cx,0,t.w-1),t.y+2,1,t.h-4},ThemeColor("TextCursorColor",fg));}}
    else if(c.kind==Kind::ScrollBar){
        Fill(r,ThemeColor("ScrollBarSlider/ScrollBarSliderBgColor",0xc8282828));
        Rect up={r.x,r.y,r.w-1,r.w},bottom={r.x,r.y+r.h-r.w,r.w-1,r.w};
        Fill(up,bg);Fill(bottom,bg);SchemeBorder(up,"ScrollBarButtonBorder");SchemeBorder(bottom,"ScrollBarButtonBorder");
        Arrow(up,false,ThemeColor("DimBaseText",fg));Arrow(bottom,true,ThemeColor("DimBaseText",fg));
        Rect thumb=ScrollThumb(c,r);Fill(thumb,ThemeColor("ScrollBarSlider/ScrollBarSliderFgColor",bg));SchemeBorder(thumb,"ButtonBorder");
    }
    else if(c.kind==Kind::List){Fill(r,ThemeColor("ListBG",0xc8282828));Border(r,true);int rows=r.h/20;
        for(int i=0;i<rows;++i){int n=c.scroll+i;if(n>=int(c.choices.size()))break;Rect row={r.x+2,r.y+i*20+1,r.w-4,20};if(n==c.selected)Fill(row,ThemeColor("SelectionBG",0xa0e09c30));Text(row,c.choices[n],fg,c.consoleFont);}}
    if(focused&&c.enabled&&c.kind==Kind::Button){unsigned focus=ThemeColor("ButtonFocusBorder",0xff000000);for(int xx=r.x+4;xx<r.x+r.w-4;xx+=3){Fill({xx,r.y+3,1,1},focus);Fill({xx,r.y+r.h-4,1,1},focus);}}
}
void Dialog::Paint(){
    Fill(bounds,ThemeColor("Frame.BgColor",0x96282828));Border(bounds);
    Text({bounds.x+8,bounds.y+4,bounds.w-36,22},Localize(title),ThemeColor("Frame.TitleTextColor",0xffffffff));
    Control close;close.kind=Kind::Button;close.text="x";close.bounds={bounds.w-22,5,16,16};PaintControl(close,bounds.x,bounds.y,false,false,false);
    for(int i=0;i<int(controls.size());++i)PaintControl(controls[i],bounds.x,bounds.y,i==focus,Absolute(*this,controls[i]).Contains(pointerX,pointerY),i==pressed);
    if(resizable)for(int i=0;i<3;++i)Fill({bounds.x+bounds.w-4-i*3,bounds.y+bounds.h-3-i*3,2,1},0xffaaaaaa);
}
Control* Dialog::Find(const std::string& id){for(auto& c:controls)if(c.id==id)return &c;return nullptr;}
void Dialog::Focus(const std::string& id){for(int i=0;i<int(controls.size());++i)if(controls[i].id==id){focus=i;controls[i].cursor=int(controls[i].value.size());break;}}
void Dialog::Command(const std::string& id){if(id=="Close"||id=="Cancel")Close(*this);}
bool Dialog::Key(int key,bool down){
    if(!down)return true;
    if(key==K_ESCAPE){if(combo>=0){combo=-1;return true;}Command("Close");return true;}
    if(key==K_TAB){int step=EngFuncs::KEY_IsDown(K_SHIFT)?-1:1;for(int i=0;i<int(controls.size());++i){focus=(focus+step+int(controls.size()))%int(controls.size());Control& c=controls[focus];if(c.visible&&c.enabled&&c.kind!=Kind::Label)break;}return true;}
    if(focus<0||focus>=int(controls.size()))return true;Control& c=controls[focus];
    if(c.kind==Kind::Edit){c.cursor=Clamp(c.cursor,0,int(c.value.size()));
        if(key==K_BACKSPACE&&c.cursor>0){size_t begin=c.cursor-1;while(begin&&(c.value[begin]&0xc0)==0x80)--begin;c.value.erase(begin,c.cursor-begin);c.cursor=int(begin);Changed(c);}
        else if(key==K_DEL&&c.cursor<int(c.value.size())){size_t end=c.cursor+1;while(end<c.value.size()&&(c.value[end]&0xc0)==0x80)++end;c.value.erase(c.cursor,end-c.cursor);Changed(c);}
        else if(key==K_LEFTARROW&&c.cursor>0){--c.cursor;while(c.cursor&&(c.value[c.cursor]&0xc0)==0x80)--c.cursor;}
        else if(key==K_RIGHTARROW&&c.cursor<int(c.value.size())){++c.cursor;while(c.cursor<int(c.value.size())&&(c.value[c.cursor]&0xc0)==0x80)++c.cursor;}
        else if(key==K_HOME)c.cursor=0;else if(key==K_END)c.cursor=int(c.value.size());
        else if(key=='v'&&EngFuncs::KEY_IsDown(K_CTRL)){const char* clip=EngFuncs::GetClipboardData();if(clip){for(const char* p=clip;*p&&c.value.size()<4096;++p)if(*p!='\r'&&*p!='\n'){c.value.insert(c.cursor,1,*p);++c.cursor;}Changed(c);}}
        else if(key==K_ENTER)Command(c.id);return true;}
    if(c.kind==Kind::ScrollBar&&(key==K_UPARROW||key==K_DOWNARROW||key==K_PGUP||key==K_PGDN)){int delta=(key==K_UPARROW||key==K_PGUP)?-1:1;delta*=(key==K_PGUP||key==K_PGDN)?c.pageSize:c.step;c.number=ClampF(c.number+delta,c.minimum,c.maximum);Changed(c);}
    else if(c.kind==Kind::Slider&&(key==K_LEFTARROW||key==K_RIGHTARROW)){c.number=ClampF(c.number+(key==K_RIGHTARROW?1:-1)*(c.maximum-c.minimum)/20,c.minimum,c.maximum);Changed(c);}
    else if((c.kind==Kind::Combo||c.kind==Kind::List)&&(key==K_UPARROW||key==K_DOWNARROW||key==K_MWHEELUP||key==K_MWHEELDOWN)){int sign=(key==K_DOWNARROW||key==K_MWHEELDOWN)?1:-1;c.selected=Clamp(c.selected+sign,0,int(c.choices.size())-1);if(c.selected<c.scroll)c.scroll=c.selected;if(c.selected>=c.scroll+c.bounds.h/20)c.scroll=c.selected-c.bounds.h/20+1;Changed(c);}
    else if(key==K_ENTER||key==K_SPACE)Activate(*this,focus);
    return true;
}
void Dialog::Character(int cp){
    if(focus<0||focus>=int(controls.size())||cp<32||cp==127)return;Control& c=controls[focus];if(c.kind!=Kind::Edit||!c.enabled||c.value.size()>4092)return;
    std::string s;if(cp<128)s+=char(cp);else if(cp<2048){s+=char(0xc0|(cp>>6));s+=char(0x80|(cp&63));}else if(cp<65536){s+=char(0xe0|(cp>>12));s+=char(0x80|((cp>>6)&63));s+=char(0x80|(cp&63));}else return;
    c.cursor=Clamp(c.cursor,0,int(c.value.size()));c.value.insert(c.cursor,s);c.cursor+=int(s.size());Changed(c);
}
void Dialog::LoadControls(const std::string& path){
    controls.clear();focus=-1;KeyValue root;if(!LoadResource(path,root))return;
    for(const auto& node:ResourceBody(root).children){if(!node.section)continue;Control c;c.id=node.Get("fieldName",node.name);c.text=node.Get("labelText",node.Get("title",""));
        std::string type=node.Get("ControlName","");
        if(type.find("CheckButton")!=std::string::npos)c.kind=Kind::Check;
        else if(type.find("Slider")!=std::string::npos)c.kind=Kind::Slider;
        else if(type=="Button")c.kind=Kind::Button;else if(type=="ComboBox")c.kind=Kind::Combo;
        else if(type=="TextEntry"||type.find("TextEntry")!=std::string::npos)c.kind=Kind::Edit;
        else if(type.find("ListPanel")!=std::string::npos)c.kind=Kind::List;else c.kind=Kind::Label;
        c.bounds={node.Int("xpos",0),node.Int("ypos",0),node.Int("wide",80),node.Int("tall",24)};
        c.visible=node.Int("visible",1)!=0;c.enabled=node.Int("enabled",1)!=0;c.tab=node.Int("tabPosition",0);
        c.leftText=node.Get("leftText","");c.rightText=node.Get("rightText","");controls.push_back(c);
    }
}
void Show(Dialog& d){
    Resources();Fonts();if(!host.IsVisible())windows.clear();
    windows.erase(std::remove(windows.begin(),windows.end(),&d),windows.end());windows.push_back(&d);
    d.Open();pressed=combo=-1;dragging=resizing=scrollDragging=false;host.Show();host.DisableTransition();
}
void Close(Dialog& d){
    windows.erase(std::remove(windows.begin(),windows.end(),&d),windows.end());d.Closed();pressed=combo=-1;dragging=resizing=scrollDragging=false;
    if(windows.empty()){UI_EnableTextInput(false);host.Hide();host.DisableTransition();}
}
bool Visible(const Dialog& d){return host.IsVisible()&&std::find(windows.begin(),windows.end(),&d)!=windows.end();}
Dialog* ActiveDialog(){return !host.IsVisible()||windows.empty()?nullptr:windows.back();}
void Register(){EngFuncs::Cmd_AddCommand("cof_vgui_options",OpenOptions);EngFuncs::Cmd_AddCommand("cof_vgui_console",ToggleConsole);}
} }

extern "C" EXPORT int GetCofUIAPI(int version,const cof_ui_engine_t* input,cof_ui_exports_t* output){
    if(version!=COF_UI_API_VERSION||!input||!output)return 0;
    cof::vgui::engine=*input;output->toggle_console=cof::vgui::ToggleConsole;output->console_print=cof::vgui::ConsolePrint;output->console_clear=cof::vgui::ConsoleClear;return 1;
}
