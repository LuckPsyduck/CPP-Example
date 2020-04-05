#include<iostream>
#include<deque>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;
void main()
{
	deque<string> coll;
	coll.assign(3, string("string"));
	coll.push_back("last string");
	coll.push_front("first string");
	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, " "));
	cout << endl;
	coll.pop_front();
	coll.pop_back();
	for (int i = 1; i < coll.size(); i++)
		coll[i] = " another " + coll[i];
	coll.resize(4, "resized string");
	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, " "));
	cout << endl;
}