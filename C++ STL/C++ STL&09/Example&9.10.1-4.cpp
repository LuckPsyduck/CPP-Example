#include"algostuff.h"
using namespace std;
void main()
{
	list<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);

	coll.sort();
	PRINT_ELEMENTS(coll);

	pair<list<int>::iterator, list<int>::iterator> range;
	range = equal_range(coll.begin(), coll.end(), 5);

	cout << "5 could get position " << distance(coll.begin(), range.first) + 1 << " up to " << distance(coll.begin(), range.second) + 1 << \
		" without breaking the sorting " << endl;
}