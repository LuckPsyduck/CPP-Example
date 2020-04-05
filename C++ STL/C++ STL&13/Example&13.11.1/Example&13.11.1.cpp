// 13.11.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"//用法不是很懂
using namespace std;

int main()
{
	ostringstream os;
	os << "dec: " << 15 << hex << "hex:" << showbase << 15 << endl;
	cout << os.str() << endl;//设置或获取要在字符串缓冲区的文本，而不必重新编写位置

	bitset<15>b(5789);
	os << "float: " << 4.67 << " bitset: " << b << endl;

	os.seekp(0);
	os << "oct: " << oct << showbase << 15;
	cout << os.str() << endl;

    return 0;
}

