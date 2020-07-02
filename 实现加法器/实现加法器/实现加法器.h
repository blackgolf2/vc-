
// 实现加法器.h : 实现加法器 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号
#include "MyDlg2.h" 

// C实现加法器App:
// 有关此类的实现，请参阅 实现加法器.cpp
//

class C实现加法器App : public CWinAppEx
{
public:
	C实现加法器App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C实现加法器App theApp;
