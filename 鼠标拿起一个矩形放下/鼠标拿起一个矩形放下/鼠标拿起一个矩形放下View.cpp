
// �������һ�����η���View.cpp : C�������һ�����η���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�������һ�����η���.h"
#endif

#include "�������һ�����η���Doc.h"
#include "�������һ�����η���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�������һ�����η���View

IMPLEMENT_DYNCREATE(C�������һ�����η���View, CView)

BEGIN_MESSAGE_MAP(C�������һ�����η���View, CView)
//	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C�������һ�����η���View ����/����

C�������һ�����η���View::C�������һ�����η���View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(500);
	cr.bottom = 300;
	cr.right = 300;
	cr.top = 200;
	cr.left = 200;

}

C�������һ�����η���View::~C�������һ�����η���View()
{
}

BOOL C�������һ�����η���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�������һ�����η���View ����

void C�������һ�����η���View::OnDraw(CDC* pDC)
{
	C�������һ�����η���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	pDC->Rectangle(cr);
	
	this->Invalidate();
	
	

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�������һ�����η���View ���

#ifdef _DEBUG
void C�������һ�����η���View::AssertValid() const
{
	CView::AssertValid();
}

void C�������һ�����η���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�������һ�����η���Doc* C�������һ�����η���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�������һ�����η���Doc)));
	return (C�������һ�����η���Doc*)m_pDocument;
}
#endif //_DEBUG


// C�������һ�����η���View ��Ϣ�������


//void C�������һ�����η���View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	
//	
//	CView::OnLButtonDown(nFlags, point);
//}


void C�������һ�����η���View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	point1 = point;

	cr.bottom = point1.y;
	cr.right = point1.x;
	cr.top = point1.y - 100;
	cr.left = point1.x - 100;
	
	CView::OnLButtonUp(nFlags, point);
}
