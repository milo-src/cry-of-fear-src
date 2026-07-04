Set-StrictMode -Version 2.0

$commonLibRoot = Join-Path $PSScriptRoot "lib"

. (Join-Path $commonLibRoot "core.ps1")
. (Join-Path $commonLibRoot "build-support.ps1")
. (Join-Path $commonLibRoot "android-build.ps1")
. (Join-Path $commonLibRoot "copy-runtime.ps1")
. (Join-Path $commonLibRoot "text-config.ps1")
. (Join-Path $commonLibRoot "runtime-repair.ps1")
