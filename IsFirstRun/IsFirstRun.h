
// IsFirstRun.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CIsFirstRunApp: 
// �йش����ʵ�֣������ IsFirstRun.cpp
//

class CIsFirstRunApp : public CWinApp
{
public:
	CIsFirstRunApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()

	
};

extern CIsFirstRunApp theApp;