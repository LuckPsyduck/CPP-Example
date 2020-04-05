#include"algostuff.h"
#include<iterator>
using namespace std;
void main()
{
	deque<int> coll;

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 1, 5);
	PRINT_ELEMENTS(coll);

	nth_element(coll.begin(), coll.begin() + 3, coll.end());

	cout << "the four lowest elements are: ";
	copy(coll.begin(), coll.begin() + 4, ostream_iterator<int>(cout, " "));
	cout << endl;

	nth_element(coll.begin(), coll.end() - 4, coll.end());

	cout << "the four highest elements are: ";
	copy(coll.end() - 4, coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	nth_element(coll.begin(), coll.begin() + 3, coll.end(),greater<int>());

	cout << "the first highest elements are: ";
	copy(coll.begin(), coll.begin() + 4, ostream_iterator<int>(cout, " "));
	cout << endl;
}
//只保证区间的有序性，不保证区间内元素的有序性