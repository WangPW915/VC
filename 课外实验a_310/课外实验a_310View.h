
// ����ʵ��a_310View.h : C����ʵ��a_310View ��Ľӿ�
//

#pragma once


class C����ʵ��a_310View : public CView
{
protected: // �������л�����
	C����ʵ��a_310View();
	DECLARE_DYNCREATE(C����ʵ��a_310View)

// ����
public:
	C����ʵ��a_310Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~C����ʵ��a_310View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ����ʵ��a_310View.cpp �еĵ��԰汾
inline C����ʵ��a_310Doc* C����ʵ��a_310View::GetDocument() const
   { return reinterpret_cast<C����ʵ��a_310Doc*>(m_pDocument); }
#endif

