#include"algostuff.h"
using namespace std;
void main()
{
	vector<int> coll;
	vector<int>::iterator pos;
	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	pos = find_if(coll.begin(), coll.end(), bind2nd(greater<int>(), 3));

	cout << "the " << distance(coll.begin(), pos) + 1 << " element is the first greater than 3 " << endl;

	pos = find_if(coll.begin(), coll.end(), not1(bind2nd(modulus<int>(), 3)));

	cout << "the " << distance(coll.begin(), pos) + 1 << " element is the first divisible by 3 " << endl;
}
