
// �����༭����������.h : �����༭���������� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������
#include "MyDlg1.h" 

// C�����༭����������App:
// �йش����ʵ�֣������ �����༭����������.cpp
//

class C�����༭����������App : public CWinAppEx
{
public:
	C�����༭����������App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�����༭����������App theApp;
