
// �����༭����������View.cpp : C�����༭����������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�����༭����������.h"
#endif

#include "�����༭����������Doc.h"
#include "�����༭����������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�����༭����������View

IMPLEMENT_DYNCREATE(C�����༭����������View, CView)

BEGIN_MESSAGE_MAP(C�����༭����������View, CView)
	ON_COMMAND(ID_CHANGEBOOK, &C�����༭����������View::OnChangebook)
END_MESSAGE_MAP()

// C�����༭����������View ����/����

C�����༭����������View::C�����༭����������View()
{
	// TODO: �ڴ˴���ӹ������

}

C�����༭����������View::~C�����༭����������View()
{
}

BOOL C�����༭����������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�����༭����������View ����

void C�����༭����������View::OnDraw(CDC* /*pDC*/)
{
	C�����༭����������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�����༭����������View ���

#ifdef _DEBUG
void C�����༭����������View::AssertValid() const
{
	CView::AssertValid();
}

void C�����༭����������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�����༭����������Doc* C�����༭����������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�����༭����������Doc)));
	return (C�����༭����������Doc*)m_pDocument;
}
#endif //_DEBUG


// C�����༭����������View ��Ϣ�������


void C�����༭����������View::OnChangebook()
{
	// TODO: �ڴ���������������
	MyDlg1 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		/*CString s1;
		s1.Format(_T("%s"), dlg.s);
		GetDC()->TextOutW(200, 300, s1);*/
	}
}
