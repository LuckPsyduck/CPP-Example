#pragma warning (disable:4996)
#include<iostream>
#include<functional>
#include <algorithm>
#include"print.h"
#include"carry.h"
using namespace std;
void main()
{
	carry<int, 10> a;
	for (auto i = 0; i < a.size(); ++i)
		a[i] = i + 1;
	PRINT_ELEMENTS(a);
	cout << endl;
	reverse(a.begin(), a.end());
	PRINT_ELEMENTS(a);
	cout << endl;
	transform(a.begin(), a.end(), a.begin(), negate<int>());
	PRINT_ELEMENTS(a);
	cout << endl;
}