#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
void main()
{
	vector<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);
	copy(coll.rbegin(), coll.rend(), \
		ostream_iterator<int>(cout, " "));
	cout << endl;
	//cout << *(coll.rend()) << endl;//Ã»ÓÐ´æÖµ
	cout << *(coll.rbegin()) << endl;
}