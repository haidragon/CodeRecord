#pragma once


// CPAGEProc 对话框

class CPAGEProc : public CDialogEx
{
	DECLARE_DYNAMIC(CPAGEProc)

public:
	CPAGEProc(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPAGEProc();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE_PROCESS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	CListCtrl m_szProc;
	CListCtrl m_szProc;
	virtual BOOL OnInitDialog();
};
