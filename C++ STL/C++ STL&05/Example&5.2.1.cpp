#include<iostream>
#include<vector>
using namespace std;
void main()
{
	vector<int> coll;
	for (size_t i = 0; i < 6; i++)
		coll.push_back(i);
	for (size_t i = 0; i < coll.size(); i++)
		cout << coll[i] << " ";
	cout << endl;
}