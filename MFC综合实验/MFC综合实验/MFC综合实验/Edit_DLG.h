#pragma once


// Edit_DLG �Ի���

class Edit_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(Edit_DLG)

public:
	Edit_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Edit_DLG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString name;
	CString number;
	CString major;
	CString sex;
	CString birth;
	double phone;
	CString home;
	CString pic;
	virtual BOOL OnInitDialog();
};
