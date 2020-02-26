
// MRC_creator.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMRCcreatorApp:
// See MRC_creator.cpp for the implementation of this class
//

class CMRCcreatorApp : public CWinApp
{
public:
	CMRCcreatorApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMRCcreatorApp theApp;
