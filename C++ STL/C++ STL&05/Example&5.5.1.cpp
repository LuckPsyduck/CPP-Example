#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;
void main()
{
	list<int> coll1;
	vector<int> coll2;
	for (int i = 1; i <= 9; i++)
		coll1.push_back(i);
	copy(coll1.begin(), coll1.end(), back_inserter(coll2));
	for (auto a : coll2)
		cout << a << " ";
	cout << endl;
	deque<int> coll3;
	copy(coll1.begin(), coll1.end(), front_inserter(coll3));
	for (auto a : coll3)
		cout << a << " ";
	cout << endl;
	set<int> coll4;
	copy(coll1.begin(), coll1.end(), inserter(coll4, coll4.begin()));
	for (auto a : coll4)
		cout << a << " ";
	cout << endl;
}