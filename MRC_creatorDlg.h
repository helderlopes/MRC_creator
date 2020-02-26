
// MRC_creatorDlg.h : header file
//

#pragma once


// CMRCcreatorDlg dialog
class CMRCcreatorDlg : public CDialogEx
{
// Construction
public:
	CMRCcreatorDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MRC_CREATOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	void ReadRegistry();
	void WriteRegistry();

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
	afx_msg void OnBnClickedSelDir();
	afx_msg void OnBnClickedFit();
	afx_msg void OnBnClickedGenerate();
};
