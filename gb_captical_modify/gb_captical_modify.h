
// gb_captical_modify.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cgb_captical_modifyApp: 
// �йش����ʵ�֣������ gb_captical_modify.cpp
//

class Cgb_captical_modifyApp : public CWinApp
{
public:
	Cgb_captical_modifyApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cgb_captical_modifyApp theApp;