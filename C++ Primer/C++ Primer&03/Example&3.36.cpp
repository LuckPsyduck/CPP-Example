#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	const int SZ = 5;
	int a[SZ], b[SZ], i;
	srand((unsigned)time(NULL));
	for (i = 0; i < SZ; i++)
		a[i] = rand() % 10;
	cout << "系统数据已经生成，请输入您猜测的5个数字（0-9），可以重复:\n";
	int uval;
	for (i = 0; i < SZ; i++)
		if (cin >> uval)
			b[i] = uval;
	cout << "系统生成的数据是: " << endl;
	for (auto val : a)
		cout << val << " ";
	cout << endl;
	cout << "您猜测到的数据是: \n";
	for (auto val : b)
		cout << val << " ";
	cout << endl;
	int *p = begin(a), *q = begin(b);
	while (p != end(a) && q != end(b))
	{
		if (*p != *q)
		{
			cout << "error \n";
			return -1;
		}
		p++;
		q++;
	}
	cout << "yes\n";
	return 0;
}