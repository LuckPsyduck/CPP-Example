#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include"print.h"
using namespace std;
void main()
{
	vector<int> coll;
	back_insert_iterator<vector<int>> iter(coll);

	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3; 

	PRINT_ELEMENTS(coll);
	cout << endl;

	back_inserter(coll) = 44;
	back_inserter(coll) = 55;

	PRINT_ELEMENTS(coll);
	cout << endl;

	coll.reserve(2 * coll.size());

	copy(coll.begin(), coll.end(), back_inserter(coll));
	PRINT_ELEMENTS(coll);
	cout << endl;
}
