
// �������һ�����η���View.h : C�������һ�����η���View ��Ľӿ�
//

#pragma once


class C�������һ�����η���View : public CView
{
protected: // �������л�����
	C�������һ�����η���View();
	DECLARE_DYNCREATE(C�������һ�����η���View)

// ����
public:
	C�������һ�����η���Doc* GetDocument() const;

// ����
public:
	CPoint point1;
	CRect cr;
	CArray < CRect, CRect&> ca;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�������һ�����η���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // �������һ�����η���View.cpp �еĵ��԰汾
inline C�������һ�����η���Doc* C�������һ�����η���View::GetDocument() const
   { return reinterpret_cast<C�������һ�����η���Doc*>(m_pDocument); }
#endif

