
// �������һ�����η���.h : �������һ�����η��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�������һ�����η���App:
// �йش����ʵ�֣������ �������һ�����η���.cpp
//

class C�������һ�����η���App : public CWinAppEx
{
public:
	C�������һ�����η���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�������һ�����η���App theApp;
