#include"algostuff.h"
#include<iterator>
using namespace std;
void main()
{
	list<int> coll1;
	INSERT_ELEMENTS(coll1, 1, 6);
	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1);

	remove_copy(coll1.begin(), coll1.end(), ostream_iterator<int>(cout, " "), 3);
	cout << endl;

	remove_copy_if(coll1.begin(), coll1.end(), ostream_iterator<int>(cout, " "), bind2nd(greater<int>(), 4));
	cout << endl;

	multiset<int> coll2;
	remove_copy_if(coll1.begin(), coll1.end(), inserter(coll2, coll2.end()), bind2nd(less<int>(), 4));
	PRINT_ELEMENTS(coll2);
}