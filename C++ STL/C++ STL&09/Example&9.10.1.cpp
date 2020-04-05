#include"algostuff.h"
using namespace std;
void main()
{
	list<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll);

	if (binary_search(coll.begin(), coll.end(), 5))
		cout << "5 is present " << endl;
	else
		cout << "5 is not present " << endl;

	if (binary_search(coll.begin(), coll.end(), 42))
		cout << "42 is present " << endl;
	else
		cout << "42 is not present " << endl;
}