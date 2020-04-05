#include"algostuff.h"
#include<iterator>
using namespace std;
void main()
{ 
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1,9);
	PRINT_ELEMENTS(coll, "coll: ");

	reverse(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "coll: ");

	reverse(coll.begin() + 1, coll.end() - 1);
	PRINT_ELEMENTS(coll, "coll: ");

	reverse_copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}