
// MFC�ۺ�ʵ��.h : MFC�ۺ�ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC�ۺ�ʵ��App:
// �йش����ʵ�֣������ MFC�ۺ�ʵ��.cpp
//

class CMFC�ۺ�ʵ��App : public CWinApp
{
public:
	CMFC�ۺ�ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC�ۺ�ʵ��App theApp;
