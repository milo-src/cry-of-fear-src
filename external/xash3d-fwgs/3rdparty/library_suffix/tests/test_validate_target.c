#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "library_suffix.h"

#ifndef VALIDATE_TARGET
#error
#endif

int main( void )
{
	char buf[256];

	if( snprintf( buf, sizeof( buf ), "%s-%s", Q_buildos( ), Q_buildarch( )) < 0 )
		return 1;

	if( strcmp( buf, VALIDATE_TARGET ) != 0 )
		return 2;

	return EXIT_SUCCESS;
}
