#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int mycompare(const int val, const int *p)
{
	return (val > *p) ? val : *p;
}
int main()
{
	srand((unsigned)time(NULL));
	int a[10];
	for (auto &i : a)
		i = rand() % 100;
	cout << "input digital\n";
	int j;
	cin >> j;
	cout << "您输入的数与数组首元素中较大的是: " << mycompare(j, a) << endl;
	for (auto i : a)
		cout << i << " ";
	cout << endl;
	return 0;
}