// Search.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC�ۺ�ʵ��.h"
#include "Search.h"
#include "afxdialogex.h"


// Search �Ի���

IMPLEMENT_DYNAMIC(Search, CDialogEx)

Search::Search(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG5, pParent)
	, search(_T(""))
{

}

Search::~Search()
{
}

void Search::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, search);
}


BEGIN_MESSAGE_MAP(Search, CDialogEx)
END_MESSAGE_MAP()


// Search ��Ϣ�������
