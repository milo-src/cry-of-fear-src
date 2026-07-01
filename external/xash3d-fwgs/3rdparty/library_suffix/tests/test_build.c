#include <stdlib.h>
#include <string.h>
#include "library_suffix.h"

// THESE DEFINITIONS MUST NEVER CHANGE
static struct
{
	int id;
	const char *string;
} expected_platforms[] =
{
{ PLATFORM_WIN32,         "win32" },
{ PLATFORM_ANDROID,       "android" },
{ PLATFORM_LINUX,         "linux" },
{ PLATFORM_APPLE,         "apple" },
{ PLATFORM_FREEBSD,       "freebsd" },
{ PLATFORM_NETBSD,        "netbsd" },
{ PLATFORM_OPENBSD,       "openbsd" },
{ PLATFORM_DOS4GW,        "DOS4GW" },
{ PLATFORM_HAIKU,         "haiku" },
{ PLATFORM_SERENITY,      "serenity" },
{ PLATFORM_IRIX,          "irix" },
{ PLATFORM_NSWITCH,       "nswitch" },
{ PLATFORM_PSVITA,        "psvita" },
{ PLATFORM_WASI,          "wasi" },
{ PLATFORM_HURD,          "hurd" },
};

static struct
{
	int id;
	int abi;
	int endianness;
	int is64;
	const char *string;
} expected_architectures[] =
{
{ ARCHITECTURE_AMD64, 0, -1, -1, "amd64" },
{ ARCHITECTURE_X86, 0, -1, -1, "i386" },
{ ARCHITECTURE_E2K, 0, -1, -1, "e2k" },

// all possible WebAssembly names
{ ARCHITECTURE_WASM, 0, -1, 1, "wasm64" },
{ ARCHITECTURE_WASM, 0, -1, 0, "wasm32" },

// all possible MIPS names
{ ARCHITECTURE_MIPS, 0, ENDIANNESS_BIG,    1,  "mips64" },
{ ARCHITECTURE_MIPS, 0, ENDIANNESS_BIG,    0, "mips" },
{ ARCHITECTURE_MIPS, 0, ENDIANNESS_LITTLE, 1,  "mips64el" },
{ ARCHITECTURE_MIPS, 0, ENDIANNESS_LITTLE, 0, "mipsel" },

// all possible PowerPC names
{ ARCHITECTURE_PPC, 0, ENDIANNESS_BIG,    1,  "ppc64" },
{ ARCHITECTURE_PPC, 0, ENDIANNESS_BIG,    0, "ppc" },
{ ARCHITECTURE_PPC, 0, ENDIANNESS_LITTLE, 1,  "ppc64el" },
{ ARCHITECTURE_PPC, 0, ENDIANNESS_LITTLE, 0, "ppcel" },

// All ARM is little endian only (for now?)
// Arm64 is always arm64, no matter the version (for now)
// Arm64 don't care about hardfp bit
{ ARCHITECTURE_ARM, 8 | ARCH_ARM_HARDFP, ENDIANNESS_LITTLE, 1, "arm64" },
{ ARCHITECTURE_ARM, 8,                   ENDIANNESS_LITTLE, 1, "arm64" },
{ ARCHITECTURE_ARM, 0 | ARCH_ARM_HARDFP, ENDIANNESS_LITTLE, 1, "arm64" },
{ ARCHITECTURE_ARM, 0,                   ENDIANNESS_LITTLE, 1, "arm64" },

// ARMv6 and below don't care about hardfp bit
{ ARCHITECTURE_ARM, 4 | ARCH_ARM_HARDFP, ENDIANNESS_LITTLE, 0, "armv4l" },
{ ARCHITECTURE_ARM, 4,                   ENDIANNESS_LITTLE, 0, "armv4l" },
{ ARCHITECTURE_ARM, 5 | ARCH_ARM_HARDFP, ENDIANNESS_LITTLE, 0, "armv5l" },
{ ARCHITECTURE_ARM, 5,                   ENDIANNESS_LITTLE, 0, "armv5l" },
{ ARCHITECTURE_ARM, 6 | ARCH_ARM_HARDFP, ENDIANNESS_LITTLE, 0, "armv6l" },
{ ARCHITECTURE_ARM, 6,                   ENDIANNESS_LITTLE, 0, "armv6l" },
{ ARCHITECTURE_ARM, 6 | ARCH_ARM_HARDFP, ENDIANNESS_LITTLE, 0, "armv6l" },
{ ARCHITECTURE_ARM, 6,                   ENDIANNESS_LITTLE, 0, "armv6l" },

// ARMv7 and ARMv8 in 32-bit mode, hardfp bit is important
{ ARCHITECTURE_ARM, 7 | ARCH_ARM_HARDFP, ENDIANNESS_LITTLE, 0, "armv7hf" },
{ ARCHITECTURE_ARM, 7,                   ENDIANNESS_LITTLE, 0, "armv7l" },
{ ARCHITECTURE_ARM, 8 | ARCH_ARM_HARDFP, ENDIANNESS_LITTLE, 0, "armv8_32hf" },
{ ARCHITECTURE_ARM, 8,                   ENDIANNESS_LITTLE, 0, "armv8_32l" },

{ ARCHITECTURE_RISCV, ARCH_RISCV_FP_SOFT,   -1, 1,  "riscv64" },
{ ARCHITECTURE_RISCV, ARCH_RISCV_FP_SOFT,   -1, 0, "riscv32" },
{ ARCHITECTURE_RISCV, ARCH_RISCV_FP_SINGLE, -1, 1,  "riscv64f" },
{ ARCHITECTURE_RISCV, ARCH_RISCV_FP_SINGLE, -1, 0, "riscv32f" },
{ ARCHITECTURE_RISCV, ARCH_RISCV_FP_DOUBLE, -1, 1,  "riscv64d" },
{ ARCHITECTURE_RISCV, ARCH_RISCV_FP_DOUBLE, -1, 0, "riscv32d" },

// SPARCv9 does technically have little endian access,
// but it's not applicable to us
{ ARCHITECTURE_SPARC, 0, -1, 0, "sparc" },
{ ARCHITECTURE_SPARC, 0, -1, 1, "sparc64" },
};

static int TestPlatformString( void )
{
	int i;

	for( i = 0; i < sizeof( expected_platforms ) / sizeof( expected_platforms[0] ); i++ )
	{
		if( strcmp( Q_PlatformStringByID( expected_platforms[i].id ), expected_platforms[i].string ))
			return i + 1;
	}

	return 0;
}

static int TestArchitectureString_NoEndianness( int id, int abi, int is64, const char *string )
{
	return !strcmp( Q_ArchitectureStringByID( id, abi, ENDIANNESS_LITTLE, is64 ), string ) &&
		!strcmp( Q_ArchitectureStringByID( id, abi, ENDIANNESS_BIG, is64 ), string );
}

static int TestArchitectureString_No64( int id, int abi, int endianness, const char *string )
{
	if( endianness == -1 )
	{
		return TestArchitectureString_NoEndianness( id, abi, 0, string ) &&
			TestArchitectureString_NoEndianness( id, abi, 1, string );
	}

	return !strcmp( Q_ArchitectureStringByID( id, abi, endianness, 1 ), string ) &&
		!strcmp( Q_ArchitectureStringByID( id, abi, endianness, 0 ), string );
}

static int TestArchitectureString( void )
{
	int i;

	for( i = 0; i < sizeof( expected_architectures ) / sizeof( expected_architectures[0] ); i++ )
	{
		if( expected_architectures[i].is64 == -1 )
		{
			if( !TestArchitectureString_No64(
				expected_architectures[i].id,
				expected_architectures[i].abi,
				expected_architectures[i].endianness,
				expected_architectures[i].string ))
				return i + 1;
		}
		else if( expected_architectures[i].endianness == -1 )
		{
			if( !TestArchitectureString_NoEndianness(
				expected_architectures[i].id,
				expected_architectures[i].abi,
				expected_architectures[i].is64,
				expected_architectures[i].string ))
			{
				abort();
				return i + 1;
			}
		}
		else
		{
			if( strcmp( Q_ArchitectureStringByID(
				expected_architectures[i].id,
				expected_architectures[i].abi,
				expected_architectures[i].endianness,
				expected_architectures[i].is64
			), expected_architectures[i].string ))
				return i + 1;
		}
	}

	return 0;
}

int main( void )
{
	int res;

	res = TestPlatformString();
	if( res != 0 )
		return res;

	res = TestArchitectureString();
	if( res != 0 )
		return res + 100;

	return EXIT_SUCCESS;
}
