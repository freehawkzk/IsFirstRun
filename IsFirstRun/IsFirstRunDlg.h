
// IsFirstRunDlg.h : ͷ�ļ�
//

#pragma once


// CIsFirstRunDlg �Ի���
class CIsFirstRunDlg : public CDialogEx
{
// ����
public:
	CIsFirstRunDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ISFIRSTRUN_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
