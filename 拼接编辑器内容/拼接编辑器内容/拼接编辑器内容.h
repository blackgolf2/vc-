
// 拼接编辑器内容.h : 拼接编辑器内容 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号
#include "MyDlg3.h"

// C拼接编辑器内容App:
// 有关此类的实现，请参阅 拼接编辑器内容.cpp
//

class C拼接编辑器内容App : public CWinAppEx
{
public:
	C拼接编辑器内容App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C拼接编辑器内容App theApp;
