
// 第五周-渐变圆View.cpp : C第五周渐变圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第五周-渐变圆.h"
#endif

#include "第五周-渐变圆Doc.h"
#include "第五周-渐变圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第五周渐变圆View

IMPLEMENT_DYNCREATE(C第五周渐变圆View, CView)

BEGIN_MESSAGE_MAP(C第五周渐变圆View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第五周渐变圆View 构造/析构

C第五周渐变圆View::C第五周渐变圆View()
{
	// TODO: 在此处添加构造代码
	CString  str;
}

C第五周渐变圆View::~C第五周渐变圆View()
{
	CString  str;
}

BOOL C第五周渐变圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第五周渐变圆View 绘制

void C第五周渐变圆View::OnDraw(CDC* /*pDC*/)
{
	C第五周渐变圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int x = 10, y = 10;
	// TODO: 在此处为本机数据添加绘制代码
}


// C第五周渐变圆View 诊断

#ifdef _DEBUG
void C第五周渐变圆View::AssertValid() const
{
	CView::AssertValid();
}

void C第五周渐变圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第五周渐变圆Doc* C第五周渐变圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第五周渐变圆Doc)));
	return (C第五周渐变圆Doc*)m_pDocument;
}
#endif //_DEBUG


// C第五周渐变圆View 消息处理程序


void C第五周渐变圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	str.Format("%d,%d", point.x, point.y);
	CDC *pDC = GetDC();

	pDC->Ellipse(point.x - r, point.y - r, point.x + r, point.y + r);


	CView::OnLButtonDown(nFlags, point);
	

}
