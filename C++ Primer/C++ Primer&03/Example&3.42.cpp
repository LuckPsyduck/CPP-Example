#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	const int SZ = 10;
	vector<int> vint;
	srand((unsigned)time(NULL));
	cout << "vector :\n";
	for (int i = 0; i < SZ; i++)
	{
		vint.push_back(rand() % 1000);
		cout << vint[i] << " ";
	}
	cout << "\n";
	auto it = vint.cbegin();
	int *a=new int[vint.size()];
	cout << "array:\n";
	for (int i=0;i<vint.size()&&it!=vint.cend();it++,i++)
	{
		a[i]= *it;
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}