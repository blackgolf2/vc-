
// �����Ի���.h : �����Ի��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������
#include "MyDlg0.h"

// C�����Ի���App:
// �йش����ʵ�֣������ �����Ի���.cpp
//

class C�����Ի���App : public CWinAppEx
{
public:
	C�����Ի���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�����Ի���App theApp;
