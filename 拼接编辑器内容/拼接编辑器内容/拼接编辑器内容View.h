
// ƴ�ӱ༭������View.h : Cƴ�ӱ༭������View ��Ľӿ�
//

#pragma once


class Cƴ�ӱ༭������View : public CView
{
protected: // �������л�����
	Cƴ�ӱ༭������View();
	DECLARE_DYNCREATE(Cƴ�ӱ༭������View)

// ����
public:
	Cƴ�ӱ༭������Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cƴ�ӱ༭������View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPinjie();
};

#ifndef _DEBUG  // ƴ�ӱ༭������View.cpp �еĵ��԰汾
inline Cƴ�ӱ༭������Doc* Cƴ�ӱ༭������View::GetDocument() const
   { return reinterpret_cast<Cƴ�ӱ༭������Doc*>(m_pDocument); }
#endif

