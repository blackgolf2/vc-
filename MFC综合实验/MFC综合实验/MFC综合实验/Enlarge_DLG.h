#pragma once


// Enlarge_DLG �Ի���

class Enlarge_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(Enlarge_DLG)

public:
	Enlarge_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Enlarge_DLG();
	CString fil;
	CRect picRect;
	virtual void drawPicture(CString filename);
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
};
