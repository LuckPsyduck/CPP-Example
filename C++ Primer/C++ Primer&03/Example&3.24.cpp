#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
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
		return - 1;
	}
	cout << "两项之和依次为: " << endl;
	for (auto it = vint.cbegin(); it != vint.cend() - 1; it++)
	{
		cout << (*it + *(++it)) << " ";//ci zhong biao da fang shi bu hao 
		if ((it - vint.cbegin() + 1) % 10 == 0)
			cout << endl;
	}
	if (vint.size() % 2 != 0)
		cout << *(vint.cend() - 1);
	return 0;
}