
// �����Ի���View.cpp : C�����Ի���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�����Ի���.h"
#endif

#include "�����Ի���Doc.h"
#include "�����Ի���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�����Ի���View

IMPLEMENT_DYNCREATE(C�����Ի���View, CView)

BEGIN_MESSAGE_MAP(C�����Ի���View, CView)
	ON_COMMAND(ID_Showchar, &C�����Ի���View::OnShowchar)
END_MESSAGE_MAP()

// C�����Ի���View ����/����

C�����Ի���View::C�����Ի���View()
{
	// TODO: �ڴ˴���ӹ������

}

C�����Ի���View::~C�����Ի���View()
{
}

BOOL C�����Ի���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�����Ի���View ����

void C�����Ի���View::OnDraw(CDC* /*pDC*/)
{
	C�����Ի���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�����Ի���View ���

#ifdef _DEBUG
void C�����Ի���View::AssertValid() const
{
	CView::AssertValid();
}

void C�����Ի���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�����Ի���Doc* C�����Ի���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�����Ի���Doc)));
	return (C�����Ի���Doc*)m_pDocument;
}
#endif //_DEBUG


// C�����Ի���View ��Ϣ�������


void C�����Ի���View::OnShowchar()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s1;
		s1 .Format( _T("%s"),dlg.s2);
		GetDC()->TextOutW(200, 300, s1);
	}
}
