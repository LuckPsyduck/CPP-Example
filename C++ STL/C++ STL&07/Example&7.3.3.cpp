#include<iostream>
#include<list>
#include<algorithm>
#include"print.h"
using namespace std;
void main()
{
	list<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);
	PRINT_ELEMENTS(coll);
	cout <<endl;
	iter_swap(coll.begin(), ++coll.begin());
	PRINT_ELEMENTS(coll);
	cout << endl;
	iter_swap(coll.begin(), --coll.end());
	PRINT_ELEMENTS(coll);
	cout << endl;
}