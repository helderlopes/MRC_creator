
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
	void listFilesOfSelDir(HANDLE& handle, WIN32_FIND_DATA& ffd, TCHAR* directory);
	bool isFileTxt(char fileName[]);
	bool CMRCcreatorDlg::hasNextFile(HANDLE& handle, WIN32_FIND_DATA& ffd);

	const CString REG_SW_GROUP = _T("SOFTWARE\\MRC Creator");
	const CString REG_KEY_DIR = _T("Directory");
	const CString REG_KEY_FTP = _T("FTP");
	const CString REG_KEY_OFFSET = _T("Offset");
	const CString REG_KEY_MRC = _T("MRC");
	const CString REG_KEY_ERG = _T("ERG");
	const CString REG_KEY_FIT = _T("FIT");
	const CString REG_KEY_ZWO = _T("ZWO");
	const CString REG_KEY_ANTFEC = _T("ANT+ FE-C");
	const CString REG_KEY_WORKOUTDATA = _T("Workout Data");

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
