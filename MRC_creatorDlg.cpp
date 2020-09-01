
// MRC_creatorDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MRC_creator.h"
#include "MRC_creatorDlg.h"
#include "afxdialogex.h"

#include <strsafe.h>

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
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
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
	CRegKey regKey;
	TCHAR strValue[_MAX_PATH];
	ZeroMemory(strValue, sizeof(strValue));
	ULONG strSize = sizeof(strValue);
	DWORD dwValue;

	LSTATUS lRet = regKey.Open(HKEY_CURRENT_USER, REG_SW_GROUP);
	if (ERROR_SUCCESS != lRet)
	{
		lRet = regKey.Create(HKEY_CURRENT_USER, REG_SW_GROUP);
		if (ERROR_SUCCESS == lRet)
		{
			regKey.SetStringValue(REG_KEY_FTP, _T("200"));
			regKey.SetStringValue(REG_KEY_OFFSET, _T("10"));
		}
		else
		{
			regKey.Close();
			return;
		}
	}
	lRet = regKey.QueryStringValue(REG_KEY_DIR, strValue, &strSize);
	SetDlgItemText(IDC_WORK_DIR, strValue);

	strSize = sizeof(strValue);
	lRet = regKey.QueryStringValue(REG_KEY_FTP, strValue, &strSize);
	SetDlgItemText(IDC_FTP, strValue);

	strSize = sizeof(strValue);
	lRet = regKey.QueryStringValue(REG_KEY_OFFSET, strValue, &strSize);
	SetDlgItemText(IDC_OFFSET, strValue);

	lRet = regKey.QueryDWORDValue(REG_KEY_MRC, dwValue);
	CButton* button = (CButton*)GetDlgItem(IDC_MRC);
	button->SetCheck(dwValue);

	lRet = regKey.QueryDWORDValue(REG_KEY_ERG, dwValue);
	button = (CButton*)GetDlgItem(IDC_ERG);
	button->SetCheck(dwValue);

	lRet = regKey.QueryDWORDValue(REG_KEY_FIT, dwValue);
	button = (CButton*)GetDlgItem(IDC_FIT);
	button->SetCheck(dwValue);

	lRet = regKey.QueryDWORDValue(REG_KEY_ZWO, dwValue);
	button = (CButton*)GetDlgItem(IDC_ZWO);
	button->SetCheck(dwValue);

	lRet = regKey.QueryDWORDValue(REG_KEY_ANTFEC, dwValue);
	button = (CButton*)GetDlgItem(IDC_NO_OFFSET);
	button->SetCheck(dwValue);

	lRet = regKey.QueryDWORDValue(REG_KEY_WORKOUTDATA, dwValue);
	button = (CButton*)GetDlgItem(IDC_INFO);
	button->SetCheck(dwValue);

	regKey.Close();
}

void CMRCcreatorDlg::WriteRegistry()
{
	CRegKey regKey;
	TCHAR strValue[_MAX_PATH];
	ZeroMemory(strValue, sizeof(strValue));
	ULONG strSize = sizeof(strValue);
	DWORD dwValue;

	LSTATUS lRet = regKey.Open(HKEY_CURRENT_USER, REG_SW_GROUP);
	if (ERROR_SUCCESS != lRet)
	{
		lRet = regKey.Create(HKEY_CURRENT_USER, REG_SW_GROUP);
		if (ERROR_SUCCESS != lRet)
		{
			regKey.Close();
			return;
		}
	}
	GetDlgItemText(IDC_WORK_DIR, strValue, strSize);
	lRet = regKey.SetStringValue(REG_KEY_DIR, strValue, REG_SZ);

	GetDlgItemText(IDC_FTP, strValue, strSize);
	lRet = regKey.SetStringValue(REG_KEY_FTP, strValue, REG_SZ);

	GetDlgItemText(IDC_OFFSET, strValue, strSize);
	lRet = regKey.SetStringValue(REG_KEY_OFFSET, strValue, REG_SZ);

	CButton* button = (CButton*)GetDlgItem(IDC_MRC);
	dwValue = button->GetCheck();
	lRet = regKey.SetDWORDValue(REG_KEY_MRC, dwValue);

	button = (CButton*)GetDlgItem(IDC_ERG);
	dwValue = button->GetCheck();
	lRet = regKey.SetDWORDValue(REG_KEY_ERG, dwValue);

	button = (CButton*)GetDlgItem(IDC_FIT);
	dwValue = button->GetCheck();
	lRet = regKey.SetDWORDValue(REG_KEY_FIT, dwValue);

	button = (CButton*)GetDlgItem(IDC_ZWO);
	dwValue = button->GetCheck();
	lRet = regKey.SetDWORDValue(REG_KEY_ZWO, dwValue);

	button = (CButton*)GetDlgItem(IDC_NO_OFFSET);
	dwValue = button->GetCheck();
	lRet = regKey.SetDWORDValue(REG_KEY_ANTFEC, dwValue);

	button = (CButton*)GetDlgItem(IDC_INFO);
	dwValue = button->GetCheck();
	lRet = regKey.SetDWORDValue(REG_KEY_WORKOUTDATA, dwValue);

	regKey.Close();
}


// CMRCcreatorDlg message handlers

BOOL CMRCcreatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
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
		dc.DrawIcon(x, y, m_hIcon);
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
	return static_cast<HCURSOR>(m_hIcon);
}



void CMRCcreatorDlg::OnClose()
{
	// TODO: Add your message handler code here and/or call default
	WriteRegistry();

	CDialogEx::OnClose();
}


void CMRCcreatorDlg::OnBnClickedSelDir()
{
	// TODO: Add your control notification handler code here
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
	// TODO: Add your control notification handler code here
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

void CMRCcreatorDlg::listFilesOfSelDir(HANDLE& handle, WIN32_FIND_DATA& ffd, TCHAR* directory)
{
	TCHAR selDir[_MAX_PATH];
	wcscpy(selDir, directory);
	StringCchCat(selDir, _MAX_PATH, TEXT("\\*"));
	handle = FindFirstFile(selDir, &ffd);
}

bool CMRCcreatorDlg::isFileTxt(char fileName[])
{
	char fileExt[5];
	strcpy(fileExt, (const char*)&fileName[strlen(fileName) - SIZE_OF_FILE_EXTENSION]);
	if (!strcmp(fileExt, ".txt"))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CMRCcreatorDlg::hasNextFile(HANDLE& handle, WIN32_FIND_DATA& ffd)
{
	if (FindNextFile(handle, &ffd))
	{
		return true;
	}
	else
	{
		return false;
	}
}


void CMRCcreatorDlg::OnBnClickedGenerate()
{
	// TODO: Add your control notification handler code here
	bool generateMRC, generateERG, generateFIT, generateZWO, generateFEC, generateInfo;
	generateMRC = generateERG = generateFIT = generateZWO = generateFEC = generateInfo = false;
	CButton* button = (CButton*)GetDlgItem(IDC_MRC);
	if (button->GetCheck())
	{
		generateMRC = true;
	}
	button = (CButton*)GetDlgItem(IDC_ERG);
	if (button->GetCheck())
	{
		generateERG = true;
	}
	button = (CButton*)GetDlgItem(IDC_FIT);
	if (button->GetCheck())
	{
		generateFIT = true;
	}
	button = (CButton*)GetDlgItem(IDC_ZWO);
	if (button->GetCheck())
	{
		generateZWO = true;
	}
	button = (CButton*)GetDlgItem(IDC_NO_OFFSET);
	if (button->GetCheck())
	{
		generateFEC = true;
	}
	button = (CButton*)GetDlgItem(IDC_INFO);
	if (button->GetCheck())
	{
		generateInfo = true;
	}

	TCHAR strValue[_MAX_PATH];
	ZeroMemory(strValue, sizeof(strValue));
	ULONG strSize = sizeof(strValue);
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
		char filePath[_MAX_PATH];
		sprintf(filePath, "%ws\\workoutsInfo.csv", strValue);
		workoutData.createFile(filePath);
	}

	listFilesOfSelDir(hFind, ffd, strValue);
	do
	{
		char fileName[_MAX_PATH];
		sprintf(fileName, "%ws", ffd.cFileName);
		
		if (isFileTxt(fileName))
		{
			char completeFilePath[_MAX_PATH];
			sprintf(completeFilePath, "%ws\\%ws", strValue, ffd.cFileName);

			readFile read;
			read.openFile(completeFilePath);
			read.fillData();
			read.closeFile();

			if (generateMRC)
			{
				PathRenameExtensionA(completeFilePath, ".mrc");
				writeMRC writeMRC;
				writeMRC.createFile(completeFilePath);
				writeMRC.fillFile(read.data);
				writeMRC.closeFile();
			}

			if (generateERG)
			{
				PathRenameExtensionA(completeFilePath, ".erg");
				writeERG writeERG(ftp);
				writeERG.createFile(completeFilePath);
				writeERG.fillFile(read.data);
				writeERG.closeFile();
			}

			if (generateFIT)
			{
				PathRenameExtensionA(completeFilePath, ".fit");
				writeFIT writeFIT(ftp, offset);
				writeFIT.createFile(completeFilePath);
				writeFIT.fillFile(read.data);
				writeFIT.closeFile();
			}

			if (generateZWO)
			{
				PathRenameExtensionA(completeFilePath, ".zwo");
				writeZWO writeZWO;
				writeZWO.createFile(completeFilePath);
				writeZWO.fillFile(read.data);
				writeZWO.closeFile();
			}

			if (generateInfo)
			{
				PathRemoveExtensionA(fileName);
				workoutData.writeWorkoutData(read.data, fileName);
			}
		}
	} while (hasNextFile(hFind, ffd));
	FindClose(hFind);

	if (generateInfo)
	{
		workoutData.closeFile();
	}

	MessageBox(L"Workouts Created", L"Success!", MB_OK | MB_ICONINFORMATION);
}
