// 13.10.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ostream hexout(cout.rdbuf());//Returns the byte stream buffer.
	hexout.setf(ios::hex, ios::basefield);//标志位中只设立hex
	hexout.setf(ios::showbase);//显示0x

	hexout << "hexout: " << 177 << " ";
	cout << "cout: " << 177 << " ";
	hexout << "hexout: " << -49 << " ";
	cout << "cout: "<< - 49 << " ";
	hexout << endl;
    return 0;
}

