#ifndef COF_UI_ENGINE_BRIDGE_H
#define COF_UI_ENGINE_BRIDGE_H
/* A separate, versioned source-owned ABI; existing Xash menu ABI is unchanged. */
#define COF_UI_API_VERSION 1
typedef struct cof_ui_engine_s {
    int (*complete)(const char *prefix, int index, char *output, int capacity);
} cof_ui_engine_t;
typedef struct cof_ui_exports_s {
    void (*toggle_console)(void);
    void (*console_print)(const char *text);
    void (*console_clear)(void);
} cof_ui_exports_t;
typedef int (*cof_ui_get_api_t)(int, const cof_ui_engine_t*, cof_ui_exports_t*);
#endif
