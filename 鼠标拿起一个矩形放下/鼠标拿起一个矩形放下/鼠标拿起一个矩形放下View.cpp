
// 鼠标拿起一个矩形放下View.cpp : C鼠标拿起一个矩形放下View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "鼠标拿起一个矩形放下.h"
#endif

#include "鼠标拿起一个矩形放下Doc.h"
#include "鼠标拿起一个矩形放下View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C鼠标拿起一个矩形放下View

IMPLEMENT_DYNCREATE(C鼠标拿起一个矩形放下View, CView)

BEGIN_MESSAGE_MAP(C鼠标拿起一个矩形放下View, CView)
//	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C鼠标拿起一个矩形放下View 构造/析构

C鼠标拿起一个矩形放下View::C鼠标拿起一个矩形放下View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(500);
	cr.bottom = 300;
	cr.right = 300;
	cr.top = 200;
	cr.left = 200;

}

C鼠标拿起一个矩形放下View::~C鼠标拿起一个矩形放下View()
{
}

BOOL C鼠标拿起一个矩形放下View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C鼠标拿起一个矩形放下View 绘制

void C鼠标拿起一个矩形放下View::OnDraw(CDC* pDC)
{
	C鼠标拿起一个矩形放下Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	pDC->Rectangle(cr);
	
	this->Invalidate();
	
	

	// TODO: 在此处为本机数据添加绘制代码
}


// C鼠标拿起一个矩形放下View 诊断

#ifdef _DEBUG
void C鼠标拿起一个矩形放下View::AssertValid() const
{
	CView::AssertValid();
}

void C鼠标拿起一个矩形放下View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C鼠标拿起一个矩形放下Doc* C鼠标拿起一个矩形放下View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C鼠标拿起一个矩形放下Doc)));
	return (C鼠标拿起一个矩形放下Doc*)m_pDocument;
}
#endif //_DEBUG


// C鼠标拿起一个矩形放下View 消息处理程序


//void C鼠标拿起一个矩形放下View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//	
//	
//	CView::OnLButtonDown(nFlags, point);
//}


void C鼠标拿起一个矩形放下View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	point1 = point;

	cr.bottom = point1.y;
	cr.right = point1.x;
	cr.top = point1.y - 100;
	cr.left = point1.x - 100;
	
	CView::OnLButtonUp(nFlags, point);
}
