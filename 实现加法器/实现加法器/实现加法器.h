
// ʵ�ּӷ���.h : ʵ�ּӷ��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������
#include "MyDlg2.h" 

// Cʵ�ּӷ���App:
// �йش����ʵ�֣������ ʵ�ּӷ���.cpp
//

class Cʵ�ּӷ���App : public CWinAppEx
{
public:
	Cʵ�ּӷ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ�ּӷ���App theApp;
