
// gb_captical_modifyDlg.h : 头文件
//

#pragma once


// Cgb_captical_modifyDlg 对话框
class Cgb_captical_modifyDlg : public CDialogEx
{
// 构造
public:
	Cgb_captical_modifyDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_GB_CAPTICAL_MODIFY_DIALOG };

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
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
private:
	CBrush m_brush;//定义一个CBrush类型的私有成员变量m_brush
};
