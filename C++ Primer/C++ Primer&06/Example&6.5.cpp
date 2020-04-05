#include<iostream>
#include<cmath>
using namespace std;
double ABS(double val)
{
	return abs(val);
}
int main()
{
	double num;
	cout << "请输入一个数: ";
	cin >> num;
	cout << num << "的绝对值是:" <<ABS(num) << endl;
	return 0;
}