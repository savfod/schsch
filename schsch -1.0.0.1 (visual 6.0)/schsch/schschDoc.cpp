// schschDoc.cpp : implementation of the CSchschDoc class
//

#include "stdafx.h"
#include "schsch.h"

#include "schschDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSchschDoc

IMPLEMENT_DYNCREATE(CSchschDoc, CDocument)

BEGIN_MESSAGE_MAP(CSchschDoc, CDocument)
	//{{AFX_MSG_MAP(CSchschDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSchschDoc construction/destruction

CSchschDoc::CSchschDoc()
{
	// TODO: add one-time construction code here

}

CSchschDoc::~CSchschDoc()
{
}

BOOL CSchschDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSchschDoc serialization

void CSchschDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CSchschDoc diagnostics

#ifdef _DEBUG
void CSchschDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSchschDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSchschDoc commands
