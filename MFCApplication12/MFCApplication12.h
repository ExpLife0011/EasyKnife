
// MFCApplication12.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCApplication12App: 
// �йش����ʵ�֣������ MFCApplication12.cpp
//

class CMFCApplication12App : public CWinApp
{
public:
	CMFCApplication12App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication12App theApp;