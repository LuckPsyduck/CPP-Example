#include<iostream>
using namespace std;
int main()//需要加括号，优先级问题
{
	unsigned long u11 = 3, u12 = 7;
	cout <<( u11 & u12) << endl;
	cout << (u11 && u12) << endl;
	cout << (u11 |u12) << endl;
	cout << (u11||u12) << endl;
	return 0;
}
