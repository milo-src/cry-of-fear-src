#!/usr/bin/env python3
"""Build a self-contained Xash3D CoF APK on Linux."""

from __future__ import annotations

import argparse
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys


ABI_ALIASES = {
    "arm": ("armeabi-v7a", "arm64-v8a"),
    "armv7": ("armeabi-v7a",),
    "armv7a": ("armeabi-v7a",),
    "armeabi-v7a": ("armeabi-v7a",),
    "arm64": ("arm64-v8a",),
    "aarch64": ("arm64-v8a",),
    "arm64-v8a": ("arm64-v8a",),
    "x86": ("x86",),
    "x86_64": ("x86_64",),
    "all": ("armeabi-v7a", "arm64-v8a", "x86", "x86_64"),
}


def run(command: list[str], cwd: Path, env: dict[str, str] | None = None) -> None:
    print(">>", " ".join(command), flush=True)
    subprocess.run(command, cwd=cwd, env=env, check=True)


def replace_once(text: str, pattern: str, replacement: str, description: str) -> str:
    updated, count = re.subn(pattern, replacement, text, count=1, flags=re.DOTALL)
    if count != 1:
        raise RuntimeError(f"Could not update {description}; the Xash3D Android template changed")
    return updated


def kotlin_file(path: Path) -> str:
    return 'file("' + path.resolve().as_posix().replace('"', '\\"') + '")'


def launcher_source() -> str:
    return r'''package su.xash.engine

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
		// Use exact APK library names. The @ aliases deliberately expand to
		// platform-suffixed filesystem names such as libhl_android_arm64.so.
		val args = "-dll libhl.so -clientlib libclient.so -console -log"

		startActivity(Intent(this, XashActivity::class.java).apply {
			flags = Intent.FLAG_ACTIVITY_NEW_TASK or Intent.FLAG_ACTIVITY_CLEAR_TASK
			putExtra("gamedir", "cryoffear")
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
				arrayOf(Manifest.permission.READ_EXTERNAL_STORAGE, Manifest.permission.WRITE_EXTERNAL_STORAGE),
				1
			)
		}
	}
}
'''


def prepare_project(
    template: Path,
    project: Path,
    repo: Path,
    engine: Path,
    abis: list[str],
    ndk_version: str,
) -> None:
    generated_root = repo / "build" / "android"
    if generated_root.resolve() not in project.resolve().parents:
        raise RuntimeError(f"Refusing to replace Android project outside {generated_root}")
    if project.exists():
        shutil.rmtree(project)
    project.parent.mkdir(parents=True, exist_ok=True)
    shutil.copytree(template, project)
    inherited_jni = project / "app/src/main/jniLibs"
    if inherited_jni.exists():
        shutil.rmtree(inherited_jni)
    for executable in (project / "gradlew", project / "app/run-python"):
        if executable.exists():
            executable.chmod(executable.stat().st_mode | 0o111)

    build_file = project / "app" / "build.gradle.kts"
    text = build_file.read_text()
    injected = f'\nval cofRepoRoot = {kotlin_file(repo)}\nval xashEngineRoot = {kotlin_file(engine)}\n'
    text = replace_once(text, r'(plugins\s*\{.*?\}\s*\n)', r'\1' + injected, "Gradle root paths")
    # Keep the namespace aligned with the existing su.xash.engine source packages.
    # applicationId is independent and can safely identify this APK as CoF.
    text = replace_once(text, r'applicationId = "su\.xash\.engine"', 'applicationId = "su.xash.cof"', "application ID")
    text = replace_once(text, r'ndkVersion = "[^"]+"', f'ndkVersion = "{ndk_version}"', "NDK version")
    text = replace_once(text, r'versionName = "0\.21-" \+ getGitHash\(\)', 'versionName = "cof-" + getGitHash()', "version name")
    text = replace_once(text, r'val engineRoot = projectDir\.parentFile\.parent', 'val engineRoot = xashEngineRoot', "engine root")
    abi_list = ", ".join(f'"{abi}"' for abi in abis)
    text = replace_once(text, r'experimentalProperties\["ninja\.abiFilters"\] = setOf\([^)]+\)', f'experimentalProperties["ninja.abiFilters"] = setOf({abi_list})', "ABI filters")
    text = replace_once(text, r'assets\.directories\.add\("\.\./\.\./3rdparty/extras/xash-extras"\)', 'assets.directories.add(File(xashEngineRoot, "3rdparty/extras/xash-extras").path)', "assets path")
    text = replace_once(text, r'java\.directories\.add\("\.\./\.\./3rdparty/SDL/android-project/app/src/main/java"\)', 'java.directories.add(File(xashEngineRoot, "3rdparty/SDL/android-project/app/src/main/java").path)', "SDL Java path")
    text = replace_once(
        text,
        r'(java\.directories\.add\(File\(xashEngineRoot, "3rdparty/SDL/android-project/app/src/main/java"\)\.path\))',
        r'\1\n\t\t\tjniLibs.directories.add(File(xashEngineRoot, "android/app/src/main/jniLibs").path)',
        "Xash native dependency path",
    )
    text = re.sub(r'\n\s*applicationIdSuffix = "\.test"', '', text)
    text = replace_once(text, r'(release\s*\{)', r'\1\n\t\t\tsigningConfig = signingConfigs.getByName("androidDebugKey")', "release signing")
    text = replace_once(text, r'\.directory\(project\.rootDir\)', '.directory(cofRepoRoot)', "Git working directory")
    text = replace_once(
        text,
        r'(keepDebugSymbols\.add\("\*\*/\*\.so"\))',
        r'\1\n\t\t\texcludes.add("**/libclient_android_*.so")\n\t\t\texcludes.add("**/libhl_android_*.so")',
        "unused generic HLSDK exclusions",
    )
    build_file.write_text(text)

    settings = project / "settings.gradle.kts"
    settings.write_text(settings.read_text().replace('rootProject.name = "Xash3D FWGS"', 'rootProject.name = "Xash3D CoF"'))

    manifest_file = project / "app" / "src/main/AndroidManifest.xml"
    manifest = manifest_file.read_text()
    activities = '''
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
			android:exported="false" />'''
    manifest = replace_once(
        manifest,
        r'\s*<activity\s+android:name="\.MainActivity"\s+android:exported="true">\s*<intent-filter>.*?</intent-filter>\s*</activity>',
        activities,
        "launcher manifest entries",
    )
    manifest_file.write_text(manifest)

    for strings_file in project.glob("app/src/*/res/values*/strings.xml"):
        strings = strings_file.read_text()
        if 'name="app_name"' in strings:
            strings = replace_once(strings, r'<string name="app_name" translatable="false">.*?</string>', '<string name="app_name" translatable="false">Xash3D CoF</string>', f"app name in {strings_file}")
            strings_file.write_text(strings)

    activity_file = project / "app" / "src/main/java/su/xash/engine/CofLauncherActivity.kt"
    activity_file.parent.mkdir(parents=True, exist_ok=True)
    activity_file.write_text(launcher_source())


def resolve_sdk(explicit: str | None) -> Path:
    candidates = [explicit, os.getenv("ANDROID_HOME"), os.getenv("ANDROID_SDK_ROOT"), str(Path.home() / "Android/Sdk")]
    for candidate in candidates:
        if candidate and Path(candidate).is_dir():
            return Path(candidate).resolve()
    raise RuntimeError("Android SDK not found; pass --android-sdk or set ANDROID_HOME")


def version_key(path: Path) -> tuple[int, ...]:
    return tuple(int(value) for value in re.findall(r'\d+', path.name))


def resolve_ndk(sdk: Path, explicit: str | None, requested: str) -> Path:
    candidates = [Path(explicit).expanduser() if explicit else None, sdk / "ndk" / requested]
    ndk_dir = sdk / "ndk"
    if ndk_dir.is_dir():
        candidates.extend(sorted((p for p in ndk_dir.iterdir() if p.is_dir()), key=version_key, reverse=True))
    for candidate in candidates:
        if candidate and (candidate / "toolchains/llvm/prebuilt").is_dir():
            return candidate.resolve()
    raise RuntimeError(f"Android NDK not found under {ndk_dir}")


def resolve_abis(values: list[str]) -> list[str]:
    result: list[str] = []
    for value in values:
        try:
            expanded = ABI_ALIASES[value.lower()]
        except KeyError as exc:
            raise RuntimeError(f"Unknown Android ABI: {value}") from exc
        for abi in expanded:
            if abi not in result:
                result.append(abi)
    return result


def ensure_android_dependencies(engine: Path) -> None:
    sdl = engine / "3rdparty/SDL"
    if (sdl / "android-project/app/src/main/java/org/libsdl/app/SDLActivity.java").is_file():
        return
    if sdl.exists():
        shutil.rmtree(sdl)
    run(
        [
            "git",
            "clone",
            "--depth",
            "1",
            "--branch",
            "release-2.32.8",
            "https://github.com/libsdl-org/SDL.git",
            str(sdl),
        ],
        engine,
    )


def build_game_libraries(repo: Path, project: Path, ndk: Path, abis: list[str], configuration: str, min_sdk: int, jobs: int, clean: bool) -> None:
    source = repo / "src/cof"
    waf = source / "waf"
    env = os.environ.copy()
    env["ANDROID_NDK"] = str(ndk)
    env["ANDROID_NDK_HOME"] = str(ndk)
    build_root = repo / "build/android/cof-libs"
    build_type = configuration.lower()
    for abi in abis:
        output = build_root / abi
        configure = [sys.executable, str(waf), "configure", "-T", build_type, "-o", str(output), "--prefix=/", "--disable-werror", f"--android={abi},,{min_sdk}", "--enable-android-apk", "--gamedir=cryoffear", "--server-install-dir=cl_dlls", "--client-install-dir=cl_dlls", "--server-library-name=hl"]
        run(configure, source, env)
        if clean:
            run([sys.executable, str(waf), "clean", "-o", str(output)], source, env)
        run([sys.executable, str(waf), "build", "-o", str(output), f"-j{jobs}"], source, env)

        libraries = list(output.rglob("*.so"))
        server = next((p for p in libraries if re.match(r'^libhl(?:_|\.|$)', p.name)), None)
        client = next((p for p in libraries if re.match(r'^libclient(?:_|\.|$)', p.name)), None)
        if not server or not client:
            raise RuntimeError(f"CoF libraries were not produced for {abi}")
        destination = project / "app/src/main/jniLibs" / abi
        destination.mkdir(parents=True, exist_ok=True)
        shutil.copy2(server, destination / "libhl.so")
        shutil.copy2(client, destination / "libclient.so")


def build_apk(project: Path, sdk: Path, configuration: str, output: Path) -> None:
    env = os.environ.copy()
    env["ANDROID_HOME"] = str(sdk)
    env["ANDROID_SDK_ROOT"] = str(sdk)
    wrapper = project / ("gradlew.bat" if os.name == "nt" else "gradlew")
    command = [str(wrapper), f":app:assemble{configuration}"] if os.name == "nt" else ["bash", str(wrapper), f":app:assemble{configuration}"]
    run(command, project, env)
    candidates = sorted((project / f"app/build/outputs/apk/{configuration.lower()}").glob("*.apk"), key=lambda p: p.stat().st_mtime, reverse=True)
    if not candidates:
        raise RuntimeError("Gradle completed without producing an APK")
    output.parent.mkdir(parents=True, exist_ok=True)
    shutil.copy2(candidates[0], output)


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--configuration", choices=("Debug", "Release"), default="Debug")
    parser.add_argument("--abi", action="append", default=[], help="ABI or alias; repeat for multiple ABIs")
    parser.add_argument("--min-sdk", type=int, default=23)
    parser.add_argument("--ndk-version", default="29.0.14206865")
    parser.add_argument("--android-sdk")
    parser.add_argument("--android-ndk")
    parser.add_argument("--jobs", type=int, default=os.cpu_count() or 1)
    parser.add_argument("--project-dir", type=Path)
    parser.add_argument("--output-apk", type=Path)
    parser.add_argument("--clean-native", action="store_true")
    parser.add_argument("--prepare-only", action="store_true")
    parser.add_argument("--skip-game-libraries", action="store_true")
    return parser.parse_args()


def main() -> None:
    args = parse_args()
    repo = Path(__file__).resolve().parent.parent
    engine = repo / "external/xash3d-fwgs"
    project = (args.project_dir or repo / "build/android/xash3d-cof").resolve()
    output = (args.output_apk or repo / "out/android/xash3d-cof.apk").resolve()
    abis = resolve_abis(args.abi or ["arm"])

    sdk = resolve_sdk(args.android_sdk) if not args.prepare_only else None
    ndk = resolve_ndk(sdk, args.android_ndk, args.ndk_version) if sdk else None
    ndk_version = ndk.name if ndk else args.ndk_version
    if not args.prepare_only:
        ensure_android_dependencies(engine)
    prepare_project(engine / "android", project, repo, engine, abis, ndk_version)
    print(f"Prepared Android project: {project}")
    if args.prepare_only:
        return
    assert sdk is not None and ndk is not None
    print(f"Android SDK: {sdk}")
    print(f"Android NDK: {ndk}")
    if not args.skip_game_libraries:
        build_game_libraries(repo, project, ndk, abis, args.configuration, args.min_sdk, args.jobs, args.clean_native)
    build_apk(project, sdk, args.configuration, output)
    print(f"Xash3D CoF APK created: {output}")


if __name__ == "__main__":
    main()
