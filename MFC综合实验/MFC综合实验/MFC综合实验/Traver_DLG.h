#pragma once


// Traver_DLG �Ի���

class Traver_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(Traver_DLG)

public:
	Traver_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Traver_DLG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString str;
};
