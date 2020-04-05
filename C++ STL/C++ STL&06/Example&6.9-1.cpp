#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<iterator>
using namespace std;
void main()
{
	set<string> coll((istream_iterator<string>(cin)), (istream_iterator<string>()));//set sort
	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
}