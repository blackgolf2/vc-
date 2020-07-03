
// MFC�ۺ�ʵ��View.cpp : CMFC�ۺ�ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�ۺ�ʵ��.h"
#endif

#include "MFC�ۺ�ʵ��Set.h"
#include "MFC�ۺ�ʵ��Doc.h"
#include "MFC�ۺ�ʵ��View.h"
#include"Enlarge_DLG.h"
#include"ADD_DLG.h"
#include"Edit_DLG.h"
#include"Sort_DLG.h"
#include"Search.h"
#include"Traver_DLG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC�ۺ�ʵ��View

IMPLEMENT_DYNCREATE(CMFC�ۺ�ʵ��View, CRecordView)

BEGIN_MESSAGE_MAP(CMFC�ۺ�ʵ��View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CMFC�ۺ�ʵ��View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CMFC�ۺ�ʵ��View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CMFC�ۺ�ʵ��View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CMFC�ۺ�ʵ��View::OnRecordLast)
	ON_BN_CLICKED(IDC_Enlarge, &CMFC�ۺ�ʵ��View::OnBnClickedEnlarge)
	ON_BN_CLICKED(IDC_ADD, &CMFC�ۺ�ʵ��View::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_Delete, &CMFC�ۺ�ʵ��View::OnBnClickedDelete)
	ON_BN_CLICKED(IDC_Edit, &CMFC�ۺ�ʵ��View::OnBnClickedEdit)
	ON_BN_CLICKED(IDC_Sort_Button, &CMFC�ۺ�ʵ��View::OnBnClickedSortButton)
	ON_BN_CLICKED(IDC_Search, &CMFC�ۺ�ʵ��View::OnBnClickedSearch)
	ON_BN_CLICKED(IDC_Traversal, &CMFC�ۺ�ʵ��View::OnBnClickedTraversal)
	ON_BN_CLICKED(IDC_Recover, &CMFC�ۺ�ʵ��View::OnBnClickedRecover)
END_MESSAGE_MAP()

// CMFC�ۺ�ʵ��View ����/����

CMFC�ۺ�ʵ��View::CMFC�ۺ�ʵ��View()
	: CRecordView(IDD_MFC_FORM)
	, name(_T(""))
	, number(_T(""))
	, major(_T(""))
	, sex(_T(""))
	, birth(_T(""))
	, phone(0)
	, home(_T(""))
	, pic_add(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMFC�ۺ�ʵ��View::~CMFC�ۺ�ʵ��View()
{
}

void CMFC�ۺ�ʵ��View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->column8);
	Invalidate();
}

BOOL CMFC�ۺ�ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMFC�ۺ�ʵ��View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_MFC�ۺ�ʵ��Set;
	CRecordView::OnInitialUpdate();

}


// CMFC�ۺ�ʵ��View ���

#ifdef _DEBUG
void CMFC�ۺ�ʵ��View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMFC�ۺ�ʵ��View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMFC�ۺ�ʵ��Doc* CMFC�ۺ�ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC�ۺ�ʵ��Doc)));
	return (CMFC�ۺ�ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC�ۺ�ʵ��View ���ݿ�֧��
CRecordset* CMFC�ۺ�ʵ��View::OnGetRecordset()
{
	return m_pSet;
}



// CMFC�ۺ�ʵ��View ��Ϣ�������


void CMFC�ۺ�ʵ��View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
}


void CMFC�ۺ�ʵ��View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void CMFC�ۺ�ʵ��View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
}


void CMFC�ۺ�ʵ��View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
}

void  CMFC�ۺ�ʵ��View::drawPicture(CString filename)
{
	CImage img;
	img.Load(filename);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int w, h, sx, sy;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_radio = 1.0 * rect.Width() / rect.Height();
	float image_radio = 1.0 * img.GetWidth() / img.GetHeight();

	if (rect_radio > image_radio)
	{
		h = rect.Height();
		w = image_radio * h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / image_radio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}

void CMFC�ۺ�ʵ��View::OnBnClickedEnlarge()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Enlarge_DLG dlg;
	dlg.fil = m_pSet->column8;
	dlg.DoModal();
}


void CMFC�ۺ�ʵ��View::OnDraw(CDC* /*pDC*/)
{
	// TODO: �ڴ����ר�ô����/����û���
	file = m_pSet->column8;
	drawPicture(file);
}


void CMFC�ۺ�ʵ��View::OnBnClickedAdd()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD_DLG dlg;
	int t=dlg.DoModal();


	if (t == IDOK)
	{
		m_pSet->AddNew();
		m_pSet->column1 = dlg.name1;
		m_pSet->column2 = dlg.number1;;
		m_pSet->column3 =  dlg.major1;
		m_pSet->column4 = dlg.sex1;;
		m_pSet->column5 = dlg.birth;
		m_pSet->column6 = dlg.phone1;;
		m_pSet->column7 = dlg.home1;
		m_pSet->column8 = dlg.pic1;
		m_pSet->Update();
	    UpdateData(false);
	}
	
}


void CMFC�ۺ�ʵ��View::OnBnClickedDelete()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void CMFC�ۺ�ʵ��View::OnBnClickedEdit()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Edit_DLG dlg;
	
	  dlg.name = m_pSet->column1 ;
	  dlg.number= m_pSet->column2;
	  dlg.major= m_pSet->column3;
	 dlg.sex =m_pSet->column4;
	  dlg.birth=m_pSet->column5;
	  dlg.phone=m_pSet->column6;
	 dlg.home=m_pSet->column7 ;
	  dlg.pic=m_pSet->column8;
	  int t = dlg.DoModal();
	if(t==IDOK)
	{
		m_pSet->Edit();
		m_pSet->column1 = dlg.name;
		m_pSet->column2 = dlg.number;
		m_pSet->column3 = dlg.major;
		m_pSet->column4 = dlg.sex;;
		m_pSet->column5 = dlg.birth;
		m_pSet->column6 = dlg.phone;
		m_pSet->column7 = dlg.home;
		m_pSet->column8 = dlg.pic;
		m_pSet->Update();
		UpdateData(false);

	}
}


void CMFC�ۺ�ʵ��View::OnBnClickedSortButton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Sort_DLG sort_dlg;
	int t = sort_dlg.DoModal();
	if (t == IDOK)
	{
		m_pSet->m_strSort.Format(_T("%s"), sort_dlg.sort);
		m_pSet->Requery();
		UpdateData(false);
	}

}


void CMFC�ۺ�ʵ��View::OnBnClickedSearch()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Search re_dlg;
	int t = re_dlg.DoModal();
	if (t == IDOK)
	{

		m_pSet->m_strFilter.Format(_T("%s"), re_dlg.search);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CMFC�ۺ�ʵ��View::OnBnClickedTraversal()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Traver_DLG dlg;
	int n, i;
	CString st, s;

	m_pSet->MoveFirst();
	while (!m_pSet->IsEOF())

	{
		n = m_pSet->GetODBCFieldCount();


		for (i = 1; i < n; i++)
		{
			m_pSet->GetFieldValue((short)i, st);
			s += _T(" ") + st;
		}
		s += _T("\r\n");
		dlg.str = s;
		UpdateData(false);
		m_pSet->MoveNext();
	}
	if (dlg.DoModal() == IDOK)
	{

	}
}


void CMFC�ۺ�ʵ��View::OnBnClickedRecover()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->m_strFilter.Format(_T(""));
	m_pSet->m_strSort.Format(_T(""));
	m_pSet->Requery();
	UpdateData(false);
}
