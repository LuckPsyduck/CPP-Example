// 13.10.2-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

void hexMultiplicationTable(streambuf *buffer, int num)
{
	ostream hexout(buffer);
	hexout << hex << showbase;
	for (int i = 1; i <= num; i++)
	{ 
		for (int j = 1; j <= 10; j++)
			hexout << i*j << " ";
		hexout << endl;
	}
}

int main()
{
	int num = 5;
	cout << "we print " << num << " lines hexadecimal " << endl;
	hexMultiplicationTable(cout.rdbuf(), num);
	cout << "That was the output of " << num << "hexadecimal lines" << endl;
    return 0;
}

