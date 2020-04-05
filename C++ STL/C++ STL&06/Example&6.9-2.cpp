#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
void main()
{
	vector<string> coll((istream_iterator<string>(cin)), (istream_iterator<string>()));//vector sort
	sort(coll.begin(), coll.end());
	unique_copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
}