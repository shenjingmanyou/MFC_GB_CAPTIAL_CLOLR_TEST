
// gb_captical_modifyDlg.h : ͷ�ļ�
//

#pragma once


// Cgb_captical_modifyDlg �Ի���
class Cgb_captical_modifyDlg : public CDialogEx
{
// ����
public:
	Cgb_captical_modifyDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_GB_CAPTICAL_MODIFY_DIALOG };

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
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
private:
	CBrush m_brush;//����һ��CBrush���͵�˽�г�Ա����m_brush
};
