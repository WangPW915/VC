
// 课外实验a_310View.h : C课外实验a_310View 类的接口
//

#pragma once


class C课外实验a_310View : public CView
{
protected: // 仅从序列化创建
	C课外实验a_310View();
	DECLARE_DYNCREATE(C课外实验a_310View)

// 特性
public:
	C课外实验a_310Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~C课外实验a_310View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 课外实验a_310View.cpp 中的调试版本
inline C课外实验a_310Doc* C课外实验a_310View::GetDocument() const
   { return reinterpret_cast<C课外实验a_310Doc*>(m_pDocument); }
#endif

