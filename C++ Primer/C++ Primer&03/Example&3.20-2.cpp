#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vint;
	int ival;
	cout << "请输入一组数字: " << endl;
	while (cin >> ival)
		vint.push_back(ival);
	if (vint.size() == 0)
	{
		cout << " no data" << endl;
		return -1;
	}
	cout << "收尾两项的和依次为: " << endl;
	for (decltype(vint.size()) i = 0; i < vint.size()/2; i++)
	{
		cout << vint[i] + vint[vint.size()-i-1] << " ";
		if ((i + 1) % 5 == 0)
			cout << endl;
	}
	if (vint.size() % 2 != 0)
		cout << vint[vint.size()/2];
	return 0;
}