#include<iostream>
#include<fstream>
#include"Sales_data.h"
using namespace std;
int main(int argc,char *argv[])
{
	if (argc != 2)
	{
		cerr << "请给出文件名:\n";
		return -1;
	}
	ifstream in(argv[1]);//属性，项目，调试，命令参数
	if (!in)
	{
		cerr << "not open file\n";
		return -1;
	}
	Sales_data total;
	if (read(in, total))
	{
		Sales_data trans;
		while (read(in, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
		cerr << "no data" << endl;
	return 0;
}
