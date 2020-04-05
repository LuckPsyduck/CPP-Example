#include<iostream>
#include<vector>
using namespace std;
int main()
{
	const int sz = 10;
	vector<int> vint1, vint2;
	for (int i = 0; i < sz; i++)
		vint1.push_back(i);
	for (int j = 0; j < sz; j++)
		vint2.push_back(vint1[j]);
	for (auto val : vint2)
		cout << val << " ";
	cout << endl;
	return 0;
}