#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	const int SZ = 10;
	int a[SZ];
	srand((unsigned)time(NULL));
	cout << "数组的内容是: \n";
	for (auto &val : a)
	{
		val = rand() % 100;
		cout << val << " ";
	}
	cout << endl;
	vector<int> vint(begin(a), end(a));
	cout << "vector :\n";
	for (auto val : vint)
		cout << val << " ";
	return 0;
}