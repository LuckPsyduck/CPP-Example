#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
	const int SZ = 5;
	int i;
	vector<int> a, b;
	srand((unsigned)time(NULL));
	for (i = 0; i < SZ; i++)
		a.push_back(rand() % 10);
	cout << "系统数据已经生成，请输入您猜测的5个数字（0-9），可以重复:\n";
	int uval;
	for (i = 0; i < SZ; i++)
		if (cin >> uval)
			b.push_back( uval);
	cout << "系统生成的数据是: " << endl;
	for (auto val : a)
		cout << val << " ";
	cout << endl;
	cout << "您猜测到的数据是: \n";
	for (auto val : b)
		cout << val << " ";
	cout << endl;
	auto it1=a.cbegin(),it2=b.cbegin();
	while (it1!=a.cend()&&it2!=b.cend())
	{
		if (*it1!=*it2)
		{
			cout << "error \n";
			return -1;
		}
		it1++;
		it2++;
	}
	cout << "yes\n";
	return 0;
}