#pragma once
namespace cof { namespace vgui {
struct RendererSettings { int enabled=0, profile=1; };
RendererSettings ReadRendererSettings();
bool WriteRendererSettings(const RendererSettings& settings);
bool RTXAvailable();
bool RTXActive();
} }
