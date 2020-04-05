#include<iostream>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data data1;
	Sales_data data2("987-7-121-15535-2");
	Sales_data data3("987-7-121-15535-2", 100, 128, 109);
	Sales_data data4(cin);
	cout << "书籍的销售情况是: \n";
	cout << data1 << endl << data2 << endl << data3 << endl << data4 << endl;
	return 0;
}