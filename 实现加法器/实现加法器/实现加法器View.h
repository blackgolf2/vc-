
// 实现加法器View.h : C实现加法器View 类的接口
//

#pragma once


class C实现加法器View : public CView
{
protected: // 仅从序列化创建
	C实现加法器View();
	DECLARE_DYNCREATE(C实现加法器View)

// 特性
public:
	C实现加法器Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C实现加法器View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onadd();
};

#ifndef _DEBUG  // 实现加法器View.cpp 中的调试版本
inline C实现加法器Doc* C实现加法器View::GetDocument() const
   { return reinterpret_cast<C实现加法器Doc*>(m_pDocument); }
#endif

