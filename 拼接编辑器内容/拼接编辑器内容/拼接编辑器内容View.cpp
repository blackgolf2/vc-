
// ƴ�ӱ༭������View.cpp : Cƴ�ӱ༭������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ƴ�ӱ༭������.h"
#endif

#include "ƴ�ӱ༭������Doc.h"
#include "ƴ�ӱ༭������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cƴ�ӱ༭������View

IMPLEMENT_DYNCREATE(Cƴ�ӱ༭������View, CView)

BEGIN_MESSAGE_MAP(Cƴ�ӱ༭������View, CView)
	ON_COMMAND(ID_PINJIE, &Cƴ�ӱ༭������View::OnPinjie)
END_MESSAGE_MAP()

// Cƴ�ӱ༭������View ����/����

Cƴ�ӱ༭������View::Cƴ�ӱ༭������View()
{
	// TODO: �ڴ˴���ӹ������

}

Cƴ�ӱ༭������View::~Cƴ�ӱ༭������View()
{
}

BOOL Cƴ�ӱ༭������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cƴ�ӱ༭������View ����

void Cƴ�ӱ༭������View::OnDraw(CDC* /*pDC*/)
{
	Cƴ�ӱ༭������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cƴ�ӱ༭������View ���

#ifdef _DEBUG
void Cƴ�ӱ༭������View::AssertValid() const
{
	CView::AssertValid();
}

void Cƴ�ӱ༭������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cƴ�ӱ༭������Doc* Cƴ�ӱ༭������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cƴ�ӱ༭������Doc)));
	return (Cƴ�ӱ༭������Doc*)m_pDocument;
}
#endif //_DEBUG


// Cƴ�ӱ༭������View ��Ϣ�������


void Cƴ�ӱ༭������View::OnPinjie()
{
	MyDlg3 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		/*CString s1;
		s1.Format(_T("%s"), dlg.s);
		GetDC()->TextOutW(200, 300, s1);*/
	}
	// TODO: �ڴ���������������
}
