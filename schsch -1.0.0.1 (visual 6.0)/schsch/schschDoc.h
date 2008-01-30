// schschDoc.h : interface of the CSchschDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCHSCHDOC_H__C3229C1A_E614_42A8_8EC3_58468D5864B8__INCLUDED_)
#define AFX_SCHSCHDOC_H__C3229C1A_E614_42A8_8EC3_58468D5864B8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSchschDoc : public CDocument
{
protected: // create from serialization only
	CSchschDoc();
	DECLARE_DYNCREATE(CSchschDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSchschDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSchschDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSchschDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCHSCHDOC_H__C3229C1A_E614_42A8_8EC3_58468D5864B8__INCLUDED_)
