// SchSchView.h : interface of the CSchSchView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCHSCHVIEW_H__2FD9623D_D620_4DF5_A7C4_A68FA478C81A__INCLUDED_)
#define AFX_SCHSCHVIEW_H__2FD9623D_D620_4DF5_A7C4_A68FA478C81A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSchSchView : public CView
{
protected: // create from serialization only
	CSchSchView();
	DECLARE_DYNCREATE(CSchSchView)

// Attributes
public:
	CSchSchDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSchSchView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSchSchView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSchSchView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SchSchView.cpp
inline CSchSchDoc* CSchSchView::GetDocument()
   { return (CSchSchDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCHSCHVIEW_H__2FD9623D_D620_4DF5_A7C4_A68FA478C81A__INCLUDED_)
