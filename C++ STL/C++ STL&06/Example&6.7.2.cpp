#include<iostream>
#include<algorithm>
#include<functional>
#include<iterator>
using namespace std;
void main()
{
	int coll[] = { 5,6,2,4,1,3 };
	transform(coll, coll + 6, coll, coll, multiplies<int>());
	sort(coll + 1, coll + 6);
	copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
	cout << endl;
}