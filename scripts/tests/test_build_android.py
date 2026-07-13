import importlib.util
from pathlib import Path
import tempfile
import unittest


REPO = Path(__file__).resolve().parents[2]
SPEC = importlib.util.spec_from_file_location("build_android", REPO / "scripts/build_android.py")
BUILD_ANDROID = importlib.util.module_from_spec(SPEC)
assert SPEC.loader is not None
SPEC.loader.exec_module(BUILD_ANDROID)


class AndroidProjectGeneratorTest(unittest.TestCase):
    def test_generated_project_keeps_engine_namespace_and_launches_cof(self):
        generated_root = REPO / "build/android"
        generated_root.mkdir(parents=True, exist_ok=True)
        with tempfile.TemporaryDirectory(dir=generated_root) as temporary:
            project = Path(temporary) / "xash3d-cof"
            BUILD_ANDROID.prepare_project(
                REPO / "external/xash3d-fwgs/android",
                project,
                REPO,
                REPO / "external/xash3d-fwgs",
                ["arm64-v8a"],
                "28.2.13676358",
            )
            gradle = (project / "app/build.gradle.kts").read_text()
            manifest = (project / "app/src/main/AndroidManifest.xml").read_text()
            launcher = (project / "app/src/main/java/su/xash/engine/CofLauncherActivity.kt").read_text()

            self.assertIn('namespace = "su.xash.engine"', gradle)
            self.assertIn('applicationId = "su.xash.cof"', gradle)
            self.assertIn('xash-extras").path)', gradle)
            self.assertIn('android/app/src/main/jniLibs").path)', gradle)
            self.assertIn('android:name=".CofLauncherActivity"', manifest)
            self.assertIn('package su.xash.engine', launcher)
            self.assertIn('putExtra("gamedir", "cryoffear")', launcher)
            self.assertNotIn('-game cryoffear', launcher)
            self.assertIn('-dll libhl.so -clientlib libclient.so', launcher)
            self.assertNotIn('-dll @hl', launcher)
            self.assertTrue((project / "app/run-python").stat().st_mode & 0o111)
            self.assertIn("Xash3D CoF", (project / "app/src/debug/res/values/strings.xml").read_text())
            self.assertFalse((project / "app/src/main/jniLibs").exists())


if __name__ == "__main__":
    unittest.main()
