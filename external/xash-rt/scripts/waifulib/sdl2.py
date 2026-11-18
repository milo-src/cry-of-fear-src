# encoding: utf-8
# sdl2.py -- sdl2 waf plugin
# Copyright (C) 2018 a1batross
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

import os

SDL_SANITY_FRAGMENT='''#define SDL_MAIN_HANDLED
#include <%s>
int main( void )
{
	SDL_Init( SDL_INIT_AUDIO );
	return 0;
}'''

def options(opt):
	grp = opt.add_option_group('SDL2/SDL3 options')
	grp.add_option('-s', '--sdl2', action='store', dest = 'SDL_PATH', default = None,
		help = 'path to precompiled SDL library (required for Windows)')

	grp.add_option('-3', '--use-sdl3', action='store_true', dest='SDL3', default = False, help = 'configure for SDL3 [default: %(default)s]')

	grp.add_option('--skip-sdl2-sanity-check', action='store_false', default = True, dest='SDL_SANITY_CHECK',
		help = 'skip checking SDL sanity [default: %(default)s]')

	grp.add_option('--sdl-use-pkgconfig', action='store_true', default = False, dest='SDL_USE_PKGCONFIG',
		help = 'force use of pkg-config to find sdl [default: %(default)s]')

def my_dirname(path):
	# really dumb, will not work with /path/framework//, but still enough
	if path[-1] == '/':
		path = path[:-1]
	return os.path.dirname(path)

def sdl2_configure_path(conf, path, libname):
	conf.start_msg('Configuring %s by path' % libname)

	HAVE          = 'HAVE_' + libname
	INCLUDES      = 'INCLUDES_' + libname
	FRAMEWORKPATH = 'FRAMEWORKPATH_' + libname
	FRAMEWORK     = 'FRAMEWORK_' + libname
	LIBPATH       = 'LIBPATH_' + libname
	LIB           = 'LIB_' + libname

	conf.env[HAVE] = 1
	conf.env.SDL_PATH = path
	if conf.env.DEST_OS == 'darwin':
		conf.env[INCLUDES] = [os.path.abspath(os.path.join(path, 'Headers'))]
		conf.env[FRAMEWORKPATH] = [my_dirname(path)]
		conf.env[FRAMEWORK] = [libname]
		conf.end_msg('yes: {0}, {1}, {2}'.format(conf.env[FRAMEWORK], conf.env[FRAMEWORKPATH], conf.env[INCLUDES]))
	elif conf.env.DEST_OS == 'android':
		# Special setup for waf called from CMake, through ExternalProject_Add
		conf.env[INCLUDES] = [os.path.abspath(os.path.join(path, 'include'))]
		conf.env[LIBPATH] = [os.environ['BUILD_CMAKE_LIBRARY_OUTPUT_DIRECTORY']]
		conf.env[LIB] = [libname]
		conf.end_msg('yes: {0}, {1}, {2}'.format(conf.env[LIB], conf.env[LIBPATH], conf.env[INCLUDES]))
	else:
		if conf.env.DEST_OS == 'win32' and conf.env.COMPILER_CC != 'msvc':
			if conf.env.DEST_CPU == 'x86':
				triplet = 'i686-w64-mingw32'
			else:
				triplet = conf.env.DEST_CPU + '-w64-mingw32'
			path = os.path.abspath(os.path.join(path, triplet))
		conf.env[INCLUDES] = [
			os.path.abspath(os.path.join(path, 'include')),
			os.path.abspath(os.path.join(path, 'include/%s' % libname))
		]
		libpath = 'lib'
		if conf.env.DEST_OS == 'win32' and conf.env.COMPILER_CC == 'msvc':
			if conf.env.DEST_CPU == 'x86_64':
				libpath = 'lib/x64'
			else:
				libpath = 'lib/' + conf.env.DEST_CPU
		conf.env[LIBPATH] = [os.path.abspath(os.path.join(path, libpath))]
		conf.env[LIB] = [libname]
		conf.end_msg('yes: {0}, {1}, {2}'.format(conf.env[LIB], conf.env[LIBPATH], conf.env[INCLUDES]))

def configure(conf):
	if conf.options.SDL3:
		libname = 'SDL3'
	else:
		libname = 'SDL2'

	HAVE          = 'HAVE_' + libname
	CFLAGS        = 'CFLAGS_' + libname
	CXXFLAGS      = 'CFLAGS_' + libname
	LINKFLAGS     = 'LINKFLAGS_' + libname

	sdl_path = conf.options.SDL_PATH
	if not sdl_path and conf.env.DEST_OS == 'win32':
		local_sdl = os.path.abspath(os.path.join(conf.srcnode.abspath(), 'SDL2_VC'))
		if not os.path.isdir(local_sdl) and os.name == 'nt' and not conf.options.SDL3:
			import urllib.request, zipfile, io, shutil
			conf.start_msg('Downloading precompiled SDL2-devel-2.32.10-VC')
			url = 'https://libsdl.org/release/SDL2-devel-2.32.10-VC.zip'
			try:
				req = urllib.request.urlopen(url)
				with zipfile.ZipFile(io.BytesIO(req.read())) as z:
					z.extractall(conf.srcnode.abspath())
				extracted_folder = os.path.join(conf.srcnode.abspath(), 'SDL2-2.32.10')
				if os.path.exists(extracted_folder):
					os.rename(extracted_folder, local_sdl)
				conf.end_msg('done')
			except Exception as e:
				conf.end_msg('failed: %s' % str(e), color='YELLOW')
		if os.path.isdir(local_sdl):
			sdl_path = local_sdl

	if sdl_path:
		sdl2_configure_path(conf, sdl_path, libname)
	elif conf.env.DEST_OS == 'darwin' and conf.options.SDL_USE_PKGCONFIG == False:
		sdl2_configure_path(conf, '/Library/Frameworks/%s.framework' % libname, libname)
	elif conf.env.DEST_OS == 'emscripten':
		flag = '-sUSE_SDL=%d' % (3 if conf.options.SDL3 else 2)
		conf.env[HAVE] = 1
		conf.env[CFLAGS] = [flag]
		conf.env[CXXFLAGS] = [flag]
		conf.env[LINKFLAGS] = [flag]
	else:
		try:
			conf.check_cfg(package=libname.lower(), args='--cflags --libs',
				msg='Checking for %s (pkg-config)' % libname)
		except conf.errors.ConfigurationError:
			try:
				if not conf.env.SDLCONFIG:
					conf.find_program('%s-config' % libname.lower(), var='SDLCONFIG')

				conf.check_cfg(path=conf.env.SDLCONFIG, args='--cflags --libs',
					msg='Checking for %s (%s-config)' % (libname, libname.lower()), package='',
					uselib_store=libname)
			except conf.errors.ConfigurationError:
				conf.env[HAVE] = 0

	if conf.env[HAVE] and conf.options.SDL_SANITY_CHECK:
		if conf.options.SDL3:
			fragment = SDL_SANITY_FRAGMENT % 'SDL3/SDL.h'
		else:
			fragment = SDL_SANITY_FRAGMENT % 'SDL.h'

		conf.env[HAVE] = conf.check_cc(fragment=fragment, msg = 'Checking for %s sanity' % libname, use = libname, execute = False, mandatory = False)
