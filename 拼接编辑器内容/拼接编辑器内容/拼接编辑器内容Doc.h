
// ƴ�ӱ༭������Doc.h : Cƴ�ӱ༭������Doc ��Ľӿ�
//


#pragma once


class Cƴ�ӱ༭������Doc : public CDocument
{
protected: // �������л�����
	Cƴ�ӱ༭������Doc();
	DECLARE_DYNCREATE(Cƴ�ӱ༭������Doc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cƴ�ӱ༭������Doc();
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
