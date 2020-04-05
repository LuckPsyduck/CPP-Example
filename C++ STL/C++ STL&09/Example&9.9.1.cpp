#include"algostuff.h"
using namespace std;
void main()
{
	deque<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);

	PRINT_ELEMENTS(coll, "coll: ");

	sort(coll.begin(), coll.end());

	PRINT_ELEMENTS(coll, "sorted: ");

	sort(coll.begin(), coll.end(), greater<int>());
	PRINT_ELEMENTS(coll, "sorted: >");
}