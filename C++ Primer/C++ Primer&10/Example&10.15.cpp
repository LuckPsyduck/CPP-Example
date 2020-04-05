#include<iostream>
using namespace std;
int add(int a)
{
	auto sum = [a](int b) {return a + b; }//arrest
	cout << sum(1) << endl;
	return 0;
}
int main()
{
	add(1);
	add(2);
	return 0;
}