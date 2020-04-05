#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;
void main()
{
	vector<string> coll;
	copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(coll));//ctrl+z
	sort(coll.begin(), coll.end());
	unique_copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
}