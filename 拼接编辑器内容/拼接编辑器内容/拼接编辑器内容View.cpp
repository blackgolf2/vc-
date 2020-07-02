
// 拼接编辑器内容View.cpp : C拼接编辑器内容View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "拼接编辑器内容.h"
#endif

#include "拼接编辑器内容Doc.h"
#include "拼接编辑器内容View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C拼接编辑器内容View

IMPLEMENT_DYNCREATE(C拼接编辑器内容View, CView)

BEGIN_MESSAGE_MAP(C拼接编辑器内容View, CView)
	ON_COMMAND(ID_PINJIE, &C拼接编辑器内容View::OnPinjie)
END_MESSAGE_MAP()

// C拼接编辑器内容View 构造/析构

C拼接编辑器内容View::C拼接编辑器内容View()
{
	// TODO: 在此处添加构造代码

}

C拼接编辑器内容View::~C拼接编辑器内容View()
{
}

BOOL C拼接编辑器内容View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C拼接编辑器内容View 绘制

void C拼接编辑器内容View::OnDraw(CDC* /*pDC*/)
{
	C拼接编辑器内容Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C拼接编辑器内容View 诊断

#ifdef _DEBUG
void C拼接编辑器内容View::AssertValid() const
{
	CView::AssertValid();
}

void C拼接编辑器内容View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C拼接编辑器内容Doc* C拼接编辑器内容View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C拼接编辑器内容Doc)));
	return (C拼接编辑器内容Doc*)m_pDocument;
}
#endif //_DEBUG


// C拼接编辑器内容View 消息处理程序


void C拼接编辑器内容View::OnPinjie()
{
	MyDlg3 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		/*CString s1;
		s1.Format(_T("%s"), dlg.s);
		GetDC()->TextOutW(200, 300, s1);*/
	}
	// TODO: 在此添加命令处理程序代码
}
