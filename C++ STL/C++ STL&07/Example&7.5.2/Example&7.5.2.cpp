#pragma warning (disable:4996)
#include<iostream>
#include<set>
#include<algorithm>
#include"print.h"
#include"assoiter.h"
using namespace std;
void main()
{
	set<int> coll;
	asso_insert_iterator<set<int>> iter(coll);
	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	PRINT_ELEMENTS(coll);

	asso_inserter(coll) = 44;
	asso_inserter(coll) = 55;

	PRINT_ELEMENTS(coll);
	int vals[] = { 33,67,-4,13,5,2 };
	copy(vals, vals + sizeof(vals) / sizeof(vals[0]), asso_inserter(coll));

	PRINT_ELEMENTS(coll);
}