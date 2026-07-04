function Resolve-CofAndroidAbis {
    param(
        [string[]]$Abi = @("arm")
    )

    $resolved = New-Object System.Collections.Generic.List[string]

    foreach ($entry in $Abi) {
        $value = $entry.ToLowerInvariant()

        switch ($value) {
            "arm" {
                $resolved.Add("armeabi-v7a")
                $resolved.Add("arm64-v8a")
            }
            "all" {
                $resolved.Add("armeabi-v7a")
                $resolved.Add("arm64-v8a")
                $resolved.Add("x86")
                $resolved.Add("x86_64")
            }
            "armv7" { $resolved.Add("armeabi-v7a") }
            "armv7a" { $resolved.Add("armeabi-v7a") }
            "armeabi-v7a" { $resolved.Add("armeabi-v7a") }
            "arm64" { $resolved.Add("arm64-v8a") }
            "aarch64" { $resolved.Add("arm64-v8a") }
            "arm64-v8a" { $resolved.Add("arm64-v8a") }
            "x86" { $resolved.Add("x86") }
            "x86_64" { $resolved.Add("x86_64") }
            default {
                throw "Unknown Android ABI '$entry'. Use arm, all, armeabi-v7a, arm64-v8a, x86, or x86_64."
            }
        }
    }

    return @($resolved | Select-Object -Unique)
}

function Resolve-AndroidSdkRoot {
    param(
        [string]$AndroidSdkRoot = ""
    )

    $candidates = @()

    if ($AndroidSdkRoot) {
        $candidates += $AndroidSdkRoot
    }

    foreach ($name in @("ANDROID_HOME", "ANDROID_SDK_ROOT")) {
        $value = [Environment]::GetEnvironmentVariable($name)
        if ($value) {
            $candidates += $value
        }
    }

    $localAppData = [Environment]::GetFolderPath("LocalApplicationData")
    if ($localAppData) {
        $candidates += (Join-Path $localAppData "Android\Sdk")
    }

    foreach ($candidate in $candidates | Select-Object -Unique) {
        if ($candidate -and (Test-Path -LiteralPath $candidate)) {
            return (Convert-ToFullPath $candidate)
        }
    }

    throw "Android SDK was not found. Install Android Studio or set ANDROID_HOME / ANDROID_SDK_ROOT."
}

function Resolve-AndroidNdkRoot {
    param(
        [string]$AndroidNdkRoot = "",
        [string]$AndroidSdkRoot = "",
        [string]$NdkVersion = "29.0.14206865"
    )

    $candidates = @()

    if ($AndroidNdkRoot) {
        $candidates += $AndroidNdkRoot
    }

    foreach ($name in @("ANDROID_NDK_ROOT", "ANDROID_NDK_HOME", "ANDROID_NDK")) {
        $value = [Environment]::GetEnvironmentVariable($name)
        if ($value) {
            $candidates += $value
        }
    }

    if ($AndroidSdkRoot) {
        $preferred = Join-Path $AndroidSdkRoot "ndk\$NdkVersion"
        $candidates += $preferred

        $ndkDir = Join-Path $AndroidSdkRoot "ndk"
        if (Test-Path -LiteralPath $ndkDir) {
            $latest = Get-ChildItem -LiteralPath $ndkDir -Directory -ErrorAction SilentlyContinue |
                Sort-Object Name -Descending |
                Select-Object -First 1

            if ($latest) {
                $candidates += $latest.FullName
            }
        }
    }

    foreach ($candidate in $candidates | Select-Object -Unique) {
        if (-not $candidate -or -not (Test-Path -LiteralPath $candidate)) {
            continue
        }

        $clang = Join-Path $candidate "toolchains\llvm\prebuilt"
        if (Test-Path -LiteralPath $clang) {
            return (Convert-ToFullPath $candidate)
        }
    }

    throw "Android NDK was not found. Install NDK $NdkVersion from Android Studio SDK Manager or pass -AndroidNdkRoot."
}

function ConvertTo-KotlinFileLiteral {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path
    )

    $literal = (Convert-ToFullPath $Path).Replace("\", "/").Replace('"', '\"')
    return "file(`"$literal`")"
}

function Remove-GeneratedAndroidProject {
    param(
        [Parameter(Mandatory = $true)]
        [string]$ProjectDir,

        [Parameter(Mandatory = $true)]
        [string]$AllowedRoot
    )

    $fullProjectDir = Convert-ToFullPath $ProjectDir
    $fullAllowedRoot = Convert-ToFullPath $AllowedRoot

    if (-not $fullProjectDir.StartsWith($fullAllowedRoot, [System.StringComparison]::OrdinalIgnoreCase)) {
        throw "Refusing to remove Android project outside generated build root: $fullProjectDir"
    }

    if (Test-Path -LiteralPath $fullProjectDir) {
        Remove-Item -LiteralPath $fullProjectDir -Recurse -Force
    }
}

function Initialize-CofAndroidProject {
    param(
        [Parameter(Mandatory = $true)]
        [string]$TemplateDir,

        [Parameter(Mandatory = $true)]
        [string]$ProjectDir,

        [Parameter(Mandatory = $true)]
        [string]$GeneratedRoot,

        [Parameter(Mandatory = $true)]
        [string]$RepoRoot,

        [Parameter(Mandatory = $true)]
        [string]$EngineRoot,

        [Parameter(Mandatory = $true)]
        [string[]]$Abis,

        [string]$NdkVersion = "29.0.14206865"
    )

    Remove-GeneratedAndroidProject -ProjectDir $ProjectDir -AllowedRoot $GeneratedRoot

    New-Item -ItemType Directory -Path (Split-Path -Parent $ProjectDir) -Force | Out-Null
    Copy-Item -LiteralPath $TemplateDir -Destination $ProjectDir -Recurse -Force

    Set-CofAndroidGradleProject -ProjectDir $ProjectDir -RepoRoot $RepoRoot -EngineRoot $EngineRoot -Abis $Abis -NdkVersion $NdkVersion
    Set-CofAndroidManifest -ProjectDir $ProjectDir
    Set-CofAndroidStrings -ProjectDir $ProjectDir
    New-CofAndroidLauncherActivity -ProjectDir $ProjectDir
}

function Set-CofAndroidGradleProject {
    param(
        [Parameter(Mandatory = $true)]
        [string]$ProjectDir,

        [Parameter(Mandatory = $true)]
        [string]$RepoRoot,

        [Parameter(Mandatory = $true)]
        [string]$EngineRoot,

        [Parameter(Mandatory = $true)]
        [string[]]$Abis,

        [string]$NdkVersion = "29.0.14206865"
    )

    $buildFile = Join-Path $ProjectDir "app\build.gradle.kts"
    $settingsFile = Join-Path $ProjectDir "settings.gradle.kts"

    $content = Get-Content -LiteralPath $buildFile -Raw
    $repoLiteral = ConvertTo-KotlinFileLiteral -Path $RepoRoot
    $engineLiteral = ConvertTo-KotlinFileLiteral -Path $EngineRoot
    $abisLiteral = ($Abis | ForEach-Object { "`"$_`"" }) -join ", "

    $content = [regex]::Replace(
        $content,
        '(?s)(plugins\s*\{.*?\}\r?\n)',
        { param($m) $m.Value + "`nval cofRepoRoot = $repoLiteral`nval xashEngineRoot = $engineLiteral`n" },
        1
    )

    $content = $content -replace 'namespace = "su\.xash\.engine"', 'namespace = "su.xash.cof"'
    $content = $content -replace 'ndkVersion = "[^"]+"', "ndkVersion = `"$NdkVersion`""
    $content = $content -replace 'applicationId = "su\.xash\.engine"', 'applicationId = "su.xash.cof"'
    $content = $content -replace 'versionName = "0\.21-" \+ getGitHash\(\)', 'versionName = "cof-" + getGitHash()'
    $content = $content -replace 'val engineRoot = projectDir\.parentFile\.parent', 'val engineRoot = xashEngineRoot'
    $content = $content -replace 'experimentalProperties\["ninja\.abiFilters"\] = setOf\([^)]+\)', "experimentalProperties[`"ninja.abiFilters`"] = setOf($abisLiteral)"
    $content = $content -replace 'assets\.directories\.add\("\.\./\.\./3rdparty/extras/xash-extras"\)', 'assets.directories.add(File(xashEngineRoot, "3rdparty/extras/xash-extras"))'
    $content = $content -replace 'java\.directories\.add\("\.\./\.\./3rdparty/SDL/android-project/app/src/main/java"\)', 'java.directories.add(File(xashEngineRoot, "3rdparty/SDL/android-project/app/src/main/java"))'
    $content = $content -replace '\r?\n\s*applicationIdSuffix = "\.test"', ''
    $content = [regex]::Replace($content, 'release \{\r?\n', "release {`r`n`t`t`tsigningConfig = signingConfigs.getByName(`"androidDebugKey`")`r`n", 1)
    $content = $content -replace '\.directory\(project\.rootDir\)', '.directory(cofRepoRoot)'

    Set-Content -LiteralPath $buildFile -Value $content -Encoding UTF8

    $settings = Get-Content -LiteralPath $settingsFile -Raw
    $settings = $settings -replace 'rootProject\.name = "Xash3D FWGS"', 'rootProject.name = "Xash3D CoF"'
    Set-Content -LiteralPath $settingsFile -Value $settings -Encoding UTF8
}

function Set-CofAndroidManifest {
    param(
        [Parameter(Mandatory = $true)]
        [string]$ProjectDir
    )

    $manifestFile = Join-Path $ProjectDir "app\src\main\AndroidManifest.xml"
    $manifest = Get-Content -LiteralPath $manifestFile -Raw
    $replacement = @'
		<activity
			android:name=".CofLauncherActivity"
			android:exported="true">
			<intent-filter>
				<action android:name="android.intent.action.MAIN" />

				<category android:name="android.intent.category.LAUNCHER" />
			</intent-filter>
		</activity>
		<activity
			android:name=".MainActivity"
			android:exported="false" />
'@

    $manifest = [regex]::Replace(
        $manifest,
        '(?s)\s*<activity\s+android:name="\.MainActivity"\s+android:exported="true">\s*<intent-filter>.*?</intent-filter>\s*</activity>',
        "`r`n$replacement",
        1
    )

    Set-Content -LiteralPath $manifestFile -Value $manifest -Encoding UTF8
}

function Set-CofAndroidStrings {
    param(
        [Parameter(Mandatory = $true)]
        [string]$ProjectDir
    )

    $stringsFile = Join-Path $ProjectDir "app\src\main\res\values\strings.xml"
    $strings = Get-Content -LiteralPath $stringsFile -Raw
    $strings = [regex]::Replace(
        $strings,
        '(?s)<string name="app_name" translatable="false">.*?</string>',
        '<string name="app_name" translatable="false">Xash3D CoF</string>',
        1
    )
    Set-Content -LiteralPath $stringsFile -Value $strings -Encoding UTF8
}

function New-CofAndroidLauncherActivity {
    param(
        [Parameter(Mandatory = $true)]
        [string]$ProjectDir
    )

    $activityDir = Join-Path $ProjectDir "app\src\main\java\su\xash\engine"
    New-Item -ItemType Directory -Path $activityDir -Force | Out-Null

    $activityFile = Join-Path $activityDir "CofLauncherActivity.kt"
    $activity = @'
package su.xash.engine

import android.Manifest
import android.app.Activity
import android.content.Intent
import android.content.pm.PackageManager
import android.net.Uri
import android.os.Build
import android.os.Bundle
import android.os.Environment
import android.provider.Settings

class CofLauncherActivity : Activity() {
	private var requestedStorage = false
	private var startedEngine = false

	override fun onCreate(savedInstanceState: Bundle?) {
		super.onCreate(savedInstanceState)
		launchWhenReady()
	}

	override fun onResume() {
		super.onResume()
		launchWhenReady()
	}

	override fun onRequestPermissionsResult(
		requestCode: Int,
		permissions: Array<out String>,
		grantResults: IntArray
	) {
		super.onRequestPermissionsResult(requestCode, permissions, grantResults)
		launchWhenReady()
	}

	private fun launchWhenReady() {
		if (startedEngine)
			return

		if (!hasStorageAccess()) {
			requestStorageAccess()
			return
		}

		startedEngine = true

		val baseDir = Environment.getExternalStorageDirectory().absolutePath + "/xash"
		val args = "-game cryoffear -dll @hl -clientlib @client -console -log"

		startActivity(Intent(this, XashActivity::class.java).apply {
			flags = Intent.FLAG_ACTIVITY_NEW_TASK or Intent.FLAG_ACTIVITY_CLEAR_TASK
			putExtra("gamedir", "valve")
			putExtra("argv", args)
			putExtra("basedir", baseDir)
			putExtra("gamelibdir", applicationInfo.nativeLibraryDir)
			putExtra("package", packageName)
		})

		finish()
	}

	private fun hasStorageAccess(): Boolean {
		return when {
			Build.VERSION.SDK_INT >= Build.VERSION_CODES.R -> Environment.isExternalStorageManager()
			Build.VERSION.SDK_INT >= Build.VERSION_CODES.M -> {
				checkSelfPermission(Manifest.permission.READ_EXTERNAL_STORAGE) == PackageManager.PERMISSION_GRANTED &&
					checkSelfPermission(Manifest.permission.WRITE_EXTERNAL_STORAGE) == PackageManager.PERMISSION_GRANTED
			}
			else -> true
		}
	}

	private fun requestStorageAccess() {
		if (requestedStorage)
			return

		requestedStorage = true

		if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
			val uri = Uri.fromParts("package", packageName, null)
			try {
				startActivity(Intent(Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION).setData(uri))
			} catch (_: Exception) {
				startActivity(Intent(Settings.ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION))
			}
		} else if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
			requestPermissions(
				arrayOf(
					Manifest.permission.READ_EXTERNAL_STORAGE,
					Manifest.permission.WRITE_EXTERNAL_STORAGE
				),
				1
			)
		}
	}
}
'@

    Set-Content -LiteralPath $activityFile -Value $activity -Encoding UTF8
}

function Invoke-CofAndroidWafBuild {
    param(
        [Parameter(Mandatory = $true)]
        [string]$SourceDir,

        [Parameter(Mandatory = $true)]
        [string]$BuildDir,

        [Parameter(Mandatory = $true)]
        [string]$Abi,

        [Parameter(Mandatory = $true)]
        [string]$AndroidNdkRoot,

        [Parameter(Mandatory = $true)]
        [string]$Configuration,

        [int]$MinSdk = 23,

        [int]$Jobs = [Environment]::ProcessorCount,

        [switch]$CleanFirst
    )

    $waf = Join-Path $SourceDir "waf.bat"
    if (-not (Test-Path -LiteralPath $waf)) {
        $waf = Join-Path $SourceDir "waf"
    }

    if (-not (Test-Path -LiteralPath $waf)) {
        throw "Cannot find CoF waf entrypoint in $SourceDir."
    }

    $wafBuildType = Convert-CmakeConfigurationToWafBuildType -Configuration $Configuration
    $abiBuildDir = Join-Path $BuildDir $Abi
    $oldAndroidNdk = [Environment]::GetEnvironmentVariable("ANDROID_NDK")
    $oldAndroidNdkHome = [Environment]::GetEnvironmentVariable("ANDROID_NDK_HOME")

    try {
        [Environment]::SetEnvironmentVariable("ANDROID_NDK", $AndroidNdkRoot)
        [Environment]::SetEnvironmentVariable("ANDROID_NDK_HOME", $AndroidNdkRoot)

        $configureArgs = @(
            "configure",
            "-T", $wafBuildType,
            "-o", $abiBuildDir,
            "--prefix=/",
            "--disable-werror",
            "--android=$Abi,,$MinSdk",
            "--enable-android-apk",
            "--gamedir=cryoffear",
            "--server-install-dir=cl_dlls",
            "--client-install-dir=cl_dlls",
            "--server-library-name=hl"
        )

        Invoke-Checked -FilePath $waf -ArgumentList $configureArgs -WorkingDirectory $SourceDir

        if ($CleanFirst) {
            Invoke-Checked -FilePath $waf -ArgumentList @("clean", "-o", $abiBuildDir) -WorkingDirectory $SourceDir
        }

        Invoke-Checked -FilePath $waf -ArgumentList @("build", "-o", $abiBuildDir, "-j$Jobs") -WorkingDirectory $SourceDir
    }
    finally {
        [Environment]::SetEnvironmentVariable("ANDROID_NDK", $oldAndroidNdk)
        [Environment]::SetEnvironmentVariable("ANDROID_NDK_HOME", $oldAndroidNdkHome)
    }

    return $abiBuildDir
}

function Copy-CofAndroidGameLibraries {
    param(
        [Parameter(Mandatory = $true)]
        [string]$AbiBuildDir,

        [Parameter(Mandatory = $true)]
        [string]$ProjectDir,

        [Parameter(Mandatory = $true)]
        [string]$Abi
    )

    $server = Get-ChildItem -LiteralPath $AbiBuildDir -Recurse -File -Filter "*.so" |
        Where-Object { $_.Name -match '^libhl(_|\.|$)' } |
        Sort-Object LastWriteTime -Descending |
        Select-Object -First 1

    $client = Get-ChildItem -LiteralPath $AbiBuildDir -Recurse -File -Filter "*.so" |
        Where-Object { $_.Name -match '^libclient(_|\.|$)' } |
        Sort-Object LastWriteTime -Descending |
        Select-Object -First 1

    if (-not $server) {
        throw "Android server library was not found in $AbiBuildDir."
    }

    if (-not $client) {
        throw "Android client library was not found in $AbiBuildDir."
    }

    $jniDir = Join-Path $ProjectDir "app\src\main\jniLibs\$Abi"
    New-Item -ItemType Directory -Path $jniDir -Force | Out-Null

    Copy-Item -LiteralPath $server.FullName -Destination (Join-Path $jniDir "libhl.so") -Force
    Copy-Item -LiteralPath $client.FullName -Destination (Join-Path $jniDir "libclient.so") -Force
}

function Invoke-CofAndroidGradleBuild {
    param(
        [Parameter(Mandatory = $true)]
        [string]$ProjectDir,

        [Parameter(Mandatory = $true)]
        [string]$Configuration,

        [Parameter(Mandatory = $true)]
        [string]$AndroidSdkRoot
    )

    $gradle = Join-Path $ProjectDir "gradlew.bat"
    if (-not (Test-Path -LiteralPath $gradle)) {
        $gradle = Join-Path $ProjectDir "gradlew"
    }

    if (-not (Test-Path -LiteralPath $gradle)) {
        throw "Cannot find Gradle wrapper in $ProjectDir."
    }

    $oldAndroidHome = [Environment]::GetEnvironmentVariable("ANDROID_HOME")
    $oldAndroidSdkRoot = [Environment]::GetEnvironmentVariable("ANDROID_SDK_ROOT")

    try {
        [Environment]::SetEnvironmentVariable("ANDROID_HOME", $AndroidSdkRoot)
        [Environment]::SetEnvironmentVariable("ANDROID_SDK_ROOT", $AndroidSdkRoot)
        Invoke-Checked -FilePath $gradle -ArgumentList @(":app:assemble$Configuration") -WorkingDirectory $ProjectDir
    }
    finally {
        [Environment]::SetEnvironmentVariable("ANDROID_HOME", $oldAndroidHome)
        [Environment]::SetEnvironmentVariable("ANDROID_SDK_ROOT", $oldAndroidSdkRoot)
    }
}

function Copy-CofAndroidApk {
    param(
        [Parameter(Mandatory = $true)]
        [string]$ProjectDir,

        [Parameter(Mandatory = $true)]
        [string]$Configuration,

        [Parameter(Mandatory = $true)]
        [string]$OutputApk
    )

    $variantDir = $Configuration.ToLowerInvariant()
    $apkDir = Join-Path $ProjectDir "app\build\outputs\apk\$variantDir"
    $apk = Get-ChildItem -LiteralPath $apkDir -File -Filter "*.apk" -ErrorAction SilentlyContinue |
        Sort-Object LastWriteTime -Descending |
        Select-Object -First 1

    if (-not $apk) {
        throw "Gradle did not produce an APK in $apkDir."
    }

    New-Item -ItemType Directory -Path (Split-Path -Parent $OutputApk) -Force | Out-Null
    Copy-Item -LiteralPath $apk.FullName -Destination $OutputApk -Force
}
