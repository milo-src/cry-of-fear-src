// Partial, analyst-written semantic reconstruction, NOT the original source.
// Target hl.dll SHA-256: 751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641
// Evidence and exact instruction ranges: analysis/abi/capture.json and *.asm.
// Storage identifiers and types below are analyst choices. No runnable DLL yet.
#include <cstdint>
#include <cstring>

namespace cof::recovered {
constexpr int interface_version = 140;
struct DllFunctionTable32 { std::uint32_t slots[50]; };
struct EngineFunctionTable32 { std::uint32_t slots[144]; };
static_assert(sizeof(DllFunctionTable32) == 200);
static_assert(sizeof(EngineFunctionTable32) == 576);

// Original preferred VAs; callback bodies and full ABI types remain to recover.
extern DllFunctionTable32 callbacks;       // 0x102119f8
extern EngineFunctionTable32 engine;      // 0x10222f48
extern std::uint32_t globals_address;     // 0x10223188

// 0x100183d0, x86 cdecl.
int GetEntityAPI(DllFunctionTable32* destination, int version) {
    if (destination == nullptr || version != interface_version)
        return 0;
    std::memcpy(destination, &callbacks, sizeof(callbacks));
    return 1;
}

// 0x10018400, x86 cdecl. A valid version pointer is required by the original.
// In particular, a null destination still writes 140 through version.
int GetEntityAPI2(DllFunctionTable32* destination, int* version) {
    if (destination == nullptr || *version != interface_version) {
        *version = interface_version;
        return 0;
    }
    std::memcpy(destination, &callbacks, sizeof(callbacks));
    return 1;
}

// 0x100b4aa0, original x86 stdcall (ret 8). This namespaced semantic model
// intentionally does not expose a native DLL ABI until x86 wiring is restored.
void GiveFnptrsToDll(const EngineFunctionTable32* source, std::uint32_t globals) {
    std::memcpy(&engine, source, sizeof(engine));
    globals_address = globals;
}
} // namespace cof::recovered
