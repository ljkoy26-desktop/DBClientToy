
// jhproject.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CjhprojectApp:
// �� Ŭ������ ������ ���ؼ��� jhproject.cpp�� �����Ͻʽÿ�.
//

class CjhprojectApp : public CWinApp
{
public:
	CjhprojectApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CjhprojectApp theApp;