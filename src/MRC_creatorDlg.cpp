
// MRC_creatorDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MRC_creator.h"
#include "MRC_creatorDlg.h"
#include "afxdialogex.h"

#include <strsafe.h>
#include <filesystem>

#include "readFile.h"
#include "writeMRC.h"
#include "writeERG.h"
#include "writeFIT.h"
#include "writeZWO.h"
#include "workoutData.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMRCcreatorDlg dialog



CMRCcreatorDlg::CMRCcreatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MRC_CREATOR_DIALOG, pParent)
{
	_icon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMRCcreatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMRCcreatorDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_SEL_DIR, &CMRCcreatorDlg::OnBnClickedSelDir)
	ON_BN_CLICKED(IDC_FIT, &CMRCcreatorDlg::OnBnClickedFit)
	ON_BN_CLICKED(ID_GENERATE, &CMRCcreatorDlg::OnBnClickedGenerate)
END_MESSAGE_MAP()

void CMRCcreatorDlg::ReadRegistry()
{
	HKEY hKey = NULL;
	wchar_t regValueStr[MAX_PATH]{ 0 };
	unsigned long regSize = sizeof(regValueStr);
	unsigned long regValueULong = 0;
	long ret;

	ret = RegOpenKeyEx(HKEY_CURRENT_USER, REG_SW_GROUP, 0, KEY_READ, &hKey);
	if (ERROR_SUCCESS != ret)
	{
		ret = RegCreateKeyEx(HKEY_CURRENT_USER, REG_SW_GROUP, 0, NULL, 0, KEY_WRITE, NULL, &hKey, NULL);
		if (ERROR_SUCCESS == ret)
		{
			RegSetValueEx(hKey, REG_KEY_FTP, 0, REG_SZ, (LPBYTE)_T("200"), (DWORD)(wcslen(_T("200")) + 1) * sizeof(wchar_t));
			RegSetValueEx(hKey, REG_KEY_OFFSET, 0, REG_SZ, (LPBYTE)_T("10"), (DWORD)(wcslen(_T("10")) + 1) * sizeof(wchar_t));
		}
		else
		{
			if (hKey) RegCloseKey(hKey);
			return;
		}
	}

	regSize = sizeof(regValueStr);
	ret = RegQueryValueEx(hKey, REG_KEY_DIR, NULL, NULL, (unsigned char*)regValueStr, &regSize);
	SetDlgItemText(IDC_WORK_DIR, regValueStr);

	ZeroMemory(regValueStr, sizeof(regValueStr));
	regSize = sizeof(regValueStr);
	ret = RegQueryValueEx(hKey, REG_KEY_FTP, NULL, NULL, (unsigned char*)regValueStr, &regSize);
	SetDlgItemText(IDC_FTP, regValueStr);

	ZeroMemory(regValueStr, sizeof(regValueStr));
	regSize = sizeof(regValueStr);
	ret = RegQueryValueEx(hKey, REG_KEY_OFFSET, NULL, NULL, (unsigned char*)regValueStr, &regSize);
	SetDlgItemText(IDC_OFFSET, regValueStr);

	regSize = sizeof(unsigned long);
	ret = RegQueryValueEx(hKey, REG_KEY_MRC, NULL, NULL, (unsigned char*)&regValueULong, &regSize);
	CButton* button = (CButton*)GetDlgItem(IDC_MRC);
	button->SetCheck(regValueULong);

	ret = RegQueryValueEx(hKey, REG_KEY_ERG, NULL, NULL, (unsigned char*)&regValueULong, &regSize);
	button = (CButton*)GetDlgItem(IDC_ERG);
	button->SetCheck(regValueULong);

	ret = RegQueryValueEx(hKey, REG_KEY_FIT, NULL, NULL, (unsigned char*)&regValueULong, &regSize);
	button = (CButton*)GetDlgItem(IDC_FIT);
	button->SetCheck(regValueULong);

	ret = RegQueryValueEx(hKey, REG_KEY_ZWO, NULL, NULL, (unsigned char*)&regValueULong, &regSize);
	button = (CButton*)GetDlgItem(IDC_ZWO);
	button->SetCheck(regValueULong);

	ret = RegQueryValueEx(hKey, REG_KEY_ANTFEC, NULL, NULL, (unsigned char*)&regValueULong, &regSize);
	button = (CButton*)GetDlgItem(IDC_NO_OFFSET);
	button->SetCheck(regValueULong);

	ret = RegQueryValueEx(hKey, REG_KEY_WORKOUTDATA, NULL, NULL, (unsigned char*)&regValueULong, &regSize);
	button = (CButton*)GetDlgItem(IDC_INFO);
	button->SetCheck(regValueULong);

	if (hKey)
	{
		RegCloseKey(hKey);
	}
}

void CMRCcreatorDlg::WriteRegistry()
{
	HKEY hKey = NULL;
	wchar_t regValueStr[MAX_PATH]{ 0 };
	unsigned long value = 0;
	unsigned long cbData = 0;
	long ret;

	ret = RegCreateKeyEx(HKEY_CURRENT_USER, REG_SW_GROUP, 0, NULL, 0, KEY_WRITE, NULL, &hKey, NULL);
	if (ret != ERROR_SUCCESS)
	{
		if (hKey) RegCloseKey(hKey);
		return;
	}

	GetDlgItemText(IDC_WORK_DIR, regValueStr, MAX_PATH);
	cbData = (lstrlen(regValueStr) + 1) * sizeof(wchar_t);
	RegSetValueEx(hKey, REG_KEY_DIR, 0, REG_SZ, (const unsigned char*)regValueStr, cbData);

	GetDlgItemText(IDC_FTP, regValueStr, MAX_PATH);
	cbData = (lstrlen(regValueStr) + 1) * sizeof(wchar_t);
	RegSetValueEx(hKey, REG_KEY_FTP, 0, REG_SZ, (const unsigned char*)regValueStr, cbData);

	GetDlgItemText(IDC_OFFSET, regValueStr, MAX_PATH);
	cbData = (lstrlen(regValueStr) + 1) * sizeof(wchar_t);
	RegSetValueEx(hKey, REG_KEY_OFFSET, 0, REG_SZ, (const unsigned char*)regValueStr, cbData);

	// Write unsigned long values
	CButton* button = (CButton*)GetDlgItem(IDC_MRC);
	value = static_cast<unsigned long>(button->GetCheck());
	RegSetValueEx(hKey, REG_KEY_MRC, 0, REG_DWORD, (const unsigned char*)&value, sizeof(value));

	button = (CButton*)GetDlgItem(IDC_ERG);
	value = static_cast<unsigned long>(button->GetCheck());
	RegSetValueEx(hKey, REG_KEY_ERG, 0, REG_DWORD, (const unsigned char*)&value, sizeof(value));

	button = (CButton*)GetDlgItem(IDC_FIT);
	value = static_cast<unsigned long>(button->GetCheck());
	RegSetValueEx(hKey, REG_KEY_FIT, 0, REG_DWORD, (const unsigned char*)&value, sizeof(value));

	button = (CButton*)GetDlgItem(IDC_ZWO);
	value = static_cast<unsigned long>(button->GetCheck());
	RegSetValueEx(hKey, REG_KEY_ZWO, 0, REG_DWORD, (const unsigned char*)&value, sizeof(value));

	button = (CButton*)GetDlgItem(IDC_NO_OFFSET);
	value = static_cast<unsigned long>(button->GetCheck());
	RegSetValueEx(hKey, REG_KEY_ANTFEC, 0, REG_DWORD, (const unsigned char*)&value, sizeof(value));

	button = (CButton*)GetDlgItem(IDC_INFO);
	value = static_cast<unsigned long>(button->GetCheck());
	RegSetValueEx(hKey, REG_KEY_WORKOUTDATA, 0, REG_DWORD, (const unsigned char*)&value, sizeof(value));

	RegCloseKey(hKey);
}


// CMRCcreatorDlg message handlers

BOOL CMRCcreatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(_icon, TRUE);			// Set big icon
	SetIcon(_icon, FALSE);		// Set small icon

	ReadRegistry();
	OnBnClickedFit();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMRCcreatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, _icon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMRCcreatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(_icon);
}



void CMRCcreatorDlg::OnClose()
{
	WriteRegistry();

	CDialogEx::OnClose();
}


void CMRCcreatorDlg::OnBnClickedSelDir()
{
	CFolderPickerDialog picker;
	if (picker.DoModal() == IDOK)
	{
		CString pathDir = picker.GetPathName();
		SetDlgItemText(IDC_WORK_DIR, pathDir);
		UpdateData(FALSE);
	}
}

void CMRCcreatorDlg::OnBnClickedFit()
{
	CButton* button = (CButton*)GetDlgItem(IDC_FIT);
	if (button->GetCheck())
	{
		GetDlgItem(IDC_NO_OFFSET)->EnableWindow(true);
	}
	else
	{
		GetDlgItem(IDC_NO_OFFSET)->EnableWindow(false);
	}
}

bool CMRCcreatorDlg::IsFileTxt(std::wstring fileName)
{
	return fileName.ends_with(L".txt");
}

std::wstring CMRCcreatorDlg::ChangeExtension(const std::wstring& filePath, const std::wstring& newExtension)
{
	std::filesystem::path path(filePath);
	path.replace_extension(newExtension); 
	return path.wstring(); 
}

void CMRCcreatorDlg::OnBnClickedGenerate()
{
	bool generateMRC, generateERG, generateFIT, generateZWO, generateFEC, generateInfo;
	generateMRC = generateERG = generateFIT = generateZWO = generateFEC = generateInfo = false;
	
	CButton* button = (CButton*)GetDlgItem(IDC_MRC);
	generateMRC = button->GetCheck();

	button = (CButton*)GetDlgItem(IDC_ERG);
	generateERG = button->GetCheck();

	button = (CButton*)GetDlgItem(IDC_FIT);
	generateFIT = button->GetCheck();
	
	button = (CButton*)GetDlgItem(IDC_ZWO);
	generateZWO = button->GetCheck();
	
	button = (CButton*)GetDlgItem(IDC_NO_OFFSET);
	generateFEC = button->GetCheck();
	
	button = (CButton*)GetDlgItem(IDC_INFO);
	generateInfo = button->GetCheck();

	wchar_t strValue[MAX_PATH]{ 0 };
	unsigned long strSize = sizeof(strValue)/sizeof(wchar_t);
	GetDlgItemText(IDC_FTP, strValue, strSize);
	unsigned int ftp = _wtoi(strValue);
	unsigned int offset = 0;
	if (!generateFEC)
	{
		GetDlgItemText(IDC_OFFSET, strValue, strSize);
		offset = _wtoi(strValue);
	}

	WIN32_FIND_DATA ffd;
	HANDLE hFind;
	workoutData workoutData(ftp);

	GetDlgItemText(IDC_WORK_DIR, strValue, strSize);
	if (generateInfo)
	{
		std::wstring filePath{ strValue };
		filePath += L"\\workoutsInfo.csv";
		workoutData.createFile(filePath);
	}

	std::wstring selectedDirectory{ strValue };
	selectedDirectory += L"\\*";
	hFind = FindFirstFile(selectedDirectory.c_str(), &ffd);

	do
	{		
		std::wstring fileName{ ffd.cFileName };
		if (IsFileTxt(fileName))
		{
			std::wstring completeFilePath{ strValue };
			completeFilePath += ffd.cFileName;

			readFile read;
			read.openFile(completeFilePath);
			read.fillData();
			read.closeFile();

			if (generateMRC)
			{
				ChangeExtension(completeFilePath, L".mrc");
				writeMRC writeMRC;
				writeMRC.createFile(completeFilePath);
				writeMRC.fillFile(read.data);
				writeMRC.closeFile();
			}

			if (generateERG)
			{
				ChangeExtension(completeFilePath, L".erg");
				writeERG writeERG(ftp);
				writeERG.createFile(completeFilePath);
				writeERG.fillFile(read.data);
				writeERG.closeFile();
			}

			if (generateFIT)
			{
				ChangeExtension(completeFilePath, L".fit");
				writeFIT writeFIT(ftp, offset);
				writeFIT.createFile(completeFilePath);
				writeFIT.fillFile(read.data);
				writeFIT.closeFile();
			}

			if (generateZWO)
			{
				ChangeExtension(completeFilePath, L".zwo");
				writeZWO writeZWO;
				writeZWO.createFile(completeFilePath);
				writeZWO.fillFile(read.data);
				writeZWO.closeFile();
			}

			if (generateInfo)
			{
				std::filesystem::path fsFilePath{ fileName };
				workoutData.WriteWorkoutData(read.data, fsFilePath.replace_extension("").wstring());
			}
		}
	} while (FindNextFile(hFind, &ffd) != NULL);
	FindClose(hFind);

	if (generateInfo)
	{
		workoutData.closeFile();
	}

	MessageBox(L"Workouts Created", L"Success!", MB_OK | MB_ICONINFORMATION);
}
