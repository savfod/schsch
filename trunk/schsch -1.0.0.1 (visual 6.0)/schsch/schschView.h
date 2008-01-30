// schschView.h : interface of the CSchschView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCHSCHVIEW_H__2A5157EF_6B9D_4C6E_88BE_4E680125C53F__INCLUDED_)
#define AFX_SCHSCHVIEW_H__2A5157EF_6B9D_4C6E_88BE_4E680125C53F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSchschView : public CView
{
protected: // create from serialization only
	CSchschView();
	DECLARE_DYNCREATE(CSchschView)

// Attributes
public:
	CSchschDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSchschView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSchschView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSchschView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in schschView.cpp
inline CSchschDoc* CSchschView::GetDocument()
   { return (CSchschDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCHSCHVIEW_H__2A5157EF_6B9D_4C6E_88BE_4E680125C53F__INCLUDED_)
