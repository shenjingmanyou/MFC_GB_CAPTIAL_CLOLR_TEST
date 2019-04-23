
// gb_captical_modify.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// Cgb_captical_modifyApp: 
// 有关此类的实现，请参阅 gb_captical_modify.cpp
//

class Cgb_captical_modifyApp : public CWinApp
{
public:
	Cgb_captical_modifyApp();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern Cgb_captical_modifyApp theApp;