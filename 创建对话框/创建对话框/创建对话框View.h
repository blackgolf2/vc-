
// �����Ի���View.h : C�����Ի���View ��Ľӿ�
//

#pragma once


class C�����Ի���View : public CView
{
protected: // �������л�����
	C�����Ի���View();
	DECLARE_DYNCREATE(C�����Ի���View)

// ����
public:
	C�����Ի���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�����Ի���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowchar();
};

#ifndef _DEBUG  // �����Ի���View.cpp �еĵ��԰汾
inline C�����Ի���Doc* C�����Ի���View::GetDocument() const
   { return reinterpret_cast<C�����Ի���Doc*>(m_pDocument); }
#endif

