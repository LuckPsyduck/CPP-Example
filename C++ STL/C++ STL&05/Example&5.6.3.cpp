#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
void main()
{
	list<int> coll;
	for (int i = 1; i <= 6; i++)
	{
		coll.push_front(i);
		coll.push_back(i);
	}
	coll.erase(remove(coll.begin(), coll.end(), 3), coll.end());
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	coll.remove(4);
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}