#include"algostuff.h"
using namespace std;
void main()
{
	vector<int> coll1;
	list<int> coll2;
	INSERT_ELEMENTS(coll1, 1, 6);

	for (int i = 1; i <= 16; i *= 2)
		coll2.push_back(i);
	coll2.push_back(3);

	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	pair<vector<int>::iterator, list<int>::iterator> values;
	values = mismatch(coll1.begin(), coll1.end(), coll2.begin());
	if (values.first == coll1.end())
		cout << "no mismatch: \n";
	else
		cout << "first mismatch: " << *values.first << " and " << *values.second << endl;

	values = mismatch(coll1.begin(), coll1.end(), coll2.begin(), less_equal<int>());//false

	if (values.first == coll1.end())
		cout << "always less_or equal\n";
	else
		cout << "not less-or_equal: " << *values.first << " and " << *values.second << endl;
}