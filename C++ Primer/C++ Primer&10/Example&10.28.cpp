#include<iostream>
#include<iterator>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> vi = { 1,2,3,4,5,6,7,8,9 };
	list<int> li1, li2, li3;
	unique_copy(vi.begin(), vi.end(), inserter(li1, li1.begin()));
	for (auto v : li1)
		cout << v << " ";
	cout << endl;

	unique_copy(vi.begin(), vi.end(), back_inserter(li2));
	for (auto v : li2)
		cout << v << " ";
	cout << endl;

	unique_copy(vi.begin(), vi.end(), front_inserter(li3));
	for (auto v : li3)
		cout << v << " ";
	cout << endl;
	return 0;
}