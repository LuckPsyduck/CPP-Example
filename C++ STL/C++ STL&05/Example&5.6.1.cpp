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
	cout << "pre: ";
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	remove(coll.begin(), coll.end(), 3);
	cout << " post: ";
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout,  " "));
	cout << endl;
}