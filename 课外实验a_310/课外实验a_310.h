
// ����ʵ��a_310.h : ����ʵ��a_310 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C����ʵ��a_310App:
// �йش����ʵ�֣������ ����ʵ��a_310.cpp
//

class C����ʵ��a_310App : public CWinApp
{
public:
	C����ʵ��a_310App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C����ʵ��a_310App theApp;
