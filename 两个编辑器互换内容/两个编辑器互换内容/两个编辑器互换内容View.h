
// �����༭����������View.h : C�����༭����������View ��Ľӿ�
//

#pragma once


class C�����༭����������View : public CView
{
protected: // �������л�����
	C�����༭����������View();
	DECLARE_DYNCREATE(C�����༭����������View)

// ����
public:
	C�����༭����������Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�����༭����������View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChangebook();
};

#ifndef _DEBUG  // �����༭����������View.cpp �еĵ��԰汾
inline C�����༭����������Doc* C�����༭����������View::GetDocument() const
   { return reinterpret_cast<C�����༭����������Doc*>(m_pDocument); }
#endif

