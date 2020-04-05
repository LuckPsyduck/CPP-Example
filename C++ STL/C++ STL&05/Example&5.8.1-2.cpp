#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<math.h>
#include<iterator>
#include"print.h"
using namespace std;
int squre(int value)
{
	return  (int)pow(value, 2);
}
void main()
{
	set<int> coll1;
	vector<int> coll2;
	for (int i = 1; i <= 9; i++)
		coll1.insert(i);
	PRINT_ELEMENTS(coll1, "initialized: ");
	cout << endl;
	transform(coll1.begin(), coll1.end(), back_inserter(coll2), squre);
	PRINT_ELEMENTS(coll2, "squred: ");
	cout << endl;
}