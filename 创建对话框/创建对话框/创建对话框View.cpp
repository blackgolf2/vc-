
// 创建对话框View.cpp : C创建对话框View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "创建对话框.h"
#endif

#include "创建对话框Doc.h"
#include "创建对话框View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C创建对话框View

IMPLEMENT_DYNCREATE(C创建对话框View, CView)

BEGIN_MESSAGE_MAP(C创建对话框View, CView)
	ON_COMMAND(ID_Showchar, &C创建对话框View::OnShowchar)
END_MESSAGE_MAP()

// C创建对话框View 构造/析构

C创建对话框View::C创建对话框View()
{
	// TODO: 在此处添加构造代码

}

C创建对话框View::~C创建对话框View()
{
}

BOOL C创建对话框View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C创建对话框View 绘制

void C创建对话框View::OnDraw(CDC* /*pDC*/)
{
	C创建对话框Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C创建对话框View 诊断

#ifdef _DEBUG
void C创建对话框View::AssertValid() const
{
	CView::AssertValid();
}

void C创建对话框View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C创建对话框Doc* C创建对话框View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C创建对话框Doc)));
	return (C创建对话框Doc*)m_pDocument;
}
#endif //_DEBUG


// C创建对话框View 消息处理程序


void C创建对话框View::OnShowchar()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s1;
		s1 .Format( _T("%s"),dlg.s2);
		GetDC()->TextOutW(200, 300, s1);
	}
}
