// Traver_DLG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC�ۺ�ʵ��.h"
#include "Traver_DLG.h"
#include "afxdialogex.h"


// Traver_DLG �Ի���

IMPLEMENT_DYNAMIC(Traver_DLG, CDialogEx)

Traver_DLG::Traver_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG6, pParent)
	, str(_T(""))
{

}

Traver_DLG::~Traver_DLG()
{
}

void Traver_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, str);
}


BEGIN_MESSAGE_MAP(Traver_DLG, CDialogEx)
END_MESSAGE_MAP()


// Traver_DLG ��Ϣ�������
