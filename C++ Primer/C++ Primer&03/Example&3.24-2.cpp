#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vint;
	int ival;
	cout << "输入一组数：" << endl;
	while (cin >> ival)
		vint.push_back(ival);
	if (vint.cbegin() == vint.cend())
	{
		cout << "no data" << endl;
		return -1;
	}
	cout << "首尾两项的和依次为: " << endl;
	auto beg = vint.begin();
	auto end = vint.end();
	for (auto it = beg; it != beg+(end-beg)/2; it++)
	{
		cout << (*it + *(beg+(end-it)-1)) << " ";
		if ((it - beg+ 1) % 5 == 0)
			cout << endl;
	}
	if (vint.size() % 2 != 0)
		cout << *(beg+(end-beg)/2);
	return 0;
}