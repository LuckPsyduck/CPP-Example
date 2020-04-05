#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
void main()
{
	list<int> coll1;
	vector<int> coll2;
	for (int i = 1; i <= 9; i++)
		coll1.push_back(i);
	coll2.resize(coll1.size());//很重要，不然就崩溃,分配大小
	copy(coll1.begin(), coll1.end(), coll2.begin());
	vector<int>::iterator pos;
	for (pos = coll2.begin(); pos != coll2.end(); ++pos)
		cout << *pos << " ";
	cout << endl;
}