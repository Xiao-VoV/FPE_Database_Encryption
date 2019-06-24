
// TestDlg.h : 头文件
//
#include "score.h"

#pragma once


// CTestDlg 对话框
class CTestDlg : public CDialogEx
{
// 构造
public:
	CTestDlg(CWnd* pParent = NULL);	// 标准构造函数
	void List_All(CString);
// 对话框数据
	enum { IDD = IDD_TEST_DIALOG };

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
	CString m_stuid;
	CString m_stuname;
	long m_testscore;//身份证号
	long m_usualscore;//电话号码
	long m_totalscore;//银行卡号
	CComboBox m_class;
	CString m_stuclass;
	CListCtrl m_list;
	

	CString str1;//密钥
	CString str2 = _T("testdata-12345");//明文

	CString str4;


	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnNMClickList1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	int num_radio;
	afx_msg void OnBnClickedRadio();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedButton4();
	// 密钥输入框
	CEdit editprivate;
	// 加密结果
	CEdit editre;
};
