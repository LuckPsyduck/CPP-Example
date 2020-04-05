#include"algostuff.h"
#include<iterator>
using namespace std;
void main()
{
	vector<int> coll;
	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);
	//a1,a1+a2,a1+a2+a3......
	partial_sum(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	//a1,a1 op a2,a1 op a2 op a3.......
	partial_sum(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "),multiplies<int>());
	cout << endl;
}