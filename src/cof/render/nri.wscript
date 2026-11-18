import os
from pathlib import Path

def options(opt):
    opt.load('compiler_cxx')

def configure(conf):
    conf.env.MSVC_TARGETS = ['x64']
    conf.load('compiler_cxx')
    conf.check_cxx(fragment='static_assert(sizeof(void*) == 8, "x64 required"); int main(){return 0;}', msg='Checking x64 pointers', mandatory=True)

def build(bld):
    root = Path(os.environ['COF_REPO_ROOT'])
    bld.shlib(target='NRI',
        source=['Source/Creation/Creation.cpp', 'Source/Shared/Shared.cpp', 'Source/VK/ImplVK.cpp', 'Source/Validation/ImplVal.cpp'],
        includes=['Include','Source/Shared',str(root/'external/vma/include'),str(root/'external/vulkan-headers/include')],
        defines=['NRI_ENABLE_VK_SUPPORT=1','NRI_ENABLE_VALIDATION_SUPPORT=1','NRI_STREAMER_THREAD_SAFE=1',
                 'NRI_ENABLE_DEBUG_NAMES_AND_ANNOTATIONS=1','NRI_API=extern "C" __declspec(dllexport)',
                 'WIN32_LEAN_AND_MEAN','NOMINMAX','_CRT_SECURE_NO_WARNINGS','VK_USE_PLATFORM_WIN32_KHR','NDEBUG'],
        cxxflags=['/std:c++17','/O2','/EHsc','/MT','/bigobj'],lib=['user32'])
