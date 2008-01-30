// schschView.cpp : implementation of the CSchschView class
//

#include "stdafx.h"
#include "schsch.h"

#include "schschDoc.h"
#include "schschView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSchschView

IMPLEMENT_DYNCREATE(CSchschView, CView)

BEGIN_MESSAGE_MAP(CSchschView, CView)
	//{{AFX_MSG_MAP(CSchschView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSchschView construction/destruction

CSchschView::CSchschView()
{
	// TODO: add construction code here

}

CSchschView::~CSchschView()
{
}

BOOL CSchschView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSchschView drawing

void CSchschView::OnDraw(CDC* pDC)
{
	CSchschDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSchschView printing

BOOL CSchschView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSchschView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSchschView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CSchschView diagnostics

#ifdef _DEBUG
void CSchschView::AssertValid() const
{
	CView::AssertValid();
}

void CSchschView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSchschDoc* CSchschView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSchschDoc)));
	return (CSchschDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSchschView message handlers
