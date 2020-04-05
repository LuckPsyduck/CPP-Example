#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	vector<int> vint;
	const int SZ = 10;
	srand((unsigned)time(NULL));
	cout << "array : \n";
	for (int i = 0; i < 10; i++)
	{
		vint.push_back(rand() % 100);
		cout << vint[i] << " ";
	}
	cout << endl;
	for (auto &val : vint)
		val = (val % 2) != 0 ? val * 2 : val;
	cout << "adapt£º\n";
	for (auto it = vint.cbegin(); it != vint.cend(); it++)
		cout << *it << " ";
	cout << endl;
	return 0;
}
