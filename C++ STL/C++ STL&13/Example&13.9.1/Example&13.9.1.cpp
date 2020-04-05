
// 13.9.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<fstream>
#include<iostream>
using namespace std;

int main(int argc,char *argv[])
{
	ifstream file;
	for (int i = 1; i < argc; i++)
	{
		file.open(argv[1]);
		char c;
		while (file.get(c))
		{
			cout.put(c);
		}
		cout << endl;
		file.clear();
		file.close();
	}
    return 0;
}

