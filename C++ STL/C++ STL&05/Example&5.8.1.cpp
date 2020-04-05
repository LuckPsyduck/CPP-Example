#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(int elem)
{
	cout << elem << " ";
}
void main()
{
	vector<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);
	for_each(coll.begin(), coll.end(), print);
	cout << endl;
}