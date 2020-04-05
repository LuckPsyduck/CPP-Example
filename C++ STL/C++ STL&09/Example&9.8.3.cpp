#include"algostuff.h"
using namespace std;//ÓÐµã²»¶®
void main()
{
	vector<int> coll;
	INSERT_ELEMENTS(coll, 1, 3);
	PRINT_ELEMENTS(coll, "on entry: ");

	while (next_permutation(coll.begin(), coll.end()))
		PRINT_ELEMENTS(coll, " ");
	PRINT_ELEMENTS(coll, "afterward: ");

	while (prev_permutation(coll.begin(), coll.end()))
		PRINT_ELEMENTS(coll, " ");
	PRINT_ELEMENTS(coll, "now: ");

	while (prev_permutation(coll.begin(), coll.end()))
		PRINT_ELEMENTS(coll, " ");
	PRINT_ELEMENTS(coll, "afterward: ");

}