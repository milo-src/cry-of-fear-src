function Get-RepoRoot {
    return (Resolve-Path (Join-Path $PSScriptRoot "..\..")).Path
}

function Convert-ToFullPath {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path
    )

    return [System.IO.Path]::GetFullPath($Path)
}

function Test-RunningOnWindows {
    if ($PSVersionTable.PSEdition -eq "Desktop") {
        return $true
    }

    return [System.Runtime.InteropServices.RuntimeInformation]::IsOSPlatform(
        [System.Runtime.InteropServices.OSPlatform]::Windows
    )
}

function Invoke-Checked {
    param(
        [Parameter(Mandatory = $true)]
        [string]$FilePath,

        [string[]]$ArgumentList = @(),

        [string]$WorkingDirectory = ""
    )

    Write-Host ">> $FilePath $($ArgumentList -join ' ')"

    if ($WorkingDirectory) {
        Push-Location $WorkingDirectory
    }

    try {
        & $FilePath @ArgumentList

        if ($LASTEXITCODE -ne 0) {
            throw "Command failed with exit code ${LASTEXITCODE}: $FilePath $($ArgumentList -join ' ')"
        }
    }
    finally {
        if ($WorkingDirectory) {
            Pop-Location
        }
    }
}

function Find-LocalSdl2 {
    $repoRoot = Get-RepoRoot
    $depsDir = Join-Path $repoRoot "deps"

    if (-not (Test-Path $depsDir)) {
        return ""
    }

    $candidate = Get-ChildItem -Path $depsDir -Directory -Recurse -Filter "SDL2-*" -ErrorAction SilentlyContinue |
        Where-Object {
            (Test-Path (Join-Path $_.FullName "include\SDL.h")) -and
            ((Test-Path (Join-Path $_.FullName "lib\x86\SDL2.lib")) -or
             (Test-Path (Join-Path $_.FullName "lib\x64\SDL2.lib")))
        } |
        Select-Object -First 1

    if ($candidate) {
        return $candidate.FullName
    }

    return ""
}

