#include"algostuff.h"
using namespace std;

void main()
{
	vector<int> coll;

	coll.push_back(17);
	coll.push_back(-3);
	coll.push_back(22);
	coll.push_back(13);
	coll.push_back(13);
	coll.push_back(-9);
	
	PRINT_ELEMENTS(coll, "coll: ");

	adjacent_difference(coll.begin(), coll.end(), coll.begin());
	PRINT_ELEMENTS(coll, "relative: ");

	partial_sum(coll.begin(), coll.end(), coll.begin());
	PRINT_ELEMENTS(coll, "absolute: ");
}