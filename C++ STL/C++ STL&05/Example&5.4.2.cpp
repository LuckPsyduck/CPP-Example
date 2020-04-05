#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<algorithm>
using namespace std;
void main()
{
	list<int> coll1;
	vector<int> coll2;
	for (int i = 1; i <= 9; i++)
		coll1.push_back(i);
	coll2.resize(coll1.size());
	copy(coll1.begin(), coll1.end(), coll2.begin());
	for (auto a : coll2)
		cout << a << " ";
	cout << endl;
	deque<int> coll3(coll1.size());
	copy(coll1.begin(), coll1.end(), coll3.begin());
	for (auto a : coll3)
		cout << a << " ";
	cout << endl;
}