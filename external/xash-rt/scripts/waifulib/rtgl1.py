import os
import sys
import subprocess
from waflib import Logs, Errors

def get_rtgl1_sdk(ctx):
	sdk_path = getattr(ctx.env, 'RTGL1_SDK_PATH', None) or os.environ.get('RTGL1_SDK_PATH', '')
	if sdk_path and os.path.isdir(sdk_path):
		return os.path.abspath(sdk_path)

	sibling = os.path.abspath(os.path.join(ctx.srcnode.abspath(), '..', 'RayTracedGL1'))
	if os.path.isdir(sibling):
		return sibling

	local_sub = os.path.abspath(os.path.join(ctx.srcnode.abspath(), 'rtgl1_sdk'))
	if os.path.isdir(local_sub):
		return local_sub

	Logs.info('RTGL1 SDK not found. Cloning https://github.com/boofiboi/RayTracedGL1...')
	cmd = ['git', 'clone', '--recursive', 'https://github.com/boofiboi/RayTracedGL1', '-b', 'hl1', local_sub]
	ret = subprocess.call(cmd)
	if ret != 0 or not os.path.isdir(local_sub):
		raise Errors.WafError('Failed to clone RayTracedGL1 repository')

	return local_sub

def ensure_rtgl1_built(ctx, sdk_path):
	lib_names = ['RayTracedGL1.lib'] if ctx.env.DEST_OS == 'win32' else ['libRayTracedGL1.so']
	subdirs = [
		('Build', 'x64-Release', 'Release'),
		('Build', 'x64-Release', 'RelWithDebInfo'),
		('Build', 'x64-Release'),
		('Build', 'Release', 'Release'),
		('Build', 'Release'),
		('Build', 'x64-Debug', 'Debug'),
		('Build', 'x64-Debug'),
		('Build', 'Debug', 'Debug'),
		('Build', 'Debug'),
		('Build', 'x64-Release-NonAVX', 'Release'),
	]
	if ctx.env.DEST_OS != 'win32':
		subdirs = [('Build', 'linux-x64-Release')] + subdirs
	for d in subdirs:
		for ln in lib_names:
			if os.path.exists(os.path.join(sdk_path, *(d + (ln,)))):
				return

	Logs.info('RayTracedGL1 library not found. Building RayTracedGL1 via CMake...')
	shaders_dir = os.path.join(sdk_path, 'Source', 'Shaders')
	if os.path.isdir(shaders_dir):
		ret = subprocess.call([sys.executable, 'GenerateShaders.py'], cwd=shaders_dir)
		if ret != 0:
			Logs.warn('Shader generation exited with code %d' % ret)

	if ctx.env.DEST_OS == 'win32':
		build_dir = 'Build/x64-Release'
		cmake_configure = [
			'cmake', '-B', build_dir,
			'-DCMAKE_BUILD_TYPE=Release',
			'-DRG_WITH_SURFACE_WIN32=ON',
			'-DRG_WITH_AMD_FSR3=ON',
			'-DRG_WITH_NVIDIA_NRD=ON',
			'-DRG_WITH_SHADERS=OFF',
			'-DRG_WITH_EXAMPLES=OFF',
			'-DCMAKE_CXX_FLAGS_RELEASE=/O2 /Ob3 /Ot /Oi /GL /Gw /Gy /fp:fast /arch:AVX2 /DNDEBUG'
		]
	else:
		build_dir = 'Build/linux-x64-Release'
		cmake_configure = [
			'cmake', '-B', build_dir,
			'-DCMAKE_BUILD_TYPE=Release',
			'-DRG_WITH_SURFACE_WIN32=OFF',
			'-DRG_WITH_SURFACE_WAYLAND=ON',
			'-DRG_WITH_SURFACE_XLIB=ON',
			'-DRG_WITH_AMD_FSR3=ON',
			'-DRG_WITH_NVIDIA_NRD=ON',
			'-DRG_WITH_SHADERS=OFF',
			'-DRG_WITH_EXAMPLES=OFF',
		]
	ret = subprocess.call(cmake_configure, cwd=sdk_path)
	if ret != 0:
		raise Errors.WafError('CMake configure failed for RayTracedGL1')

	cmake_build = ['cmake', '--build', build_dir, '--config', 'Release', '--parallel']
	ret = subprocess.call(cmake_build, cwd=sdk_path)
	if ret != 0:
		raise Errors.WafError('CMake build failed for RayTracedGL1')

def configure(conf):
	if conf.env.RAYTRACING:
		sdk_path = get_rtgl1_sdk(conf)
		ensure_rtgl1_built(conf, sdk_path)
		conf.env.RTGL1_SDK_PATH = sdk_path
