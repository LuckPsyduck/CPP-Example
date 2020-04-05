#include<iostream>
#include<set>
#include<deque>
#include<functional>
#include<iterator>
#include<algorithm>
#include "print.h"
using namespace std;
void main()
{
	set<int, greater<int>> coll1;
	deque<int> coll2;
	for (int i = 1; i <= 9; i++)
		coll1.insert(i);
	PRINT_ELEMENTS(coll1, "initialized: ");
	cout << endl;
	transform(coll1.begin(), coll1.end(), back_inserter(coll2), bind2nd(multiplies<int>(), 10));
	PRINT_ELEMENTS(coll2, "treansform: ");
	cout << endl;
	replace_if(coll2.begin(), coll2.end(), bind2nd(equal_to<int>(), 70), 42);
	PRINT_ELEMENTS(coll2, "replaced: ");
	cout << endl;
}