#include<iostream>
#include<set>
#include<list>
#include<algorithm>
#include<iterator>
#include"print.h"
using namespace std;
void main()
{
	set<int> coll;
	insert_iterator<set<int>> iter(coll, coll.begin());

	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	PRINT_ELEMENTS(coll);
	cout << endl;

	inserter(coll, coll.end()) = 44;
	inserter(coll, coll.end()) = 55;
	PRINT_ELEMENTS(coll);
	cout << endl;

	list<int> coll2;
	copy(coll.begin(), coll.end(), inserter(coll2, coll2.begin()));
	PRINT_ELEMENTS(coll,"list: ");
	cout << endl;

	copy(coll.begin(), coll.end(), inserter(coll2, ++coll2.begin()));
	PRINT_ELEMENTS(coll2, "list: ");
	cout << endl;
}