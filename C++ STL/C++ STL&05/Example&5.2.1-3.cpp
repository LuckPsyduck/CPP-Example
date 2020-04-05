#include<iostream>
#include<list>
using namespace std;
void main()
{
	list<char> coll;
	for (char c = 'a'; c <= 'z'; ++c)
		coll.push_front(c);
	while (!coll.empty())
	{
		cout << coll.front() << ' ';
		coll.pop_front();
	}
	cout << endl;
}