#include"algostuff.h"
using namespace std;
void main()
{
	list<int> coll;
	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(coll, 1, 8);
	PRINT_ELEMENTS(coll);

	list<int>::iterator pos;
	pos = find(coll.begin(), coll.end(), 7);

	++pos;
	inplace_merge(coll.begin(), pos, coll.end());
	PRINT_ELEMENTS(coll);
}