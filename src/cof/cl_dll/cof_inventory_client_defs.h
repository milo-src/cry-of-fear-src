#pragma once

#include "cof_ui.h"

#define COF_INV_MAX_ITEMS 6
#define COF_INV_VISIBLE_SLOTS 6
#define COF_INV_QUICK_SLOTS 3
#define COF_INV_ACTION_COUNT 7

enum COFInventoryMode
{
	COF_INV_MODE_IDLE = 0,
	COF_INV_MODE_ACTION_MENU,
	COF_INV_MODE_COMBINE_SELECT,
	COF_INV_MODE_DUAL_SELECT
};

enum COFInventoryAction
{
	COF_INV_ACTION_USE = 0,
	COF_INV_ACTION_COMBINE,
	COF_INV_ACTION_DROP,
	COF_INV_ACTION_DUAL,
	COF_INV_ACTION_QUICK1,
	COF_INV_ACTION_QUICK2,
	COF_INV_ACTION_QUICK3
};

struct COFClientInventoryItem
{
	bool valid;
	char path[128];
	char mapName[64];
	char niceName[128];
	char className[64];
	char inventoryPicture[128];
	char quickPicture[128];
	char combinedWith[128];
	char combinedResult[128];
	bool droppable;
};

struct COFInventoryLayout
{
	COFUIRect panel;
	COFUIRect bagPanel;
	COFUIRect quickPanel;
	COFUIRect slots[COF_INV_VISIBLE_SLOTS];
	COFUIRect quickSlots[COF_INV_QUICK_SLOTS];
	COFUIRect description;
	COFUIRect objective;
	COFUIRect notesIcon;
};

struct COFInventoryActionRow
{
	const char *label;
	int action;
};
