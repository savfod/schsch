// SchSchView.cpp : implementation of the CSchSchView class
//

#include "stdafx.h"
#include "SchSch.h"

#include "SchSchDoc.h"
#include "SchSchView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSchSchView

IMPLEMENT_DYNCREATE(CSchSchView, CView)

BEGIN_MESSAGE_MAP(CSchSchView, CView)
	//{{AFX_MSG_MAP(CSchSchView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSchSchView construction/destruction

CSchSchView::CSchSchView()
{
	// TODO: add construction code here

}

CSchSchView::~CSchSchView()
{
}

BOOL CSchSchView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSchSchView drawing

void CSchSchView::OnDraw(CDC* pDC)
{
	CSchSchDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSchSchView diagnostics

#ifdef _DEBUG
void CSchSchView::AssertValid() const
{
	CView::AssertValid();
}

void CSchSchView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSchSchDoc* CSchSchView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSchSchDoc)));
	return (CSchSchDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSchSchView message handlers
