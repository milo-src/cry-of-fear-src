// Shared next-launch preference for the separate x86 GL and x64 Vulkan runtimes.
#include "renderer_settings.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

namespace cof { namespace vgui {
namespace {
const char* SettingsPath() {
    const char* path=std::getenv("COF_RENDERER_SETTINGS");
    return path&&*path?path:"../runtime/cof_renderer.cfg";
}
bool Flag(const char* name) { const char* value=std::getenv(name);return value&&std::strcmp(value,"1")==0; }
}
RendererSettings ReadRendererSettings() {
    RendererSettings result;int enabled=0,profile=1;char tail=0;
    FILE* file=std::fopen(SettingsPath(),"rb");if(!file)return result;
    int fields=std::fscanf(file,"COF_RENDERER_V1 %d %d %c",&enabled,&profile,&tail);std::fclose(file);
    if(fields==2&&enabled>=0&&enabled<=1&&profile>=0&&profile<=2){result.enabled=enabled;result.profile=profile;}
    return result;
}
bool WriteRendererSettings(const RendererSettings& settings) {
    if(settings.enabled<0||settings.enabled>1||settings.profile<0||settings.profile>2)return false;
    std::string temporary=std::string(SettingsPath())+".tmp";
    FILE* file=std::fopen(temporary.c_str(),"wb");if(!file)return false;
    bool ok=std::fprintf(file,"COF_RENDERER_V1 %d %d\n",settings.enabled,settings.profile)>0;
    if(std::fclose(file)!=0)ok=false;
    if(ok)ok=MoveFileExA(temporary.c_str(),SettingsPath(),MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH)!=0;
    if(!ok)std::remove(temporary.c_str());
    return ok;
}
bool RTXAvailable(){return Flag("COF_RTX_AVAILABLE");}
bool RTXActive(){return Flag("COF_RTX_ACTIVE");}
} }
