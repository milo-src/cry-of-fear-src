"""Run native test windows on an isolated Windows desktop; never switch to it."""
import ctypes as C
from ctypes import wintypes as W
import uuid
import subprocess


class STARTUPINFOW(C.Structure):
    _fields_ = [('cb', W.DWORD), ('lpReserved', W.LPWSTR),
                ('lpDesktop', W.LPWSTR), ('lpTitle', W.LPWSTR)] + [
        (name, W.DWORD) for name in ('dwX', 'dwY', 'dwXSize', 'dwYSize',
        'dwXCountChars', 'dwYCountChars', 'dwFillAttribute', 'dwFlags')] + [
        ('wShowWindow', W.WORD), ('cbReserved2', W.WORD),
        ('lpReserved2', C.POINTER(W.BYTE)), ('hStdInput', W.HANDLE),
        ('hStdOutput', W.HANDLE), ('hStdError', W.HANDLE)]


class PROCESS_INFORMATION(C.Structure):
    _fields_ = [('hProcess', W.HANDLE), ('hThread', W.HANDLE),
                ('dwProcessId', W.DWORD), ('dwThreadId', W.DWORD)]


class DesktopProcess:
    """Minimal process owner using real STARTUPINFO.lpDesktop (not Popen)."""
    def __init__(self, command, cwd, env, desktop):
        self.kernel = C.WinDLL('kernel32', use_last_error=True)
        self.kernel.CreateProcessW.argtypes = [W.LPCWSTR, W.LPWSTR,
            C.c_void_p, C.c_void_p, W.BOOL, W.DWORD, C.c_void_p,
            W.LPCWSTR, C.POINTER(STARTUPINFOW), C.POINTER(PROCESS_INFORMATION)]
        self.kernel.CreateProcessW.restype = W.BOOL
        self.kernel.GetExitCodeProcess.argtypes = [W.HANDLE, C.POINTER(W.DWORD)]
        self.kernel.WaitForSingleObject.argtypes = [W.HANDLE, W.DWORD]
        self.kernel.WaitForSingleObject.restype = W.DWORD
        self.kernel.TerminateProcess.argtypes = [W.HANDLE, W.UINT]
        self.kernel.CloseHandle.argtypes = [W.HANDLE]
        startup = STARTUPINFOW()
        startup.cb = C.sizeof(startup)
        startup.lpDesktop = desktop
        info = PROCESS_INFORMATION()
        environment = C.create_unicode_buffer('\0'.join(
            key + '=' + value for key, value in sorted(env.items(), key=lambda p:p[0].upper())) + '\0')
        flags = (subprocess.CREATE_NO_WINDOW | 0x400 |  # CREATE_UNICODE_ENVIRONMENT
                 subprocess.BELOW_NORMAL_PRIORITY_CLASS)
        linked = None
        if env.get('COF_READBACK_REQUEST'):
            # Vulkan deliberately ignores user layer paths in elevated apps.
            # Use this account's existing UAC linked token for this test only;
            # keep lpDesktop pointing at the isolated desktop. Fail closed.
            adv=C.WinDLL('advapi32',use_last_error=True)
            adv.OpenProcessToken.argtypes=[W.HANDLE,W.DWORD,C.POINTER(W.HANDLE)]
            adv.GetTokenInformation.argtypes=[W.HANDLE,C.c_int,C.c_void_p,W.DWORD,C.POINTER(W.DWORD)]
            adv.CreateProcessWithTokenW.argtypes=[W.HANDLE,W.DWORD,W.LPCWSTR,W.LPWSTR,W.DWORD,C.c_void_p,W.LPCWSTR,C.POINTER(STARTUPINFOW),C.POINTER(PROCESS_INFORMATION)]
            token=W.HANDLE();size=W.DWORD();elevation=W.DWORD()
            if not adv.OpenProcessToken(W.HANDLE(-1),8,C.byref(token)):raise C.WinError(C.get_last_error())
            try:
                if not adv.GetTokenInformation(token,18,C.byref(elevation),C.sizeof(elevation),C.byref(size)):raise C.WinError(C.get_last_error())
                if elevation.value==2:
                    linked=W.HANDLE()
                    if not adv.GetTokenInformation(token,19,C.byref(linked),C.sizeof(linked),C.byref(size)):raise C.WinError(C.get_last_error())
                elif C.windll.shell32.IsUserAnAdmin():
                    # UAC may be disabled, leaving no linked token. SAFER's
                    # NORMALUSER level removes administrator membership and
                    # privileges only from this child process token.
                    adv.SaferCreateLevel.argtypes=[W.DWORD,W.DWORD,W.DWORD,C.POINTER(W.HANDLE),C.c_void_p]
                    adv.SaferComputeTokenFromLevel.argtypes=[W.HANDLE,W.HANDLE,C.POINTER(W.HANDLE),W.DWORD,C.c_void_p]
                    adv.SaferCloseLevel.argtypes=[W.HANDLE]
                    level=W.HANDLE();linked=W.HANDLE()
                    if not adv.SaferCreateLevel(1,0x20000,1,C.byref(level),None):raise C.WinError(C.get_last_error())
                    try:
                        if not adv.SaferComputeTokenFromLevel(level,None,C.byref(linked),0,None):raise C.WinError(C.get_last_error())
                    finally:adv.SaferCloseLevel(level)
            finally:self.kernel.CloseHandle(token)
        if linked:
            # Restricted administrator tokens can retain high integrity even
            # after their admin SID is disabled. Lower this test child to medium.
            class Label(C.Structure):
                _fields_=[('sid',C.c_void_p),('attributes',W.DWORD)]
            adv.ConvertStringSidToSidW.argtypes=[W.LPCWSTR,C.POINTER(C.c_void_p)]
            adv.GetLengthSid.argtypes=[C.c_void_p]
            adv.SetTokenInformation.argtypes=[W.HANDLE,C.c_int,C.c_void_p,W.DWORD]
            self.kernel.LocalFree.argtypes=[C.c_void_p]
            sid=C.c_void_p()
            if not adv.ConvertStringSidToSidW('S-1-16-8192',C.byref(sid)):raise C.WinError(C.get_last_error())
            try:
                label=Label(sid,0x20)
                if not adv.SetTokenInformation(linked,25,C.byref(label),C.sizeof(label)+adv.GetLengthSid(sid)):raise C.WinError(C.get_last_error())
            finally:self.kernel.LocalFree(sid)
            try:
                created=adv.CreateProcessWithTokenW(linked,0,command[0],C.create_unicode_buffer(subprocess.list2cmdline(command)),flags,environment,str(cwd),C.byref(startup),C.byref(info))
                error=C.get_last_error()
            finally:self.kernel.CloseHandle(linked)
        else:
            created=self.kernel.CreateProcessW(command[0],
                C.create_unicode_buffer(subprocess.list2cmdline(command)),
                None, None, False, flags, environment, str(cwd),
                C.byref(startup), C.byref(info))
            error=C.get_last_error()
        if not created:
            raise C.WinError(error)
        self.handle = info.hProcess
        self.pid = info.dwProcessId
        self.returncode = None
        self.kernel.CloseHandle(info.hThread)

    def poll(self):
        state = self.kernel.WaitForSingleObject(self.handle, 0)
        if state == 0:
            code = W.DWORD()
            if not self.kernel.GetExitCodeProcess(self.handle, C.byref(code)):
                raise C.WinError(C.get_last_error())
            self.returncode = code.value
        elif state != 258:  # WAIT_TIMEOUT
            raise C.WinError(C.get_last_error())
        return self.returncode

    def terminate(self):
        if not self.kernel.TerminateProcess(self.handle, 1) and self.poll() is None:
            raise C.WinError(C.get_last_error())

    def wait(self, timeout):
        if self.kernel.WaitForSingleObject(self.handle, int(timeout * 1000)) == 258:
            raise subprocess.TimeoutExpired('isolated game', timeout)
        return self.poll()

    def close(self):
        if self.handle:
            self.kernel.CloseHandle(self.handle)
            self.handle = None


class TestDesktop:
    def __init__(self, interactive=False):
        self.interactive = interactive
        self.handle = None
        self.name = None

    def __enter__(self):
        if self.interactive:
            return self
        self.user = C.WinDLL('user32', use_last_error=True)
        self.user.CreateDesktopW.argtypes = [W.LPCWSTR, W.LPCWSTR, C.c_void_p,
                                            W.DWORD, W.DWORD, C.c_void_p]
        self.user.CreateDesktopW.restype = W.HANDLE
        self.user.CloseDesktop.argtypes = [W.HANDLE]
        self.user.CloseDesktop.restype = W.BOOL
        self.name = 'CoFTest_' + uuid.uuid4().hex
        # READ/WRITEOBJECTS, CREATEWINDOW/CREATEMENU, HOOKCONTROL, ENUMERATE.
        # Deliberately no DESKTOP_SWITCHDESKTOP access. Fail closed if unavailable.
        self.handle = self.user.CreateDesktopW(self.name, None, None, 0, 0xCF, None)
        if not self.handle:
            raise C.WinError(C.get_last_error())
        return self

    def __exit__(self, *unused):
        if self.handle:
            self.user.CloseDesktop(self.handle)
            self.handle = None

    def launch(self, command, cwd, env):
        if not self.handle or not self.name:
            raise RuntimeError('An isolated desktop is required; refusing desktop fallback')
        return DesktopProcess(command, cwd, env, self.name)

    def verify_process(self, pid):
        if self.interactive:
            return False
        callback_type = C.WINFUNCTYPE(W.BOOL, W.HWND, W.LPARAM)
        self.user.EnumDesktopWindows.argtypes = [W.HANDLE, callback_type, W.LPARAM]
        self.user.GetWindowThreadProcessId.argtypes = [W.HWND, C.POINTER(W.DWORD)]
        self.user.GetForegroundWindow.restype = W.HWND
        windows = []
        @callback_type
        def visit(hwnd, unused):
            owner = W.DWORD()
            self.user.GetWindowThreadProcessId(hwnd, C.byref(owner))
            if owner.value == pid:
                windows.append(hwnd)
            return True
        if not self.user.EnumDesktopWindows(self.handle, visit, 0):
            raise C.WinError(C.get_last_error())
        if not windows:
            raise RuntimeError('Game window not found on isolated test desktop')
        owner = W.DWORD()
        self.user.GetWindowThreadProcessId(self.user.GetForegroundWindow(), C.byref(owner))
        if owner.value == pid:
            raise RuntimeError('Isolated game unexpectedly owns the foreground')
        return True
