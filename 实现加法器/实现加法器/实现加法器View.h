
// ʵ�ּӷ���View.h : Cʵ�ּӷ���View ��Ľӿ�
//

#pragma once


class Cʵ�ּӷ���View : public CView
{
protected: // �������л�����
	Cʵ�ּӷ���View();
	DECLARE_DYNCREATE(Cʵ�ּӷ���View)

// ����
public:
	Cʵ�ּӷ���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ�ּӷ���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onadd();
};

#ifndef _DEBUG  // ʵ�ּӷ���View.cpp �еĵ��԰汾
inline Cʵ�ּӷ���Doc* Cʵ�ּӷ���View::GetDocument() const
   { return reinterpret_cast<Cʵ�ּӷ���Doc*>(m_pDocument); }
#endif

