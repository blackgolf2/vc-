
// MFC�ۺ�ʵ��Doc.h : CMFC�ۺ�ʵ��Doc ��Ľӿ�
//


#pragma once
#include "MFC�ۺ�ʵ��Set.h"


class CMFC�ۺ�ʵ��Doc : public CDocument
{
protected: // �������л�����
	CMFC�ۺ�ʵ��Doc();
	DECLARE_DYNCREATE(CMFC�ۺ�ʵ��Doc)

// ����
public:
	CMFC�ۺ�ʵ��Set m_MFC�ۺ�ʵ��Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFC�ۺ�ʵ��Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
