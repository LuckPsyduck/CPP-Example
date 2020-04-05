#include<iostream>
using namespace std;
double ADD(double val1,double val2)
{
	double result = val1 + val2;
	static unsigned icnt = 0;
	++icnt;
	cout << "该函数已经执行了 : " << icnt << endl;
	return result;
}
int main()
{
	double num1,num2;
	cout << "请输入两个数: ";
	while (cin >> num1 >> num2)
		cout << num1 << "and" << num2 << "的求和结果是:" << ADD(num1, num2) << endl;
	return 0;
}