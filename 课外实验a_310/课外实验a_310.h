
// 课外实验a_310.h : 课外实验a_310 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C课外实验a_310App:
// 有关此类的实现，请参阅 课外实验a_310.cpp
//

class C课外实验a_310App : public CWinApp
{
public:
	C课外实验a_310App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C课外实验a_310App theApp;
