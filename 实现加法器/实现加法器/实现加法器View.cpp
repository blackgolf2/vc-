
// ʵ�ּӷ���View.cpp : Cʵ�ּӷ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ�ּӷ���.h"
#endif

#include "ʵ�ּӷ���Doc.h"
#include "ʵ�ּӷ���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ�ּӷ���View

IMPLEMENT_DYNCREATE(Cʵ�ּӷ���View, CView)

BEGIN_MESSAGE_MAP(Cʵ�ּӷ���View, CView)
	ON_COMMAND(ID_add, &Cʵ�ּӷ���View::Onadd)
END_MESSAGE_MAP()

// Cʵ�ּӷ���View ����/����

Cʵ�ּӷ���View::Cʵ�ּӷ���View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ�ּӷ���View::~Cʵ�ּӷ���View()
{
}

BOOL Cʵ�ּӷ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ�ּӷ���View ����

void Cʵ�ּӷ���View::OnDraw(CDC* /*pDC*/)
{
	Cʵ�ּӷ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ�ּӷ���View ���

#ifdef _DEBUG
void Cʵ�ּӷ���View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ�ּӷ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ�ּӷ���Doc* Cʵ�ּӷ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ�ּӷ���Doc)));
	return (Cʵ�ּӷ���Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ�ּӷ���View ��Ϣ�������


void Cʵ�ּӷ���View::Onadd()
{
	// TODO: �ڴ���������������
	MyDlg2 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		/*CString s1;
		s1.Format(_T("%s"), dlg.s);
		GetDC()->TextOutW(200, 300, s1);*/
	}
}
