
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // Exclude rarely-used stuff from Windows headers
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit

// turns off MFC's hiding of some common and often safely ignored warning messages
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions


#include <afxdisp.h>        // MFC Automation classes



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC support for Internet Explorer 4 Common Controls
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // MFC support for ribbons and control bars


#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


#include "resource.h"

#include <vector>;
using std::vector;

#include <utility>
using std::pair;

const int Coord_Mid[9][2] = {
	{0, 0},
	{1, 0},
	{0, -1},
	{-1, 0},
	{0, 1},
	{1, -1},
	{-1, -1},
	{-1, 1},
	{1, 1}
};

const int Coord_Left[9][2] = {
	{0, 0},
	{1, 0},
	{0, -1},
	{0, 1},
	{1, -1},
	{1, 1}
};

const int Coord_Right[9][2] = {
	{0, 0},
	{0, -1},
	{-1, 0},
	{0, 1},
	{-1, -1},
	{-1, 1},
};

const int Coord_Bottom[9][2] = {
	{0, 0},
	{1, 0},
	{0, -1},
	{-1, 0},
	{1, -1},
	{-1, -1},
};

const int Coord_Top[9][2] = {
	{0, 0},
	{1, 0},
	{-1, 0},
	{0, 1},
	{-1, 1},
	{1, 1}
};

const int Coord_Left_Top[9][2] = {
	{0, 0},
	{1, 0},
	{0, 1},
	{1, 1}
};

const int Coord_Right_Top[9][2] = {
	{0, 0},
	{-1, 0},
	{0, 1},
	{-1, 1},
};

const int Coord_Left_Bottom[9][2] = {
	{0, 0},
	{1, 0},
	{0, -1},
	{1, -1},
};

const int Coord_Right_Bottom[9][2] = {
	{0, 0},
	{0, -1},
	{-1, 0},
	{-1, -1},
};

#define NEIGHBOUR_GRID_COUNT 9
#define NEIGHBOURS_BOUNDARY_COUNT 6
#define NEIGHBOURS_CORNER_COUNT 4
