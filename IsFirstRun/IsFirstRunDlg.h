
// IsFirstRunDlg.h : 头文件
//

#pragma once


// CIsFirstRunDlg 对话框
class CIsFirstRunDlg : public CDialogEx
{
// 构造
public:
	CIsFirstRunDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ISFIRSTRUN_DIALOG };
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
	afx_msg void OnClose();
	afx_msg LRESULT OnSencodRun(WPARAM, LPARAM);

public:
	int m_nRunTimes;
};
