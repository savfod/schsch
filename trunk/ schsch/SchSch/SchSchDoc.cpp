// SchSchDoc.cpp : implementation of the CSchSchDoc class
//

#include "stdafx.h"
#include "SchSch.h"

#include "SchSchDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSchSchDoc

IMPLEMENT_DYNCREATE(CSchSchDoc, CDocument)

BEGIN_MESSAGE_MAP(CSchSchDoc, CDocument)
	//{{AFX_MSG_MAP(CSchSchDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSchSchDoc construction/destruction

CSchSchDoc::CSchSchDoc()
{
	// TODO: add one-time construction code here

}

CSchSchDoc::~CSchSchDoc()
{
}

BOOL CSchSchDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSchSchDoc serialization

void CSchSchDoc::Serialize(CArchive& ar)
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
// CSchSchDoc diagnostics

#ifdef _DEBUG
void CSchSchDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSchSchDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSchSchDoc commands
