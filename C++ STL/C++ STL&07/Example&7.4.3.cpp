#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
void main()
{
	ostream_iterator<int> inwriter(cout, "\n");
	
	*inwriter = 42;
	inwriter++;
	*inwriter = 77;
	inwriter++;
	*inwriter = -5;

	vector<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);

	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout," "));
	cout << endl;

	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, "<"));
	cout << endl;
}