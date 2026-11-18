# Project workflow

- Work on `main`; do not create commits. The user commits changes.
- Build with Waf. Do not alter original game resources.

# Non-disruptive testing

- The user works on the same computer. Automated tests must not steal focus,
  capture their mouse, move their pointer, send input to their desktop, or raise
  game windows above other applications.
- Use `python tools/smoke_rtx.py ...` with its default isolated Windows desktop.
  Never switch the input desktop. A failure to create the isolated desktop must
  stop the test, not fall back to the user's desktop.
- `--interactive` and legacy PowerShell smoke tests require the user's explicit
  permission for an interactive test session. Do not enable them on your own.
- Default smoke reports verify runtime assertions and loaded modules only.
  Do not describe them as visual verification: screenshots/pixel checks are
  explicitly skipped. Prefer renderer readback for future background visual QA.
- Keep `start-game.bat` as the user's ordinary visible launcher.
- All automated game tests must pass `-nosound` to disable both effects and music
  before audio initialization. Do not mute Windows or other applications. Keep
  sound enabled in the user's ordinary launcher.
