#include"algostuff.h"
using namespace std;
void main()
{
	vector<int> coll1;
	deque<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	INSERT_ELEMENTS(coll2, 11, 23);

	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	deque<int>::iterator pos;
	pos = swap_ranges(coll1.begin(), coll1.end(), coll2.begin());

	PRINT_ELEMENTS(coll1, "\ncoll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	if (pos != coll2.end())//×¢ÒâÇø¼ä
		cout << "first element not modified: " << *pos << endl;

	swap_ranges(coll2.begin(), coll2.begin() + 3, coll2.rbegin());
	PRINT_ELEMENTS(coll2, "\ncoll2: ");
}