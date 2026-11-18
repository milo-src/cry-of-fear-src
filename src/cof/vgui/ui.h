#pragma once
#include <string>
#include <vector>
#include "resource.h"

// Source-owned VGUI-style panel/control implementation. Platform drawing and
// input are supplied by the engine's menu host; no original VGUI DLL is used.
namespace cof { namespace vgui {
struct Rect { int x,y,w,h; bool Contains(int px,int py) const { return px>=x && py>=y && px<x+w && py<y+h; } };
enum class Kind { Label, Button, Check, Slider, Combo, Edit, List, Image, ScrollBar };
struct Control {
    std::string id, text, value, leftText, rightText;
    Rect bounds = {0,0,80,24};
    Rect clip = {0,0,0,0}; // Optional parent viewport, in dialog coordinates.
    Kind kind = Kind::Label;
    bool visible=true, enabled=true, checked=false, password=false, consoleFont=false;
    float number=0, minimum=0, maximum=1;
    int selected=0, scroll=0, tab=0, cursor=0, pageSize=1, step=1;
    std::vector<std::string> choices;
};
class Dialog {
public:
    virtual ~Dialog() {}
    std::string title;
    Rect bounds = {40,40,512,406};
    std::vector<Control> controls;
    int focus=-1;
    bool resizable=false;
    virtual void Open() {}
    virtual void Closed() {}
    virtual void Paint();
    virtual void Command(const std::string& id);
    virtual void Changed(Control&) {}
    virtual bool Key(int key, bool down);
    virtual bool CaptureKey(int key, bool down) { return false; }
    virtual bool Pointer(int x, int y, int key, bool down) { return false; }
    virtual void Character(int codepoint);
    Control* Find(const std::string& id);
    void LoadControls(const std::string& resource);
    void Focus(const std::string& id);
};

bool LoadResource(const std::string& path, KeyValue& result);
std::string Localize(const std::string& token);
void Show(Dialog& dialog);
bool OpenAfter2DMenu(const char* command);
void Close(Dialog& dialog);
bool Visible(const Dialog& dialog);
Dialog* ActiveDialog();
int ViewWidth();
int ViewHeight();
void Fill(Rect rect, unsigned color);
void Border(Rect rect, bool sunken=false);
void SchemeBorder(Rect rect, const char* name);
void Arrow(Rect rect, bool down, unsigned color, bool menu=false);
void Text(Rect rect, const std::string& text, unsigned color=0xffd8ded3, bool console=false, bool centered=false);
int TextWidth(const std::string& text, bool console=false);
int Complete(const std::string& prefix, int index, char* output, int capacity);
unsigned ThemeColor(const char* key, unsigned fallback);
void PaintControl(const Control& c, int x, int y, bool focused, bool hovered, bool pressed);
void OpenOptions();
void ToggleConsole();
void ConsolePrint(const char* text);
void ConsoleClear();
void ConsoleOutputTestFrame();
void Register();
void TestFrame();
} }
