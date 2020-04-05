// 13.9.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

void printfFileTwice(const char * filename)
{
	ifstream file(filename);
	cout << file.rdbuf();//返回存储的流缓冲区的地址。
	cout << endl;
	file.seekg(0);
	//file.seekg(2);
	cout << file.rdbuf();
	cout << endl;
}

int main(int argc,char *argv[])
{
	for (int i = 1; i < argc; i++)
		printfFileTwice(argv[i]);
    return 0;
}

