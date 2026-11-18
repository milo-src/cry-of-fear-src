"""Prepare the pinned NRI Vulkan backend, with small-BAR upload compatibility."""
from pathlib import Path
import shutil
ROOT = Path(__file__).resolve().parents[1]

def prepare():
    target = ROOT/'build/nri-source'
    shutil.copytree(ROOT/'external/nri',target,dirs_exist_ok=True)
    shutil.copy2(ROOT/'external/xash-rt/waf',target/'waf')
    shutil.copy2(ROOT/'src/cof/render/nri.wscript',target/'wscript')
    device = target/'Source/VK/DeviceVK.hpp'
    text = device.read_text(encoding='utf-8')
    anchor = '    VkMemoryPropertyFlags neededFlags = 0;'
    if text.count(anchor)!=1:raise RuntimeError('NRI memory-selection hook changed')
    text=text.replace(anchor,
        '    // CoF: do not use the small legacy BAR heap for constant uploads.\n'
        '    // Keep Vulkan memoryTypeBits validation in the selector below.\n'
        '    if (memoryLocation == MemoryLocation::DEVICE_UPLOAD && m_Desc.memory.deviceUploadHeapSize < (512ull << 20))\n'
        '        memoryLocation = MemoryLocation::HOST_UPLOAD;\n'+anchor)
    device.write_text(text,encoding='utf-8')
    return target
