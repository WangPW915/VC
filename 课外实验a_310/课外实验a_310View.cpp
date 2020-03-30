
// 课外实验a_310View.cpp : C课外实验a_310View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "课外实验a_310.h"
#endif

#include "课外实验a_310Doc.h"
#include "课外实验a_310View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C课外实验a_310View

IMPLEMENT_DYNCREATE(C课外实验a_310View, CView)

BEGIN_MESSAGE_MAP(C课外实验a_310View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C课外实验a_310View 构造/析构

C课外实验a_310View::C课外实验a_310View()
{
	// TODO:  在此处添加构造代码

}

C课外实验a_310View::~C课外实验a_310View()
{
}

BOOL C课外实验a_310View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C课外实验a_310View 绘制

void C课外实验a_310View::OnDraw(CDC* /*pDC*/)
{
	C课外实验a_310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// C课外实验a_310View 打印

BOOL C课外实验a_310View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C课外实验a_310View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void C课外实验a_310View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// C课外实验a_310View 诊断

#ifdef _DEBUG
void C课外实验a_310View::AssertValid() const
{
	CView::AssertValid();
}

void C课外实验a_310View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C课外实验a_310Doc* C课外实验a_310View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C课外实验a_310Doc)));
	return (C课外实验a_310Doc*)m_pDocument;
}
#endif //_DEBUG


// C课外实验a_310View 消息处理程序


void C课外实验a_310View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	C课外实验a_310Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect rect(30, 45, 250, 200);
	dc.Rectangle(&rect);
	CRect ran(300, 45, 600, 200);
	dc.Rectangle(&ran);
	CRect redt(700, 45, 800, 200);
	dc.Rectangle(&redt);

	int a=
	CView::OnLButtonDown(nFlags, point);
}
