
// MRC_creatorDlg.h : header file
//

#pragma once

#include <string>


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
	HICON _icon;
	void ReadRegistry();
	void WriteRegistry();
	static bool IsFileTxt(std::wstring fileName);
	static std::wstring ChangeExtension(const std::wstring& filePath, const std::wstring& newExtension);

	const wchar_t* REG_SW_GROUP = L"SOFTWARE\\MRC Creator";
	const wchar_t* REG_KEY_DIR = L"Directory";
	const wchar_t* REG_KEY_FTP = L"FTP";
	const wchar_t* REG_KEY_OFFSET = L"Offset";
	const wchar_t* REG_KEY_MRC = L"MRC";
	const wchar_t* REG_KEY_ERG = L"ERG";
	const wchar_t* REG_KEY_FIT = L"FIT";
	const wchar_t* REG_KEY_ZWO = L"ZWO";
	const wchar_t* REG_KEY_ANTFEC = L"ANT+ FE-C";
	const wchar_t* REG_KEY_WORKOUTDATA = L"Workout Data";

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
