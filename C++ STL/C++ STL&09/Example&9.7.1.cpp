#include"algostuff.h"
using namespace std;
void main()
{
	vector<int> coll;
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 4, 9);
	INSERT_ELEMENTS(coll, 1, 7);
	PRINT_ELEMENTS(coll, "coll: ");
		
	vector<int>::iterator pos;
	pos = remove(coll.begin(), coll.end(), 5);//注意remove的性质
	PRINT_ELEMENTS(coll, "size not changed: ");

	coll.erase(pos, coll.end());
	PRINT_ELEMENTS(coll, "size changed: ");

	coll.erase(remove_if(coll.begin(), coll.end(), bind2nd(less<int>(), 4)), coll.end());
	PRINT_ELEMENTS(coll, "<4 removed: ");
}