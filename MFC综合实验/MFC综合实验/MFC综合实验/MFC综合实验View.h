
// MFC�ۺ�ʵ��View.h : CMFC�ۺ�ʵ��View ��Ľӿ�
//

#pragma once

class CMFC�ۺ�ʵ��Set;

class CMFC�ۺ�ʵ��View : public CRecordView
{
protected: // �������л�����
	CMFC�ۺ�ʵ��View();
	DECLARE_DYNCREATE(CMFC�ۺ�ʵ��View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MFC_FORM };
#endif
	CMFC�ۺ�ʵ��Set* m_pSet;

// ����
public:
	CMFC�ۺ�ʵ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMFC�ۺ�ʵ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	CString number;
	CString major;
	CString sex;
	CString birth;
	double phone;
	CString home;
	CString pic_add;
	CString file;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedEnlarge();
	virtual void drawPicture(CString filename);
	virtual void OnDraw(CDC* /*pDC*/);
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedEdit();
	afx_msg void OnBnClickedSortButton();
	afx_msg void OnBnClickedSearch();
	afx_msg void OnBnClickedTraversal();
	afx_msg void OnBnClickedRecover();
};

#ifndef _DEBUG  // MFC�ۺ�ʵ��View.cpp �еĵ��԰汾
inline CMFC�ۺ�ʵ��Doc* CMFC�ۺ�ʵ��View::GetDocument() const
   { return reinterpret_cast<CMFC�ۺ�ʵ��Doc*>(m_pDocument); }
#endif

