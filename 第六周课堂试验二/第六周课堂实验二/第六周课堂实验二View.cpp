
// 第六周课堂实验二View.cpp : C第六周课堂实验二View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第六周课堂实验二.h"
#endif

#include "第六周课堂实验二Doc.h"
#include "第六周课堂实验二View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第六周课堂实验二View

IMPLEMENT_DYNCREATE(C第六周课堂实验二View, CView)

BEGIN_MESSAGE_MAP(C第六周课堂实验二View, CView)
	ON_WM_LBUTTONUP()
	ON_WM_CONTEXTMENU()
END_MESSAGE_MAP()

// C第六周课堂实验二View 构造/析构

C第六周课堂实验二View::C第六周课堂实验二View()
{
	// TODO: 在此处添加构造代码

}

C第六周课堂实验二View::~C第六周课堂实验二View()
{
}

BOOL C第六周课堂实验二View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第六周课堂实验二View 绘制

void C第六周课堂实验二View::OnDraw(CDC* /*pDC*/)
{
	C第六周课堂实验二Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第六周课堂实验二View 诊断

#ifdef _DEBUG
void C第六周课堂实验二View::AssertValid() const
{
	CView::AssertValid();
}

void C第六周课堂实验二View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第六周课堂实验二Doc* C第六周课堂实验二View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第六周课堂实验二Doc)));
	return (C第六周课堂实验二Doc*)m_pDocument;
}
#endif //_DEBUG


// C第六周课堂实验二View 消息处理程序



void C第六周课堂实验二View::OnChange()
{
	change *cr = new change;
	cr->Create(IDD_DIALOG1);
	cr->ShowWindow(1);

	// TODO: 在此添加命令处理程序代码
}
void C第六周课堂实验二View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	ClientToScreen(&point);
	OnContextMenu(this, point);
	CView::OnLButtonUp(nFlags, point);
}


void C第六周课堂实验二View::OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}
