
// 拼接编辑器内容View.h : C拼接编辑器内容View 类的接口
//

#pragma once


class C拼接编辑器内容View : public CView
{
protected: // 仅从序列化创建
	C拼接编辑器内容View();
	DECLARE_DYNCREATE(C拼接编辑器内容View)

// 特性
public:
	C拼接编辑器内容Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C拼接编辑器内容View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPinjie();
};

#ifndef _DEBUG  // 拼接编辑器内容View.cpp 中的调试版本
inline C拼接编辑器内容Doc* C拼接编辑器内容View::GetDocument() const
   { return reinterpret_cast<C拼接编辑器内容Doc*>(m_pDocument); }
#endif

