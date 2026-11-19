"""Read-only Windows checks before starting the optional RTX runtime."""
import ctypes as C
from ctypes import wintypes as W
import os


def running_instances(executable):
    """Only match this executable's full path; do not touch other games."""
    if os.name != 'nt':
        return []
    kernel = C.WinDLL('kernel32', use_last_error=True)
    psapi = C.WinDLL('psapi', use_last_error=True)
    psapi.EnumProcesses.argtypes = [C.POINTER(W.DWORD), W.DWORD, C.POINTER(W.DWORD)]
    psapi.EnumProcesses.restype = W.BOOL
    kernel.OpenProcess.argtypes = [W.DWORD, W.BOOL, W.DWORD]
    kernel.OpenProcess.restype = W.HANDLE
    kernel.QueryFullProcessImageNameW.argtypes = [W.HANDLE, W.DWORD, W.LPWSTR, C.POINTER(W.DWORD)]
    kernel.QueryFullProcessImageNameW.restype = W.BOOL
    kernel.CloseHandle.argtypes = [W.HANDLE]
    count = 1024
    while True:
        pids = (W.DWORD * count)()
        used = W.DWORD()
        if not psapi.EnumProcesses(pids, C.sizeof(pids), C.byref(used)):
            raise C.WinError(C.get_last_error())
        if used.value < C.sizeof(pids):
            break
        count *= 2
    target = os.path.normcase(os.path.abspath(executable))
    matches = []
    for pid in pids[:used.value // C.sizeof(W.DWORD)]:
        handle = kernel.OpenProcess(0x1000, False, pid)  # QUERY_LIMITED_INFORMATION
        if not handle:
            continue  # Exited or protected unrelated process.
        try:
            name = C.create_unicode_buffer(32768)
            size = W.DWORD(len(name))
            if kernel.QueryFullProcessImageNameW(handle, 0, name, C.byref(size)):
                if os.path.normcase(os.path.abspath(name.value)) == target:
                    matches.append(pid)
        finally:
            kernel.CloseHandle(handle)
    return matches


def available_commit():
    """Available committed-memory budget, not just unused physical RAM."""
    if os.name != 'nt':
        return None

    class MemoryStatus(C.Structure):
        _fields_ = [('length', W.DWORD), ('load', W.DWORD)] + [
            (name, C.c_ulonglong) for name in (
                'total_phys', 'avail_phys', 'total_page', 'avail_page',
                'total_virtual', 'avail_virtual', 'avail_extended')]

    status = MemoryStatus()
    status.length = C.sizeof(status)
    kernel = C.WinDLL('kernel32', use_last_error=True)
    kernel.GlobalMemoryStatusEx.argtypes = [C.POINTER(MemoryStatus)]
    kernel.GlobalMemoryStatusEx.restype = W.BOOL
    if not kernel.GlobalMemoryStatusEx(C.byref(status)):
        raise C.WinError(C.get_last_error())
    return status.avail_page


def check_rtx_start(executable):
    instances = running_instances(executable)
    if instances:
        raise RuntimeError(
            'CoF RTX уже запущен (PID: ' + ', '.join(map(str, instances)) + '). '
            'Закрой игру или оставшееся окно ошибки перед повторным запуском. '
            'Второй экземпляр не запущен.')
    free = available_commit()
    # This is a conservative rejection of severe exhaustion, not a promise
    # that every map fits above this limit. Physical-RAM usage alone is not it.
    if free is not None and free < 2 * 1024**3:
        raise RuntimeError(
            f'Для запуска RTX осталось слишком мало доступной памяти Windows: {free / 1024**3:.2f} ГБ. '
            'Закрой ненужные приложения или зависшие процессы и повтори запуск. '
            'RTX не запущен, настройки графики сохранены.')
