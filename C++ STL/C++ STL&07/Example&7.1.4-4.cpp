#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void main()
{
	list<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);

	list<int>::iterator pos;
	pos = find(coll.begin(), coll.end(), 5);
	cout << "pos: " << *pos << endl;

	list<int>::reverse_iterator rpos(pos);
	cout << "rpos: " << *rpos << endl;

	list<int>::iterator rrpos;
	rrpos = rpos.base();
	cout << "rrpos: " << *rrpos << endl;
}