#pragma once


// CPAGENet 对话框

class CPAGENet : public CDialogEx
{
	DECLARE_DYNAMIC(CPAGENet)

public:
	CPAGENet(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPAGENet();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE_NETWORK };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
