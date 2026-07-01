#pragma once

#include "extdll.h"

#include <string.h>

struct COFInventoryDef
{
	char mapName[64];
	char niceName[128];
	char className[64];
	char model[128];
	char pickupSound[128];
	char combinedWith[128];
	char combinedResult[128];
	char combinedSound[128];
	BOOL droppable;
};

inline void COF_ClearItemDef( COFInventoryDef *pDef )
{
	memset( pDef, 0, sizeof( *pDef ) );
	pDef->droppable = FALSE;
}
