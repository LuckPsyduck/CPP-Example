#include<iostream>
#include "chapter6.h"
using namespace std;
int main()
{
	int num;
	cout << "请输入一个整数:\n";
	cin >> num;
	cout << num << "的阶数: " << fact(num) << endl;
	return 0;
}