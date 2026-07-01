#include <string.h>
#include "library_suffix.h"

int main(int argc, char **argv)
{
	char buf[256];

	strcpy(buf, "death_i386");
	COM_StripIntelSuffix(buf);
	if( strcmp( buf, "death" ))
		return 1;

	strcpy(buf, "famine_i486");
	COM_StripIntelSuffix(buf);
	if( strcmp( buf, "famine" ))
		return 2;

	strcpy(buf, "war_i586");
	COM_StripIntelSuffix(buf);
	if( strcmp( buf, "war" ))
		return 3;

	strcpy(buf, "conquest_i686");
	COM_StripIntelSuffix(buf);
	if( strcmp( buf, "conquest" ))
		return 4;

	strcpy(buf, "cat_amd64");
	COM_StripIntelSuffix(buf);
	if( strcmp( buf, "cat_amd64" ))
		return 5;

	strcpy(buf, "fox_i786");
	COM_StripIntelSuffix(buf);
	if( strcmp( buf, "fox_i786" ))
		return 6;

	strcpy(buf, "dog_i286");
	COM_StripIntelSuffix(buf);
	if( strcmp( buf, "dog_i286" ))
		return 7;

	return 0;
}

