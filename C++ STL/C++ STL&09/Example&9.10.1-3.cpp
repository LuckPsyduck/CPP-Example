#include"algostuff.h"
using namespace std;
void main()
{
	list<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);
	coll.sort();
	PRINT_ELEMENTS(coll);

	list<int>::iterator pos1, pos2;

	pos1 = lower_bound(coll.begin(), coll.end(), 5);
	pos2 = upper_bound(coll.begin(), coll.end(), 5);

	cout << "5 could get position " << distance(coll.begin(), pos1) + 1 << " up to " << distance(coll.begin(), pos2) + 1 << \
		"without breaking the sorting " << endl;

	coll.insert(lower_bound(coll.begin(), coll.end(),3), 3);
	coll.insert(lower_bound(coll.begin(), coll.end(), 7), 7);
	
	PRINT_ELEMENTS(coll);
}