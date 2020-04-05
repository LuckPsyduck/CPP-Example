#include<iostream>
#include<list>
using namespace std;
void main()
{
	list<char> coll;
	for (char c = 'a'; c <= 'z'; ++c)
		coll.push_front(c);
	list<char>::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
		cout << *pos <<' ';
	cout << endl;
}