// Recovered GameUI options; native evidence and explicit port adaptations:
// analysis/ui/options.md. Uses only our controls and the source engine API.
#include "BaseMenu.h"
#include "ui.h"
#include "enginecallback_menu.h"
#include "keydefs.h"
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <map>
#include <sstream>

namespace cof { namespace vgui {
namespace {
std::string Number(float value) { char text[64]; snprintf(text,sizeof(text),"%.6g",value); return text; }
float Numeric(const std::string& text) { return float(std::atof(text.c_str())); }
std::string FileText(const char* path) {
    int size=0; byte* data=EngFuncs::COM_LoadFile(path,&size);
    if(!data) return "";
    std::string text(reinterpret_cast<char*>(data),size);
    EngFuncs::COM_FreeFile(data); return text;
}
// user.scr has anonymous type/default blocks, so it is not KeyValues syntax.
std::vector<std::string> ScriptTokens(const std::string& text) {
    std::vector<std::string> out;
    for(size_t i=0;i<text.size() && text[i];) {
        if(static_cast<unsigned char>(text[i])<=32){++i;continue;}
        if(text[i]=='/'&&i+1<text.size()&&text[i+1]=='/') {
            while(i<text.size()&&text[i]!='\n')++i; continue;
        }
        if(text[i]=='{'||text[i]=='}'){out.push_back(text.substr(i++,1));continue;}
        std::string token;
        if(text[i]=='"') {
            ++i;
            while(i<text.size()&&text[i]!='"') {
                if(text[i]=='\\'&&i+1<text.size()&&(text[i+1]=='"'||text[i+1]=='\\'))++i;
                token+=text[i++];
            }
            if(i<text.size())++i;
        } else {
            while(i<text.size()&&static_cast<unsigned char>(text[i])>32&&text[i]!='{'&&text[i]!='}')token+=text[i++];
        }
        out.push_back(token);
    }
    return out;
}
struct AdvancedOption {
    std::string cvar,prompt,type,initial;
    float minimum=-1,maximum=-1;
    std::vector<std::string> labels,values;
};
std::vector<AdvancedOption> ReadAdvanced() {
    auto t=ScriptTokens(FileText("user.scr")); std::vector<AdvancedOption> result;
    size_t i=0; while(i<t.size()&&t[i]!="INFO_OPTIONS")++i;
    if(i+1>=t.size()||t[++i]!="{")return result; ++i;
    while(i+6<t.size()&&t[i]!="}") {
        AdvancedOption a; a.cvar=t[i++];
        if(t[i++]!="{")break; a.prompt=t[i++];
        if(t[i++]!="{")break; a.type=t[i++];
        std::vector<std::string> spec;
        while(i<t.size()&&t[i]!="}")spec.push_back(t[i++]);
        if(i+2>=t.size())break; ++i;
        if(t[i++]!="{")break;
        a.initial=t[i++];
        while(i<t.size()&&t[i]!="}")++i;
        if(i+1>=t.size())break; ++i;
        if(t[i++]!="}")break;
        if(a.type=="NUMBER"&&spec.size()>=2){a.minimum=Numeric(spec[0]);a.maximum=Numeric(spec[1]);}
        if(a.type=="LIST")for(size_t k=0;k+1<spec.size();k+=2){a.labels.push_back(spec[k]);a.values.push_back(spec[k+1]);}
        if(a.cvar.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_")==std::string::npos)
            result.push_back(a);
    }
    return result;
}
struct Value { std::string original,draft; };
struct Association { std::string cvar; bool negative=false; std::vector<std::string> values; };
struct KeyAction { std::string command,label; };
class OptionsDialog: public Dialog {
    int page=0,advancedScroll=0,captureRow=-1;
    std::map<std::string,Value> values;
    std::map<std::string,Association> associations;
    std::vector<AdvancedOption> advanced;
    std::vector<KeyAction> actions;
    std::vector<std::string> originalKeys,draftKeys;
    std::vector<int> videoModes;
    int selectedMode=-1,originalMode=-1,selectedFullscreen=0,originalFullscreen=0,selectedAspect=0;
    std::string status;
    Value& ValueFor(const std::string& name,const std::string& fallback="0") {
        auto found=values.find(name); if(found!=values.end())return found->second;
        const char* current=EngFuncs::GetCvarString(name.c_str());
        std::string value=current&&*current?current:fallback;
        if(name=="$mlook"||name=="$jlook") {
            int* state=static_cast<int*>(EngFuncs::KEY_GetState(name=="$mlook"?"in_mlook":"in_jlook"));
            value=state&&(state[2]&1)?"1":"0";
        }
        Value v;v.original=v.draft=value;return values.emplace(name,v).first->second;
    }
    bool Dirty() const {
        for(const auto& v:values)if(v.second.original!=v.second.draft)return true;
        return originalKeys!=draftKeys||originalMode!=selectedMode||originalFullscreen!=selectedFullscreen;
    }
    void Buttons() {
        const char* tabs[]={"#GameUI_Keyboard","#GameUI_Mouse","#GameUI_Audio","#GameUI_Video","#GameUI_Voice","#GameUI_AdvancedNoEllipsis"};
        int tabX=8;
        for(int i=0;i<6;++i) {
            Control c;c.id="Tab"+std::to_string(i);c.text=tabs[i];c.kind=Kind::Button;
            int width=std::max(44,TextWidth(Localize(tabs[i]))+16);
            c.bounds={tabX,28,width,24};tabX+=width;c.checked=i==page;controls.push_back(c);
        }
        const char* ids[]={"OK","Cancel","Apply"};
        const char* labels[]={"#PropertyDialog_OK","#PropertyDialog_Cancel","#PropertyDialog_Apply"};
        for(int i=0;i<3;++i) {
            Control c;c.id=ids[i];c.text=labels[i];c.kind=Kind::Button;c.bounds={267+80*i,373,72,24};
            if(i==2)c.enabled=Dirty();controls.push_back(c);
        }
        if(!status.empty()){Control c;c.id="Status";c.text=status;c.bounds={12,350,488,20};controls.push_back(c);}
    }
    void Bind(const char* id,const char* cvar,Kind kind,float low=0,float high=1,bool negative=false) {
        Control* c=Find(id);if(!c)return;c->kind=kind;c->minimum=low;c->maximum=high;
        const char* current=EngFuncs::GetCvarString(cvar);
        if(cvar[0]!='$'&&(!current||!*current))c->enabled=false;
        Association a;a.cvar=cvar;a.negative=negative;associations[id]=a;
        const std::string value=ValueFor(cvar).draft;c->value=value;c->number=Numeric(value);
        c->checked=negative?c->number<0:c->number!=0;
    }
    void Choices(const char* id,const char* cvar,const std::vector<std::string>& labels,const std::vector<std::string>& choices) {
        Bind(id,cvar,Kind::Combo);Control* c=Find(id);if(!c)return;
        c->choices=labels;associations[id].values=choices;c->selected=0;
        for(int i=0;i<int(choices.size());++i)if(Numeric(choices[i])==Numeric(ValueFor(cvar).draft))c->selected=i;
    }
    void ReadKeys() {
        actions.clear();auto tokens=ScriptTokens(FileText("gfx/shell/kb_act.lst"));
        for(size_t i=0;i+1<tokens.size();i+=2){
            if(!tokens[i+1].empty()&&tokens[i+1][0]=='=')continue;
            KeyAction a;a.command=tokens[i];a.label=tokens[i+1];actions.push_back(a);
        }
        originalKeys.resize(256);draftKeys.resize(256);
        for(int i=0;i<256;++i){const char* key=EngFuncs::KEY_GetBinding(i);originalKeys[i]=draftKeys[i]=key?key:"";}
    }
    void RefreshKeyList() {
        Control* c=Find("listpanel_keybindlist");if(!c)return;c->kind=Kind::List;c->choices.clear();
        for(const auto& a:actions) {
            std::string row=Localize(a.label);
            if(a.command!="blank") {
                row+="    ";int count=0;
                for(int k=0;k<256;++k)if(draftKeys[k]==a.command) {
                    const char* name=EngFuncs::KeynumToString(k);if(!name)continue;
                    if(count++)row+=", ";row+=name;
                }
            }
            c->choices.push_back(row);
        }
        const bool valid=c->selected>=0&&c->selected<int(actions.size())&&actions[c->selected].command!="blank";
        if(Find("ChangeKeyButton"))Find("ChangeKeyButton")->enabled=valid;
        if(Find("ClearKeyButton"))Find("ClearKeyButton")->enabled=valid;
    }
    void VideoChoices() {
        Control* resolution=Find("Resolution");if(!resolution)return;
        resolution->kind=Kind::Combo;resolution->choices.clear();videoModes.clear();
        bool hasWide=false;int selected=-1;
        for(int i=0;i<1024;++i) {
            const char* mode=EngFuncs::GetModeString(i);if(!mode)break;
            int w=0,h=0;sscanf(mode,"%dx%d",&w,&h);
            const bool wide=w>0&&h>0&&(w*9==h*16||w*5==h*8);
            hasWide=hasWide||wide;if(int(wide)!=selectedAspect)continue;
            resolution->choices.push_back(mode);videoModes.push_back(i);
            if(i==selectedMode)selected=int(videoModes.size())-1;
        }
        if(resolution->choices.empty()){resolution->enabled=false;resolution->choices.push_back("-");}
        else {resolution->enabled=true;resolution->selected=selected>=0?selected:0;if(selected<0)selectedMode=videoModes[0];}
        Control* window=Find("Windowed");if(window){window->kind=Kind::Combo;window->choices={"#UI_RunWindowed","#UI_RunFull"};window->selected=selectedFullscreen?1:0;}
        Control* aspect=Find("AspectRatio");if(aspect){aspect->kind=Kind::Combo;aspect->choices={"#GameUI_AspectNormal","#GameUI_AspectWide"};aspect->selected=selectedAspect;aspect->enabled=hasWide;}
    }
    void AdvancedPage() {
        LoadControls("resource/MultiplayerAdvancedPage.res");
        Control* list=Find("PanelListPanel");if(list)list->visible=false;
        Control* image=Find("ImagePanel1");if(image){image->kind=Kind::Image;image->value="resource/menu_advoptions.tga";}
        // GameUI CPanelListPanel: pixel offsets, 24px scroll step; clip partial
        // 28px rows at the parent viewport (analysis/ui/controls.md).
        const int viewportHeight=232,totalHeight=int(advanced.size())*28;
        advancedScroll=std::max(0,std::min(advancedScroll,std::max(0,totalHeight-viewportHeight)));
        Control scroll;scroll.id="AdvancedScroll";scroll.kind=Kind::ScrollBar;scroll.bounds={475,80,18,230};
        scroll.maximum=float(std::max(0,totalHeight-viewportHeight));scroll.number=float(advancedScroll);scroll.pageSize=scroll.step=24;
        controls.push_back(scroll);
        for(int i=advancedScroll/28;i<int(advanced.size())&&28*i<advancedScroll+viewportHeight;++i) {
            const auto& a=advanced[i];int y=84+28*i-advancedScroll;
            Control c;c.id="Advanced:"+a.cvar;c.bounds={262,y,212,20};
            c.clip={10,80,465,viewportHeight};
            // These are the only shipped script settings with implemented
            // consumers in the current reconstruction. Registration alone does
            // not establish that an original rendering feature works.
            c.enabled=a.cvar=="name"||a.cvar=="cg_water"||a.cvar=="gl_posteffects";
            const char* current=EngFuncs::GetCvarString(a.cvar.c_str());
            c.enabled=c.enabled&&current&&*current;
            Value& v=ValueFor(a.cvar,a.initial);c.value=v.draft;c.number=Numeric(v.draft);
            Association association;association.cvar=a.cvar;
            if(a.type=="LIST") {
                c.kind=Kind::Combo;c.choices=a.labels;association.values=a.values;
                for(int k=0;k<int(a.values.size());++k)if(Numeric(a.values[k])==Numeric(v.draft))c.selected=k;
            } else if(a.type=="BOOL") {
                c.kind=Kind::Check;c.checked=Numeric(v.draft)!=0;c.bounds.x=15;c.bounds.w=445;c.text=a.prompt;
            } else {c.kind=Kind::Edit;c.minimum=a.minimum;c.maximum=a.maximum;}
            if(a.type!="BOOL"){Control label;label.id="Label:"+a.cvar;label.text=a.prompt;label.bounds={15,y,247,20};label.clip=c.clip;controls.push_back(label);}
            associations[c.id]=association;controls.push_back(c);
        }
    }
    void BuildPage() {
        associations.clear();controls.clear();focus=-1;
        const char* resources[]={"Keyboard","Mouse","Audio","Video","Voice"};
        if(page==5)AdvancedPage();else LoadControls(std::string("resource/OptionsSub")+resources[page]+".res");
        if(page==0){RefreshKeyList();if(Find("Defaults"))Find("Defaults")->enabled=!FileText("gfx/shell/kb_def.lst").empty();}
        if(page==1) {
            Bind("ReverseMouse","m_pitch",Kind::Check,0,1,true);Bind("MouseLook","$mlook",Kind::Check);
            Bind("MouseFilter","m_filter",Kind::Check);Bind("Joystick","joystick",Kind::Check);Bind("JoystickLook","$jlook",Kind::Check);
            Bind("Auto-Aim","sv_aim",Kind::Check);Bind("Slider","sensitivity",Kind::Slider,1,20);Bind("SensitivityLabel","sensitivity",Kind::Edit,0,1000);
        }
        if(page==2) {
            Bind("EAX","s_eax",Kind::Check);Bind("A3D","s_a3d",Kind::Check);
            // These native backend toggles have no implementation in the source
            // audio backend. A missing cvar must not become a fictitious option.
            for(const char* id:{"EAX","A3D"})if(Find(id)) {
                const char* current=EngFuncs::GetCvarString(id==std::string("EAX")?"s_eax":"s_a3d");
                Find(id)->enabled=current&&*current;
            }
            Bind("SFX Slider","volume",Kind::Slider,0,2);Bind("Suit Slider","suitvolume",Kind::Slider,0,2);Bind("MP3 Volume","mp3volume",Kind::Slider,0,1);
            Choices("Sound Quality","hisound",{"#GameUI_High","#GameUI_Low"},{"1","0"});
        }
        if(page==3){
            Bind("Brightness","gl_brightness",Kind::Slider,0,.3f);Bind("Gamma","gl_gamma",Kind::Slider,0,2);
            // Original postprocessing brightness/gamma are not equivalent to
            // Xash's texture gamma controls; their consumers are not restored.
            if(Find("Brightness"))Find("Brightness")->enabled=false;
            if(Find("Gamma"))Find("Gamma")->enabled=false;
            VideoChoices();
        }
        if(page==4) {
            Bind("VoiceReceive","voice_scale",Kind::Slider,0,1);Bind("voice_modenable","voice_enable",Kind::Check);
            // Original IVoiceTweak gain/boost/loopback meters have no source menu ABI yet.
            const char* unavailable[]={"#GameUI_MicrophoneVolume","MicBoost","TestMicrophone"};
            for(const char* id:unavailable)if(Find(id))Find(id)->enabled=false;
            if(Find("#GameUI_MicrophoneVolume")){Find("#GameUI_MicrophoneVolume")->kind=Kind::Slider;Find("#GameUI_MicrophoneVolume")->number=0;}
            if(Find("MicMeter"))Find("MicMeter")->visible=false;if(Find("MicMeter2"))Find("MicMeter2")->visible=false;
        }
        for(auto& c:controls){c.bounds.x+=8;c.bounds.y+=54;if(c.clip.w>0){c.clip.x+=8;c.clip.y+=54;}}
        Buttons();
    }
    void Apply() {
        auto sensitivity=values.find("sensitivity");
        if(sensitivity!=values.end()&&sensitivity->second.draft!=sensitivity->second.original) {
            char* end=nullptr;float value=std::strtof(sensitivity->second.draft.c_str(),&end);
            // Native permits sensitivity outside the slider's 1..20 range.
            // Reject malformed/nonfinite text without silently writing zero/NaN.
            if(!end||end==sensitivity->second.draft.c_str()||*end||!std::isfinite(value))
                sensitivity->second.draft=sensitivity->second.original;
        }
        for(const auto& option:advanced)if(option.type=="NUMBER") {
            auto it=values.find(option.cvar);if(it==values.end()||it->second.draft==it->second.original)continue;
            float value=Numeric(it->second.draft);
            if(!std::isfinite(value))value=Numeric(it->second.original);
            if(option.minimum!=-1||option.maximum!=-1)value=std::max(option.minimum,std::min(option.maximum,value));
            it->second.draft=Number(value);
        }
        for(auto& item:values) {
            Value& v=item.second;if(v.draft==v.original)continue;
            if(item.first=="$mlook"||item.first=="$jlook") {
                std::string cmd=(Numeric(v.draft)!=0?"+":"-")+item.first.substr(1)+"\n";
                EngFuncs::ClientCmd(false,cmd.c_str());
            } else EngFuncs::CvarSetString(item.first.c_str(),v.draft.c_str());
            v.original=v.draft;
        }
        for(int k=0;k<int(draftKeys.size());++k)if(draftKeys[k]!=originalKeys[k])EngFuncs::KEY_SetBinding(k,draftKeys[k].c_str());
        originalKeys=draftKeys;
        if(selectedFullscreen!=originalFullscreen)EngFuncs::CvarSetValue("fullscreen",float(selectedFullscreen));
        if(selectedMode>=0&&selectedMode!=originalMode) {
            EngFuncs::CvarSetValue("vid_mode",float(selectedMode));
            std::string cmd="vid_setmode "+std::to_string(selectedMode)+"\n";EngFuncs::ClientCmd(false,cmd.c_str());
        }
        originalMode=selectedMode;originalFullscreen=selectedFullscreen;
        EngFuncs::ClientCmd(false,"host_writeconfig\n");if(Find("Apply"))Find("Apply")->enabled=false;
    }
public:
    void Open() override {
        title="#GameUI_Options";bounds={(ViewWidth()-512)/2,(ViewHeight()-406)/2,512,406};
        page=0;advancedScroll=0;captureRow=-1;values.clear();status.clear();advanced=ReadAdvanced();ReadKeys();
        originalMode=selectedMode=int(EngFuncs::GetCvarFloat("vid_mode"));
        originalFullscreen=selectedFullscreen=EngFuncs::GetCvarFloat("fullscreen")!=0;
        int w=ViewWidth(),h=ViewHeight();const char* mode=EngFuncs::GetModeString(selectedMode);
        if(mode)sscanf(mode,"%dx%d",&w,&h);selectedAspect=(w*9==h*16||w*5==h*8)?1:0;
        BuildPage();
    }
    void Changed(Control& c) override {
        if(!c.enabled)return;
        if(c.id=="AdvancedScroll") {int value=int(c.number);if(value!=advancedScroll){advancedScroll=value;BuildPage();Focus("AdvancedScroll");}return;}
        if(c.id=="listpanel_keybindlist"){RefreshKeyList();return;}
        if(c.id=="Resolution"&&c.selected>=0&&c.selected<int(videoModes.size()))selectedMode=videoModes[c.selected];
        if(c.id=="Windowed")selectedFullscreen=c.selected?1:0;
        if(c.id=="AspectRatio"){selectedAspect=c.selected?1:0;VideoChoices();}
        auto found=associations.find(c.id);
        if(found!=associations.end()) {
            const Association& a=found->second;Value& v=ValueFor(a.cvar);
            if(c.kind==Kind::Check) {
                float magnitude=std::fabs(Numeric(v.original));if(a.negative&&magnitude==0)magnitude=.022f;
                v.draft=a.negative?Number(c.checked?-magnitude:magnitude):(c.checked?"1":"0");
            } else if(c.kind==Kind::Slider)v.draft=Number(c.number);
            else if(c.kind==Kind::Combo&&c.selected>=0&&c.selected<int(a.values.size()))v.draft=a.values[c.selected];
            else if(c.kind==Kind::Edit)v.draft=c.value;
            if(a.cvar=="sensitivity") {
                if(c.id=="Slider"&&Find("SensitivityLabel"))Find("SensitivityLabel")->value=v.draft;
                if(c.id=="SensitivityLabel"&&Find("Slider"))Find("Slider")->number=std::max(1.f,std::min(20.f,Numeric(v.draft)));
            }
        }
        if(Find("Apply"))Find("Apply")->enabled=Dirty();
    }
    void Command(const std::string& id) override {
        if(id.compare(0,3,"Tab")==0){page=std::atoi(id.c_str()+3);page=std::max(0,std::min(5,page));captureRow=-1;status.clear();BuildPage();return;}
        if(id=="OK"){Apply();Close(*this);return;}
        if(id=="Apply"){Apply();return;}
        if(id=="Close"||id=="Cancel"){captureRow=-1;Close(*this);return;}
        if(id=="ChangeKeyButton"||id=="ChangeKey") {
            Control* list=Find("listpanel_keybindlist");if(!list||list->selected<0||list->selected>=int(actions.size())||actions[list->selected].command=="blank")return;
            captureRow=list->selected;status=Localize("#GameUI_KeyButton")+": ...";Control c;c.id="Status";c.text=status;c.bounds={12,350,488,20};controls.push_back(c);return;
        }
        if(id=="ClearKeyButton"||id=="ClearKey") {
            Control* list=Find("listpanel_keybindlist");if(!list||list->selected<0||list->selected>=int(actions.size()))return;
            for(auto& key:draftKeys)if(key==actions[list->selected].command)key.clear();RefreshKeyList();
            if(Find("Apply"))Find("Apply")->enabled=Dirty();return;
        }
        if(id=="Defaults") {
            auto tokens=ScriptTokens(FileText("gfx/shell/kb_def.lst"));
            if(tokens.empty())return;
            std::fill(draftKeys.begin(),draftKeys.end(),std::string());
            for(size_t i=0;i+1<tokens.size();i+=2)for(int k=0;k<256;++k){const char* name=EngFuncs::KeynumToString(k);if(name&&_stricmp(name,tokens[i].c_str())==0)draftKeys[k]=tokens[i+1];}
            RefreshKeyList();if(Find("Apply"))Find("Apply")->enabled=Dirty();return;
        }
        Dialog::Command(id);
    }
    bool CaptureKey(int key,bool down) override {
        if(captureRow>=0) {
            if(!down)return true;
            if(key!=K_ESCAPE&&key>0&&key<256)draftKeys[key]=actions[captureRow].command;
            captureRow=-1;status.clear();int selected=Find("listpanel_keybindlist")?Find("listpanel_keybindlist")->selected:0;
            BuildPage();if(Find("listpanel_keybindlist"))Find("listpanel_keybindlist")->selected=selected;RefreshKeyList();return true;
        }
        return false;
    }
    bool Key(int key,bool down) override {
        if(page==5&&down&&(key==K_MWHEELUP||key==K_MWHEELDOWN)) {advancedScroll+=key==K_MWHEELUP?-24:24;BuildPage();return true;}
        return Dialog::Key(key,down);
    }
    void Paint() override {
        Control* list=page==0?Find("listpanel_keybindlist"):nullptr;
        // The scheme's list background may be translucent. Do not paint the
        // generic one-column list beneath this specialized sectioned table.
        if(list)list->visible=false;
        Dialog::Paint();
        if(!list)return;
        list->visible=true;
        Rect box=list->bounds;box.x+=bounds.x;box.y+=bounds.y;
        Fill(box,ThemeColor("ListBG",0xff202020));Border(box,true);
        const unsigned fg=ThemeColor("WindowFgColor",0xffd8ded3);
        const int rows=(box.h-2)/20;
        for(int row=0;row<rows;++row) {
            int index=list->scroll+row;if(index>=int(actions.size()))break;
            const KeyAction& action=actions[index];
            Rect r={box.x+2,box.y+1+row*20,box.w-4,20};
            const bool group=action.command=="blank";
            if(group)Fill(r,ThemeColor("BgColor",0xff404040));
            else if(index==list->selected)Fill(r,ThemeColor("SelectionBG",0xff505050));
            // Native SectionedListPanel creates Action/Key/AltKey at 226/128/128.
            Text({r.x+4,r.y,222,r.h},Localize(action.label),fg);
            std::string keys[2];int count=0;
            if(group){keys[0]=Localize("#GameUI_KeyButton");keys[1]=Localize("#GameUI_Alternate");}
            else for(int k=0;k<256&&count<2;++k)if(draftKeys[k]==action.command){
                const char* name=EngFuncs::KeynumToString(k);if(name)keys[count++]=name;
            }
            Text({r.x+230,r.y,124,r.h},keys[0],fg);
            Text({r.x+358,r.y,std::max(0,r.w-358),r.h},keys[1],fg);
        }
    }
};
OptionsDialog options;
}
void OpenOptions(){if(!OpenAfter2DMenu("cof_vgui_options"))Show(options);}
} }
