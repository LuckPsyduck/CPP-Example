#include"algostuff.h"
#include<cstdlib>
using namespace std;
bool absLess(int elem1, int elem2)
{
	return abs(elem1) < abs(elem2);
}
void main()
{
	deque<int> coll;
	INSERT_ELEMENTS(coll, 2, 8);
	INSERT_ELEMENTS(coll, -3, 5);
	PRINT_ELEMENTS(coll);

	cout << "minimum: " << *min_element(coll.begin(), coll.end()) << endl;
	cout << "maximum: " << *max_element(coll.begin(), coll.end()) << endl;

	cout << "minimun of absolute values: " << *min_element(coll.begin(), coll.end(), absLess) << endl;
	cout << "maximun of absolute values: " << *max_element(coll.begin(), coll.end(), absLess) << endl;
}
