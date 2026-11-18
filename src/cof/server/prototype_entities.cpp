// Runtime prototype extensions. These are explicitly new implementation choices.
#include "extdll.h"
#include "util.h"
#include "cbase.h"

// Evidence-guided CoF doors are implemented separately in doors.cpp.
// Export an observable build identity without loading any original DLL.
extern "C" DLLEXPORT const char* CofReconstructionBuild() {
    return "cof-source-prototype-3-keys";
}
