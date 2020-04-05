#include"algostuff.h"
#include<iterator>
using namespace std;
void main()
{
	set<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	set<int>::iterator pos = coll.begin();
	advance(pos, 1);
	
	rotate_copy(coll.begin(), pos, coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	pos = coll.end();
	advance(pos, -2);

	rotate_copy(coll.begin(), pos, coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	rotate_copy(coll.begin(), coll.find(4), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
//istream_iterator<int>(cin);
//instream_iterator<int>();
//istream_iterator<int>a;