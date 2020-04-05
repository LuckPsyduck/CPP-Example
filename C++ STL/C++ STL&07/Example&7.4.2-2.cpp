#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
#include"print.h"
using namespace std;
void main()
{
	list<int> coll;
	front_insert_iterator<list<int>> iter(coll);

	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	PRINT_ELEMENTS(coll);
	cout << endl;

	front_inserter(coll) = 44;
	front_inserter(coll) = 55;

	PRINT_ELEMENTS(coll);
	cout << endl;

	copy(coll.begin(), coll.end(), front_inserter(coll));
	PRINT_ELEMENTS(coll);
	cout << endl;
}