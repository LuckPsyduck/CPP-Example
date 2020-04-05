#include<iostream>
#include<map>
#include<algorithm>
#include<functional>
#include<string>
using namespace std;
map<string, function<int (int,int)>> binops = {
	{"+",plus<int>()},
	{"-",minus<int>()},
	{"*",multiplies<int>()},
	{"/",divides<int>()},
	{"%",modulus<int>()}
};
int main()
{
	string op;
	int a, b;
	cin >> a >> op>>b;
	cout << binops[op](a, b) <<endl;
	return 0;
}