
// MFC_06_FileBrowseDlg.h: 头文件
//

#pragma once


// CMFC06FileBrowseDlg 对话框
class CMFC06FileBrowseDlg : public CDialogEx
{
// 构造
public:
	CMFC06FileBrowseDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_06_FILEBROWSE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonBrowse();
	CString m_szPath;
	afx_msg void OnDropFiles(HDROP hDropInfo);
};
