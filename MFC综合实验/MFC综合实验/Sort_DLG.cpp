// Sort_DLG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC�ۺ�ʵ��.h"
#include "Sort_DLG.h"
#include "afxdialogex.h"


// Sort_DLG �Ի���

IMPLEMENT_DYNAMIC(Sort_DLG, CDialogEx)

Sort_DLG::Sort_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG4, pParent)
	, sort(_T(""))
{

}

Sort_DLG::~Sort_DLG()
{
}

void Sort_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, sort);
}


BEGIN_MESSAGE_MAP(Sort_DLG, CDialogEx)
END_MESSAGE_MAP()


// Sort_DLG ��Ϣ�������
