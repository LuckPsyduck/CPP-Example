#include<iostream>
using namespace std;
int main()//��Ҫ�����ţ����ȼ�����
{
	unsigned long u11 = 3, u12 = 7;
	cout <<( u11 & u12) << endl;
	cout << (u11 && u12) << endl;
	cout << (u11 |u12) << endl;
	cout << (u11||u12) << endl;
	return 0;
}