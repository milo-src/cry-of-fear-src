#pragma once
namespace cof { namespace vgui {
struct RendererSettings {
    int enabled=0, profile=1;
    int upscaler=-1; // -1 auto, 0 native, 1 FSR, 2 DLSS
    int quality=3;   // 1 native AA, 2 quality, 3 balanced, 4 performance, 5 ultra performance
    bool operator!=(const RendererSettings& b) const {
        return enabled!=b.enabled||profile!=b.profile||upscaler!=b.upscaler||quality!=b.quality;
    }
};
RendererSettings ReadRendererSettings();
bool WriteRendererSettings(const RendererSettings& settings);
bool RTXAvailable();
bool RTXActive();
} }
