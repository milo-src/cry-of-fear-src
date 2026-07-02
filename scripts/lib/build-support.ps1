function Convert-CmakeConfigurationToWafBuildType {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Configuration
    )

    if ($Configuration -eq "Debug") {
        return "debug"
    }

    return "release"
}

function Get-OpenVguiRuntimeLibrary {
    param(
        [Parameter(Mandatory = $true)]
        [string]$BuildDir,

        [string]$Configuration = "Release"
    )

    $BuildDir = Convert-ToFullPath $BuildDir

    if (Test-RunningOnWindows) {
        $names = @("vgui.dll")
    }
    elseif ([System.Runtime.InteropServices.RuntimeInformation]::IsOSPlatform(
        [System.Runtime.InteropServices.OSPlatform]::OSX
    )) {
        $names = @("libvgui.dylib", "vgui.dylib")
    }
    else {
        $names = @("libvgui.so", "vgui.so")
    }

    foreach ($name in $names) {
        foreach ($root in @((Join-Path $BuildDir $Configuration), $BuildDir)) {
            $candidate = Join-Path $root $name
            if (Test-Path -LiteralPath $candidate) {
                return $candidate
            }
        }
    }

    return ""
}

function New-OpenVguiWafCompatDir {
    param(
        [Parameter(Mandatory = $true)]
        [string]$OpenVGUIRoot,

        [Parameter(Mandatory = $true)]
        [string]$OpenVGUIBuildDir,

        [string]$Configuration = "Release"
    )

    $OpenVGUIRoot = Convert-ToFullPath $OpenVGUIRoot
    $OpenVGUIBuildDir = Convert-ToFullPath $OpenVGUIBuildDir

    $sourceIncludeDir = Join-Path $OpenVGUIRoot "include"
    if (-not (Test-Path -LiteralPath (Join-Path $sourceIncludeDir "VGUI.h"))) {
        throw "OPENVGUI_ROOT does not contain include\VGUI.h: $OpenVGUIRoot"
    }

    $compatRoot = Join-Path $OpenVGUIBuildDir "waf-vgui-dev"
    $compatIncludeDir = Join-Path $compatRoot "include"
    $compatLibDir = Join-Path $compatRoot "lib"

    New-Item -ItemType Directory -Force -Path $compatIncludeDir | Out-Null
    Copy-Item -Path (Join-Path $sourceIncludeDir "*") -Destination $compatIncludeDir -Recurse -Force

    if (Test-RunningOnWindows) {
        $compatLibDir = Join-Path $compatLibDir "win32_vc6"
        New-Item -ItemType Directory -Force -Path $compatLibDir | Out-Null

        foreach ($file in @("vgui.dll", "vgui.lib")) {
            $source = Join-Path (Join-Path $OpenVGUIBuildDir $Configuration) $file
            if (-not (Test-Path -LiteralPath $source)) {
                $source = Join-Path $OpenVGUIBuildDir $file
            }

            Copy-RequiredFile -Source $source -Destination (Join-Path $compatLibDir $file)
        }
    }
    elseif ([System.Runtime.InteropServices.RuntimeInformation]::IsOSPlatform(
        [System.Runtime.InteropServices.OSPlatform]::OSX
    )) {
        New-Item -ItemType Directory -Force -Path $compatLibDir | Out-Null
        $source = Get-OpenVguiRuntimeLibrary -BuildDir $OpenVGUIBuildDir -Configuration $Configuration
        Copy-RequiredFile -Source $source -Destination (Join-Path $compatLibDir "vgui.dylib")
    }
    else {
        New-Item -ItemType Directory -Force -Path $compatLibDir | Out-Null
        $source = Get-OpenVguiRuntimeLibrary -BuildDir $OpenVGUIBuildDir -Configuration $Configuration
        Copy-RequiredFile -Source $source -Destination (Join-Path $compatLibDir "vgui.so")
    }

    return $compatRoot
}
