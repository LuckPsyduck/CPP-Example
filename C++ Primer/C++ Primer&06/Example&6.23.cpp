#include<iostream>
using namespace std;
void printf1(const int *p)
{
	cout << *p << endl;
}
void printf2(const int *p, const int sz)
{
	int i = 0;
	while (i != sz)
	{
		cout << *p++ << endl;
		++i;
	}
}
	void printf3(const int *b, const int *e)
	{
		for (auto q = b; q != e; ++q)
			cout << *q << endl;
	}
int main()
{
	int i = 0, j[2] = { 0,1 };
	printf1(&i);
	printf1(j);
	printf2(&i,1);
	printf2(j, sizeof(j) / sizeof(*j));
	auto b = begin(j);
	auto e = end(j);
	printf3(b, e);
	return 0;
}
