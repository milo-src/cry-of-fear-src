// Original contracts: GameUI.dll 1004912d/10049d70/10049ffc/1004a34d.
// Source-owned controls and engine bridge; see analysis/ui/console.md.
#include "BaseMenu.h"
#include "ui.h"
#include "keydefs.h"
#include <algorithm>
#include <cctype>
#include <deque>

namespace cof { namespace vgui {
namespace {
std::string Fold(std::string value) {
    for (char& c : value) c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    return value;
}
std::string TrimEnd(std::string value) {
    while (!value.empty() && value.back() == ' ') value.pop_back();
    return value;
}
std::string Utf8Prefix(const std::string& value,size_t limit) {
    if (value.size()<=limit) return value;
    size_t end=limit;
    while (end>0 && (static_cast<unsigned char>(value[end])&0xc0)==0x80) --end;
    return value.substr(0,end);
}
class ConsoleDialog : public Dialog {
    std::deque<std::string> lines;
    std::string pending;
    std::vector<std::string> history, matches;
    std::vector<std::string> wrapped;
    int wrappedWidth=-1;
    bool logDirty=true;
    bool scrollDragging=false;
    int scrollGrab=0, visibleRows=0;
    bool cycling=false, matchesHistory=false;
    int nextMatch=0, scrollback=0;
    bool initialized=false;
public:
    ConsoleDialog() {
        title = "Console"; resizable = true;
        Control entry; entry.id="ConsoleEntry"; entry.kind=Kind::Edit;
        controls.push_back(entry);
        Control submit; submit.id="ConsoleSubmit"; submit.kind=Kind::Button; submit.text="Submit";
        controls.push_back(submit);
        Control completion; completion.id="CompletionList"; completion.kind=Kind::List;
        completion.visible=false; controls.push_back(completion);
    }
    void Open() override {
        if (!initialized) {
            bounds={40,40,std::min(ViewWidth()-80,560),std::min(ViewHeight()-80,400)};
            initialized=true;
        }
        title=Localize("GameUI_Console");
        Find("ConsoleSubmit")->text=Localize("GameUI_Submit");
        cycling=false;
        Focus("ConsoleEntry");
    }
    void Closed() override { Find("CompletionList")->visible=false; scrollDragging=false; }
    void Clear() {
        lines.clear(); pending.clear(); wrapped.clear();
        scrollback=visibleRows=0; scrollDragging=false; logDirty=true;
    }
    Rect ScrollTrack() const { return {bounds.x+bounds.w-18,bounds.y+39,7,bounds.h-82}; }
    int ScrollThumb() const {
        const Rect track=ScrollTrack();
        return wrapped.empty() ? track.h : std::min(track.h,std::max(12,track.h*visibleRows/static_cast<int>(wrapped.size())));
    }
    bool Pointer(int x,int y,int key,bool down) override {
        const Rect track=ScrollTrack();
        const int travel=track.h-ScrollThumb();
        const int total=std::max(0,static_cast<int>(wrapped.size())-visibleRows);
        if (key==K_MOUSE1 && !down && scrollDragging) { scrollDragging=false; return true; }
        if (key==K_MOUSE1 && down && track.Contains(x,y)) {
            if (travel<=0 || total<=0) return true;
            const int top=track.y+travel-travel*scrollback/total;
            scrollGrab=y>=top && y<top+ScrollThumb() ? y-top : ScrollThumb()/2;
            scrollDragging=true;
        }
        if (scrollDragging && (key==0 || (key==K_MOUSE1 && down))) {
            if (travel>0 && total>0) {
                const int position=std::max(0,std::min(travel,y-track.y-scrollGrab));
                scrollback=total-position*total/travel;
            }
            return true;
        }
        // Original ConsoleHistory 1004aa40 redirects keyboard focus to Entry.
        // Consume the click before the generic host turns a non-control into focus=-1.
        if (key==K_MOUSE1 && down && Rect{bounds.x+8,bounds.y+36,bounds.w-16,bounds.h-76}.Contains(x,y)) {
            Find("CompletionList")->visible=false;
            Focus("ConsoleEntry");
            return true;
        }
        return false;
    }
    void Append(const char* text) {
        if (!text) return;
        logDirty=true;
        for (const unsigned char* p=reinterpret_cast<const unsigned char*>(text); *p; ++p) {
            // Split only before a new codepoint, including a character continued
            // across separate engine print callbacks.
            if (pending.size()>=4100 ||
                (pending.size()>=4096 && (*p&0xc0)!=0x80 && *p!='\n' && *p!='\r')) {
                lines.push_back(pending); pending.clear();
            }
            if (*p=='\n') { lines.push_back(pending); pending.clear(); }
            else if (*p!='\r') pending.push_back(static_cast<char>(*p));
            while (lines.size()>4096) lines.pop_front();
        }
    }
    void Rebuild() {
        const std::string prefix=Find("ConsoleEntry")->value;
        matches.clear(); matchesHistory=prefix.empty(); nextMatch=0; cycling=false;
        if (matchesHistory) matches=history;
        else if (prefix.find(' ')==std::string::npos) {
            char result[512];
            for (int index=0; index<4096 && Complete(prefix,index,result,sizeof(result)); ++index)
                matches.push_back(result);
        }
        Control* popup=Find("CompletionList");
        popup->choices.clear(); popup->scroll=popup->selected=0;
        for (size_t i=0; i<matches.size() && i<7; ++i)
            popup->choices.push_back(i==6 ? "..." : matches[i]);
        popup->visible=!matches.empty() && Visible(*this);
    }
    void Choose(int index) {
        if (index<0 || index>=static_cast<int>(matches.size())) return;
        Control* entry=Find("ConsoleEntry");
        std::string value=matches[index];
        if (!matchesHistory) value=value.substr(0,value.find(' '));
        entry->value=Utf8Prefix(value,254)+" ";
        entry->cursor=static_cast<int>(entry->value.size());
        Focus("ConsoleEntry");
    }
    void Cycle(bool reverse) {
        if (!cycling) { Rebuild(); cycling=true; }
        if (matches.empty()) return;
        if (reverse) nextMatch-=2;
        if (nextMatch<0) nextMatch=static_cast<int>(matches.size())-1;
        if (nextMatch>=static_cast<int>(matches.size())) nextMatch=0;
        Choose(nextMatch++);
    }
    void Changed(Control& control) override {
        if (control.id=="ConsoleEntry") {
            control.value=Utf8Prefix(control.value,255);
            control.cursor=std::min(control.cursor,static_cast<int>(control.value.size()));
            while (control.cursor>0 && control.cursor<static_cast<int>(control.value.size()) &&
                (static_cast<unsigned char>(control.value[control.cursor])&0xc0)==0x80) --control.cursor;
            if (!cycling && !matchesHistory && !matches.empty() && !control.value.empty() && control.value.back()==' ')
                Choose(0);
            Rebuild();
        } else if (control.id=="CompletionList" && control.selected<6) {
            Choose(control.selected); control.visible=false;
        }
    }
    void Command(const std::string& id) override {
        if (id=="ConsoleSubmit") Submit();
        else if (id=="CompletionList") Changed(*Find(id));
        else Dialog::Command(id);
    }
    void Submit() {
        Control* entry=Find("ConsoleEntry");
        const std::string command=Utf8Prefix(entry->value,255);
        // The bridge queues in Xash's normal command buffer. It is not an OS shell.
        EngFuncs::ClientCmd(false,(command+"\n").c_str());
        Append("] "); Append(command.c_str()); Append("\n");
        entry->value.clear(); entry->cursor=0; scrollback=0;
        const std::string saved=TrimEnd(command);
        if (!saved.empty()) {
            const std::string folded=Fold(saved);
            history.erase(std::remove_if(history.begin(),history.end(),[&](const std::string& old) {
                return Fold(old)==folded;
            }),history.end());
            while (history.size()>=100) history.erase(history.begin());
            history.push_back(saved);
        }
        Rebuild(); Find("CompletionList")->visible=false; Focus("ConsoleEntry");
    }
    bool Key(int key,bool down) override {
        if (down) {
            if (key==K_ESCAPE || key=='`' || key=='~') { Close(*this); return true; }
            if (key==K_ENTER || key==K_KP_ENTER) { Submit(); return true; }
            const bool entryFocus=focus>=0 && focus<static_cast<int>(controls.size()) && controls[focus].id=="ConsoleEntry";
            if (entryFocus && (key==K_TAB || key==K_UPARROW || key==K_DOWNARROW)) {
                Cycle(key==K_UPARROW || (key==K_TAB && EngFuncs::KEY_IsDown(K_SHIFT))); return true;
            }
            if (key==K_PGUP || key==K_MWHEELUP) { scrollback+=key==K_PGUP ? 12 : 3; return true; }
            if (key==K_PGDN || key==K_MWHEELDOWN) { scrollback=std::max(0,scrollback-(key==K_PGDN ? 12 : 3)); return true; }
        }
        return Dialog::Key(key,down);
    }
    void Character(int codepoint) override {
        if (codepoint=='`' || codepoint=='~') return;
        Dialog::Character(codepoint);
    }
    void Paint() override {
        const int w=bounds.w,h=bounds.h;
        Find("ConsoleEntry")->bounds={8,h-32,w-88,24};
        Find("ConsoleSubmit")->bounds={w-72,h-32,64,24};
        Control* popup=Find("CompletionList");
        int popupWidth=120;
        for (const std::string& text:popup->choices) popupWidth=std::max(popupWidth,TextWidth(text)+20);
        popup->bounds={8,h,std::min(w-16,popupWidth),static_cast<int>(popup->choices.size())*20+4};
        Dialog::Paint();
        const Rect area={bounds.x+8,bounds.y+36,w-16,h-76};
        Fill(area,ThemeColor("WindowBG",0x96282828)); Border(area,true);
        const int available=std::max(1,area.w-16), rowHeight=16;
        if (logDirty || wrappedWidth!=available) {
        const int previousRows=static_cast<int>(wrapped.size());
        const bool sameWidth=wrappedWidth==available;
        wrapped.clear();
        auto wrap=[&](const std::string& line) {
            if (line.empty()) { wrapped.push_back(""); return; }
            size_t start=0;
            while (start<line.size()) {
                size_t end=start,accepted=start;
                while (end<line.size()) {
                    ++end;
                    while (end<line.size() && (static_cast<unsigned char>(line[end])&0xc0)==0x80) ++end;
                    if (TextWidth(line.substr(start,end-start))>available && accepted>start) break;
                    accepted=end;
                    if (TextWidth(line.substr(start,end-start))>available) break;
                }
                wrapped.push_back(line.substr(start,accepted-start)); start=accepted;
            }
        };
        for (const std::string& line:lines) wrap(line);
        if (!pending.empty()) wrap(pending);
        // Preserve the visible history when new output arrives while scrolled up.
        if (scrollback>0 && sameWidth)
            scrollback+=std::max(0,static_cast<int>(wrapped.size())-previousRows);
        wrappedWidth=available; logDirty=false;
        }
        const std::vector<std::string>& rows=wrapped;
        const int count=std::max(0,(area.h-8)/rowHeight);
        visibleRows=count;
        scrollback=std::min(scrollback,std::max(0,static_cast<int>(rows.size())-count));
        const int begin=std::max(0,static_cast<int>(rows.size())-count-scrollback);
        for (int i=0;i<count && begin+i<static_cast<int>(rows.size());++i)
            Text({area.x+4,area.y+4+i*rowHeight,available,rowHeight},rows[begin+i],
                ThemeColor("ControlText",0xc85a5a5a));
        // A visible scrollbar communicates history position even when no wheel is used.
        Rect track=ScrollTrack();
        Fill(track,ThemeColor("ControlDarkBG",0xc8282828));
        if (!rows.empty() && track.h>0) {
            const int thumb=ScrollThumb();
            const int travel=track.h-thumb;
            const int total=std::max(1,static_cast<int>(rows.size())-count);
            Fill({track.x,track.y+travel-travel*scrollback/total,track.w,thumb},ThemeColor("BorderDark",0xff707070));
        }
    }
};
ConsoleDialog& Console() { static ConsoleDialog dialog; return dialog; }
}
void ToggleConsole() { ConsoleDialog& dialog=Console(); if (Visible(dialog)) Close(dialog); else if(!OpenAfter2DMenu("cof_vgui_console")) Show(dialog); }
void ConsolePrint(const char* text) { Console().Append(text); }
void ConsoleClear() { Console().Clear(); }
} }
