#include<iostream>
using namespace std;
unsigned CNT()
{
	static unsigned icnt = 0;
	++icnt;
	return icnt;
}
int main()
{
	cout << "请输入任意字符后按回车键继续: \n";
	char ch;
	while (cin >> ch)
		cout << "函数CNT():"<< CNT() << endl;
	return 0;
}