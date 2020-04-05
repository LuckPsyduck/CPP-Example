#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void print(int elem)
{
	cout << elem << " ";
}

void main()
{
	list<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);
	for_each(coll.begin(), coll.end(), print);
	cout << endl;
	for_each(coll.rbegin(), coll.rend(), print);
	cout << endl;
}