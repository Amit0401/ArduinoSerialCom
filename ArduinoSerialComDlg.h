
// ArduinoSerialComDlg.h : header file
//

#pragma once


// CArduinoSerialComDlg dialog
class CArduinoSerialComDlg : public CDialogEx
{
// Construction
public:
	CArduinoSerialComDlg(CWnd* pParent = nullptr);	// standard constructor
	BOOL     m_bPortReady;
	HANDLE   m_hCom;
	CString  m_sComPort;
	DCB      m_dcb;
	COMMTIMEOUTS m_CommTimeouts;
	BOOL     bWriteRC;
	BOOL     bReadRC;
	DWORD iBytesWritten;
	DWORD iBytesRead;
	char       sBuffer[128];
	BOOL m_bToogle;
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ARDUINOSERIALCOM_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	void connectSerialCommunication();
public:
	afx_msg void OnBnClickedButtonSendData();
};
