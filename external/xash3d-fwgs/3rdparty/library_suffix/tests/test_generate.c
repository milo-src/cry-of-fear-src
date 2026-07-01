#include <string.h>
#include "library_suffix.h"

int main(int argc, char **argv)
{
	char buf[256];

	// all possible combinations must be already handled by test_build.c
	// so only check that we don't put unnecessary parts
	if( COM_GenerateLibraryName( buf, sizeof( buf ), "", "miku", PLATFORM_WIN32, ARCHITECTURE_X86, 0, 0, 0, "dll" ) < 0 )
		return 1;

	if( strcmp( buf, "miku.dll" ))
		return 2;

	if( COM_GenerateLibraryName( buf, sizeof( buf ), "", "teto", PLATFORM_LINUX, ARCHITECTURE_AMD64, 0, 0, 0, "so" ) < 0 )
		return 3;

	if( strcmp( buf, "teto_amd64.so" ))
		return 4;

	if( COM_GenerateLibraryName( buf, sizeof( buf ), "", "neru", PLATFORM_FREEBSD, ARCHITECTURE_X86, 0, 0, 0, "so" ) < 0 )
		return 5;

	if( strcmp( buf, "neru_freebsd_i386.so" ))
		return 6;

	return 0;
}
