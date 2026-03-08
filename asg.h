#define _CRT_SECURE_NO_DEPRECATE
#include "windows.h"
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
#define RICHEDIT_CLASS20A "RichEdit20A"
#define inline __inline
#define EE_CHARSET 1010101
#define WINE_TRACE(...) do { } while (0)
#define WINE_WARN(...) do { } while (0)
#define WINE_ERR(...) do { } while (0)
#define strcasecmp(a,b) _stricmp(a,b)
#define debugstr_a(a) a

#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "comctl32.lib")
#pragma comment(lib, "comdlg32.lib")
#pragma comment(lib, "shell32.lib")
