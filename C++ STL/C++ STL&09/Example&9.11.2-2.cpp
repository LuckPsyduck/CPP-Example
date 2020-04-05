#include"algostuff.h"
#include<iterator>
using namespace std;

void main()
{
	deque<int> coll;
	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);
	// a1 a2-a1 a3-a2.......
	adjacent_difference(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";
	//a1 ,a2 op a1,a3 op a2.......... 
	adjacent_difference(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "), plus<int>());
	cout << endl;

	adjacent_difference(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "), multiplies<int>());
	cout << endl;
}