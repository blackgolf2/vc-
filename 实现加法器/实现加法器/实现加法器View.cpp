
// 实现加法器View.cpp : C实现加法器View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实现加法器.h"
#endif

#include "实现加法器Doc.h"
#include "实现加法器View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实现加法器View

IMPLEMENT_DYNCREATE(C实现加法器View, CView)

BEGIN_MESSAGE_MAP(C实现加法器View, CView)
	ON_COMMAND(ID_add, &C实现加法器View::Onadd)
END_MESSAGE_MAP()

// C实现加法器View 构造/析构

C实现加法器View::C实现加法器View()
{
	// TODO: 在此处添加构造代码

}

C实现加法器View::~C实现加法器View()
{
}

BOOL C实现加法器View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实现加法器View 绘制

void C实现加法器View::OnDraw(CDC* /*pDC*/)
{
	C实现加法器Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C实现加法器View 诊断

#ifdef _DEBUG
void C实现加法器View::AssertValid() const
{
	CView::AssertValid();
}

void C实现加法器View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实现加法器Doc* C实现加法器View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实现加法器Doc)));
	return (C实现加法器Doc*)m_pDocument;
}
#endif //_DEBUG


// C实现加法器View 消息处理程序


void C实现加法器View::Onadd()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg2 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		/*CString s1;
		s1.Format(_T("%s"), dlg.s);
		GetDC()->TextOutW(200, 300, s1);*/
	}
}
