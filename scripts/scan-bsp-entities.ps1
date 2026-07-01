[CmdletBinding()]
param(
    [string]$GameRoot = "$env:USERPROFILE\Desktop\cof_xash\cryoffear",

    [string]$Map = "",

    [switch]$FailOnUnknown
)

$ErrorActionPreference = "Stop"

. "$PSScriptRoot\_common.ps1"

$repoRoot = Get-RepoRoot
$dllSourceRoot = Join-Path $repoRoot "src\cof\dlls"
$gameRootFull = Convert-ToFullPath $GameRoot

function Get-ImplementedEntityClasses {
    $classes = [System.Collections.Generic.HashSet[string]]::new([System.StringComparer]::OrdinalIgnoreCase)
    $files = Get-ChildItem -Path $dllSourceRoot -Recurse -Include *.cpp,*.h -File -ErrorAction SilentlyContinue

    foreach ($file in $files) {
        $text = Get-Content -LiteralPath $file.FullName -Raw
        foreach ($match in [regex]::Matches($text, 'LINK_ENTITY_TO_CLASS\s*\(\s*([A-Za-z0-9_]+)\s*,')) {
            $classes.Add($match.Groups[1].Value) | Out-Null
        }
    }

    return $classes
}

function Get-BspEntityText {
    param([Parameter(Mandatory = $true)][string]$Path)

    $stream = [System.IO.File]::OpenRead($Path)
    try {
        $reader = [System.IO.BinaryReader]::new($stream)
        $version = $reader.ReadInt32()

        if ($version -ne 30) {
            Write-Warning "Unexpected BSP version $version in $Path"
        }

        $entityOffset = $reader.ReadInt32()
        $entityLength = $reader.ReadInt32()

        if ($entityOffset -lt 0 -or $entityLength -lt 0 -or ($entityOffset + $entityLength) -gt $stream.Length) {
            throw "Invalid entity lump in $Path"
        }

        $stream.Position = $entityOffset
        $bytes = $reader.ReadBytes($entityLength)
        return [System.Text.Encoding]::ASCII.GetString($bytes)
    }
    finally {
        $stream.Dispose()
    }
}

function Get-BspClassNames {
    param([Parameter(Mandatory = $true)][string]$Path)

    $text = Get-BspEntityText -Path $Path
    $classes = [System.Collections.Generic.HashSet[string]]::new([System.StringComparer]::OrdinalIgnoreCase)

    foreach ($match in [regex]::Matches($text, '"classname"\s+"([^"]+)"')) {
        $classes.Add($match.Groups[1].Value) | Out-Null
    }

    return $classes
}

if ($Map) {
    if ([System.IO.Path]::IsPathRooted($Map)) {
        $mapFiles = @(Get-Item -LiteralPath $Map)
    }
    else {
        $candidate = Join-Path (Join-Path $gameRootFull "maps") $Map
        if (-not $candidate.EndsWith(".bsp", [System.StringComparison]::OrdinalIgnoreCase)) {
            $candidate += ".bsp"
        }
        $mapFiles = @(Get-Item -LiteralPath $candidate)
    }
}
else {
    $mapsDir = Join-Path $gameRootFull "maps"
    if (-not (Test-Path -LiteralPath $mapsDir)) {
        throw "Maps directory is missing: $mapsDir"
    }
    $mapFiles = @(Get-ChildItem -Path $mapsDir -Filter "*.bsp" -File)
}

$implemented = Get-ImplementedEntityClasses
$unknownByMap = [ordered]@{}

foreach ($mapFile in $mapFiles) {
    $classes = Get-BspClassNames -Path $mapFile.FullName
    $unknown = @($classes | Where-Object { -not $implemented.Contains($_) } | Sort-Object)

    if ($unknown.Count -gt 0) {
        $unknownByMap[$mapFile.Name] = $unknown
    }
}

Write-Host "Implemented entity classes: $($implemented.Count)"
Write-Host "Scanned BSP files: $($mapFiles.Count)"

if ($unknownByMap.Count -eq 0) {
    Write-Host "No unknown BSP classnames found."
    exit 0
}

Write-Host ""
Write-Host "Unknown BSP classnames:"
foreach ($entry in $unknownByMap.GetEnumerator()) {
    Write-Host "  $($entry.Key)"
    foreach ($className in $entry.Value) {
        Write-Host "    $className"
    }
}

if ($FailOnUnknown) {
    exit 1
}
