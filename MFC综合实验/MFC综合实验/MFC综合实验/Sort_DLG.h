#pragma once


// Sort_DLG �Ի���

class Sort_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(Sort_DLG)

public:
	Sort_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Sort_DLG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString sort;
};
