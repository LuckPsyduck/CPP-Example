#include<iostream>
#include<string>
#include<map>
using namespace std;
void main()
{
	typedef multimap<int, string> InstringMMap;//<
	InstringMMap coll;
	coll.insert(make_pair(5, "tagged"));
	coll.insert(make_pair(2, "a"));
	coll.insert(make_pair(1, "this"));
	coll.insert(make_pair(4, "of"));
	coll.insert(make_pair(6, "strings"));
	coll.insert(make_pair(1, "is"));
	coll.insert(make_pair(3, "multimap"));
	InstringMMap::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
		cout << pos->second << " ";
	cout << endl;
}