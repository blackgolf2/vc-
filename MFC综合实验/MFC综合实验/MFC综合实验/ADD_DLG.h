#pragma once


// ADD_DLG �Ի���

class ADD_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_DLG)

public:
	ADD_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ADD_DLG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString name1;
	CString number1;
	CString major1;
	CString sex1;
	CString birth;
	double phone1;
	CString home1;
	CString pic1;
};
