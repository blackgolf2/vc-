
// 鼠标拿起一个矩形放下View.h : C鼠标拿起一个矩形放下View 类的接口
//

#pragma once


class C鼠标拿起一个矩形放下View : public CView
{
protected: // 仅从序列化创建
	C鼠标拿起一个矩形放下View();
	DECLARE_DYNCREATE(C鼠标拿起一个矩形放下View)

// 特性
public:
	C鼠标拿起一个矩形放下Doc* GetDocument() const;

// 操作
public:
	CPoint point1;
	CRect cr;
	CArray < CRect, CRect&> ca;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C鼠标拿起一个矩形放下View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 鼠标拿起一个矩形放下View.cpp 中的调试版本
inline C鼠标拿起一个矩形放下Doc* C鼠标拿起一个矩形放下View::GetDocument() const
   { return reinterpret_cast<C鼠标拿起一个矩形放下Doc*>(m_pDocument); }
#endif

