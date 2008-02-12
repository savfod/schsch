// SchSchDoc.h : interface of the CSchSchDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCHSCHDOC_H__6B33875F_F6FD_4BA0_82DC_36785EE364FB__INCLUDED_)
#define AFX_SCHSCHDOC_H__6B33875F_F6FD_4BA0_82DC_36785EE364FB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSchSchDoc : public CDocument
{
protected: // create from serialization only
	CSchSchDoc();
	DECLARE_DYNCREATE(CSchSchDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSchSchDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSchSchDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSchSchDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCHSCHDOC_H__6B33875F_F6FD_4BA0_82DC_36785EE364FB__INCLUDED_)
