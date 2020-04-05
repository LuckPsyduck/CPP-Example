#include"algostuff.h"
#include<iterator>
using namespace std;
void main()
{
	list<int> coll;
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 4, 9);
	PRINT_ELEMENTS(coll);

	replace_copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "),5,55);
	cout << endl;

	replace_copy_if(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "), bind2nd(less<int>(),5),42);
	cout << endl;

	replace_copy_if(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "), bind2nd(modulus<int>(), 2), 0);
	cout << endl;
}
