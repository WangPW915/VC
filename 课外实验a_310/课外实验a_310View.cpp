
// ����ʵ��a_310View.cpp : C����ʵ��a_310View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "����ʵ��a_310.h"
#endif

#include "����ʵ��a_310Doc.h"
#include "����ʵ��a_310View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C����ʵ��a_310View

IMPLEMENT_DYNCREATE(C����ʵ��a_310View, CView)

BEGIN_MESSAGE_MAP(C����ʵ��a_310View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C����ʵ��a_310View ����/����

C����ʵ��a_310View::C����ʵ��a_310View()
{
	// TODO:  �ڴ˴���ӹ������

}

C����ʵ��a_310View::~C����ʵ��a_310View()
{
}

BOOL C����ʵ��a_310View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C����ʵ��a_310View ����

void C����ʵ��a_310View::OnDraw(CDC* /*pDC*/)
{
	C����ʵ��a_310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C����ʵ��a_310View ��ӡ

BOOL C����ʵ��a_310View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C����ʵ��a_310View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C����ʵ��a_310View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// C����ʵ��a_310View ���

#ifdef _DEBUG
void C����ʵ��a_310View::AssertValid() const
{
	CView::AssertValid();
}

void C����ʵ��a_310View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C����ʵ��a_310Doc* C����ʵ��a_310View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C����ʵ��a_310Doc)));
	return (C����ʵ��a_310Doc*)m_pDocument;
}
#endif //_DEBUG


// C����ʵ��a_310View ��Ϣ�������


void C����ʵ��a_310View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C����ʵ��a_310Doc* pDoc = GetDocument();
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
