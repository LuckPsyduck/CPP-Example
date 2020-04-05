#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<unsigned> vUS(11);
	auto it = vUS.begin();
	int ival;
	cout << "请输入一组成绩(0-100): " << endl;
	while (cin >> ival)
		if (ival < 101)
			++*(it + ival / 10);
	cout << "总共输入了" << vUS.size() << "个成绩" << endl;
	cout << "各个分数段的人数分布：  " << endl;
	for (it = vUS.begin(); it != vUS.end(); it++)
		cout << *it << " ";
	cout << endl;
	return 0;
}