// MyDlg3.cpp : 实现文件
//

#include "stdafx.h"
#include "拼接编辑器内容.h"
#include "MyDlg3.h"
#include "afxdialogex.h"


// MyDlg3 对话框

IMPLEMENT_DYNAMIC(MyDlg3, CDialogEx)

MyDlg3::MyDlg3(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(_T(""))
	, y(0)
	, r(_T(""))
{

}

MyDlg3::~MyDlg3()
{
}

void MyDlg3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, r);
}


BEGIN_MESSAGE_MAP(MyDlg3, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg3::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg3 消息处理程序


void MyDlg3::OnBnClickedButton1()
{
	this->UpdateData(true);
	CString s;
	s.Format(_T("%d"), y);
	r = s+x;
	UpdateData(false);
	
	
	// TODO: 在此添加控件通知处理程序代码
}
