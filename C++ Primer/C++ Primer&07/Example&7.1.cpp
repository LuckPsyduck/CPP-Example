#include<iostream>
#include<string>
#include "Sales_data.h"
using namespace std;
int main()
{
	cout << "请输入交易记录（ISBN 销售量 原价 实际售价）: \n";
	Sales_data total;
	if (cin >> total)
	{
		Sales_data trans;
		while (cin >> trans)
		{
			if (total.isbn() == trans.isbn())
				total += trans;
			else
			{
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;
	}
	else
	{
		cerr << "no data!\n";
		return -1;
	}
	return 0;
}
