
// ƴ�ӱ༭������.h : ƴ�ӱ༭������ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������
#include "MyDlg3.h"

// Cƴ�ӱ༭������App:
// �йش����ʵ�֣������ ƴ�ӱ༭������.cpp
//

class Cƴ�ӱ༭������App : public CWinAppEx
{
public:
	Cƴ�ӱ༭������App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cƴ�ӱ༭������App theApp;
