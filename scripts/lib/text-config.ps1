function Convert-TextFileToUtf8 {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path
    )

    if (-not (Test-Path -LiteralPath $Path)) {
        throw "Cannot find localization file: $Path"
    }

    $bytes = [System.IO.File]::ReadAllBytes($Path)

    $strictUtf8 = [System.Text.UTF8Encoding]::new($false, $true)
    $writeFile = $true

    if ($bytes.Length -ge 2 -and $bytes[0] -eq 0xFF -and $bytes[1] -eq 0xFE) {
        $text = [System.Text.Encoding]::Unicode.GetString($bytes, 2, $bytes.Length - 2)
    }
    elseif ($bytes.Length -ge 2 -and $bytes[0] -eq 0xFE -and $bytes[1] -eq 0xFF) {
        $text = [System.Text.Encoding]::BigEndianUnicode.GetString($bytes, 2, $bytes.Length - 2)
    }
    elseif ($bytes.Length -ge 3 -and $bytes[0] -eq 0xEF -and $bytes[1] -eq 0xBB -and $bytes[2] -eq 0xBF) {
        $text = [System.Text.Encoding]::UTF8.GetString($bytes, 3, $bytes.Length - 3)
    }
    else {
        try {
            $null = $strictUtf8.GetString($bytes)
            $writeFile = $false
        }
        catch {
            $text = [System.Text.Encoding]::GetEncoding(1251).GetString($bytes)
        }
    }

    if ($writeFile) {
        $utf8NoBom = [System.Text.UTF8Encoding]::new($false)
        [System.IO.File]::WriteAllBytes($Path, $utf8NoBom.GetBytes($text))
        Write-Host "Converted localization to UTF-8: $Path"
    }
}

function Set-CofConfigCvar {
    param(
        [Parameter(Mandatory = $true)]
        [string]$ConfigPath,

        [Parameter(Mandatory = $true)]
        [string]$Name,

        [Parameter(Mandatory = $true)]
        [string]$Value
    )

    $line = "$Name `"$Value`""
    $strictUtf8 = [System.Text.UTF8Encoding]::new($false, $true)
    $utf8NoBom = [System.Text.UTF8Encoding]::new($false)

    if (-not (Test-Path -LiteralPath $ConfigPath)) {
        [System.IO.File]::WriteAllText($ConfigPath, $line + [Environment]::NewLine, $utf8NoBom)
        Write-Host "Created config cvar: $line"
        return
    }

    $bytes = [System.IO.File]::ReadAllBytes($ConfigPath)
    if ($bytes.Length -ge 2 -and $bytes[0] -eq 0xFF -and $bytes[1] -eq 0xFE) {
        $text = [System.Text.Encoding]::Unicode.GetString($bytes, 2, $bytes.Length - 2)
    }
    elseif ($bytes.Length -ge 2 -and $bytes[0] -eq 0xFE -and $bytes[1] -eq 0xFF) {
        $text = [System.Text.Encoding]::BigEndianUnicode.GetString($bytes, 2, $bytes.Length - 2)
    }
    elseif ($bytes.Length -ge 3 -and $bytes[0] -eq 0xEF -and $bytes[1] -eq 0xBB -and $bytes[2] -eq 0xBF) {
        $text = [System.Text.Encoding]::UTF8.GetString($bytes, 3, $bytes.Length - 3)
    }
    else {
        try {
            $text = $strictUtf8.GetString($bytes)
        }
        catch {
            $text = [System.Text.Encoding]::GetEncoding(1251).GetString($bytes)
        }
    }

    $pattern = "(?m)^\s*" + [System.Text.RegularExpressions.Regex]::Escape($Name) + "\s+.*$"

    if ([System.Text.RegularExpressions.Regex]::IsMatch($text, $pattern)) {
        $updated = [System.Text.RegularExpressions.Regex]::Replace($text, $pattern, $line)
    }
    else {
        $ending = if ($text.EndsWith("`r`n") -or $text.EndsWith("`n")) { "" } else { [Environment]::NewLine }
        $updated = $text + $ending + $line + [Environment]::NewLine
    }

    if ($updated -ne $text) {
        [System.IO.File]::WriteAllText($ConfigPath, $updated, $utf8NoBom)
        Write-Host "Set config cvar: $line"
    }
}

function Set-CofConfigBind {
    param(
        [Parameter(Mandatory = $true)]
        [string]$ConfigPath,

        [Parameter(Mandatory = $true)]
        [string]$Key,

        [Parameter(Mandatory = $true)]
        [string]$Command
    )

    $line = "bind `"$Key`" `"$Command`""
    $strictUtf8 = [System.Text.UTF8Encoding]::new($false, $true)
    $utf8NoBom = [System.Text.UTF8Encoding]::new($false)

    if (-not (Test-Path -LiteralPath $ConfigPath)) {
        [System.IO.File]::WriteAllText($ConfigPath, $line + [Environment]::NewLine, $utf8NoBom)
        Write-Host "Created config bind: $line"
        return
    }

    $bytes = [System.IO.File]::ReadAllBytes($ConfigPath)
    if ($bytes.Length -ge 2 -and $bytes[0] -eq 0xFF -and $bytes[1] -eq 0xFE) {
        $text = [System.Text.Encoding]::Unicode.GetString($bytes, 2, $bytes.Length - 2)
    }
    elseif ($bytes.Length -ge 2 -and $bytes[0] -eq 0xFE -and $bytes[1] -eq 0xFF) {
        $text = [System.Text.Encoding]::BigEndianUnicode.GetString($bytes, 2, $bytes.Length - 2)
    }
    elseif ($bytes.Length -ge 3 -and $bytes[0] -eq 0xEF -and $bytes[1] -eq 0xBB -and $bytes[2] -eq 0xBF) {
        $text = [System.Text.Encoding]::UTF8.GetString($bytes, 3, $bytes.Length - 3)
    }
    else {
        try {
            $text = $strictUtf8.GetString($bytes)
        }
        catch {
            $text = [System.Text.Encoding]::GetEncoding(1251).GetString($bytes)
        }
    }

    $pattern = "(?im)^\s*bind\s+`"?" + [System.Text.RegularExpressions.Regex]::Escape($Key) + "`"?\s+.*$"

    if ([System.Text.RegularExpressions.Regex]::IsMatch($text, $pattern)) {
        $updated = [System.Text.RegularExpressions.Regex]::Replace($text, $pattern, $line)
    }
    else {
        $ending = if ($text.EndsWith("`r`n") -or $text.EndsWith("`n")) { "" } else { [Environment]::NewLine }
        $updated = $text + $ending + $line + [Environment]::NewLine
    }

    if ($updated -ne $text) {
        [System.IO.File]::WriteAllText($ConfigPath, $updated, $utf8NoBom)
        Write-Host "Set config bind: $line"
    }
}

function Set-CofGameInfoKey {
    param(
        [Parameter(Mandatory = $true)]
        [string]$GameRoot,

        [Parameter(Mandatory = $true)]
        [string]$Name,

        [Parameter(Mandatory = $true)]
        [string]$Value
    )

    $liblistPath = Join-Path $GameRoot "liblist.gam"

    if (-not (Test-Path -LiteralPath $liblistPath)) {
        return
    }

    $bytes = [System.IO.File]::ReadAllBytes($liblistPath)
    $strictUtf8 = [System.Text.UTF8Encoding]::new($false, $true)

    try {
        $text = $strictUtf8.GetString($bytes)
    }
    catch {
        $text = [System.Text.Encoding]::GetEncoding(1251).GetString($bytes)
    }

    $line = "$Name `"$Value`""
    $pattern = "(?m)^\s*" + [System.Text.RegularExpressions.Regex]::Escape($Name) + "\s+.*$"

    if ([System.Text.RegularExpressions.Regex]::IsMatch($text, $pattern)) {
        $updated = [System.Text.RegularExpressions.Regex]::Replace($text, $pattern, $line)
    }
    else {
        $ending = if ($text.EndsWith("`r`n") -or $text.EndsWith("`n")) { "" } else { [Environment]::NewLine }
        $updated = $text + $ending + $line + [Environment]::NewLine
    }

    if ($updated -ne $text) {
        $utf8NoBom = [System.Text.UTF8Encoding]::new($false)
        [System.IO.File]::WriteAllText($liblistPath, $updated, $utf8NoBom)
        Write-Host "Set liblist key: $line"
    }
}

function Write-Utf8NoBomFile {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path,

        [Parameter(Mandatory = $true)]
        [string]$Content
    )

    $directory = Split-Path -Parent $Path
    New-Item -ItemType Directory -Force -Path $directory | Out-Null

    $utf8NoBom = [System.Text.UTF8Encoding]::new($false)
    [System.IO.File]::WriteAllText($Path, $Content, $utf8NoBom)
    Write-Host "Wrote Xash default menu resource: $Path"
}

