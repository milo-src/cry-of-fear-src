// Runtime prototype extensions. These are explicitly new implementation choices.
#include "extdll.h"
#include "util.h"
#include "cbase.h"

// The available maps contain info_player_start already. CoF-specific entity
// behavior is deliberately left unresolved until recovered from evidence.
// Export an observable build identity without loading any original DLL.
extern "C" DLLEXPORT const char* CofReconstructionBuild() {
    return "cof-source-prototype-1";
}
