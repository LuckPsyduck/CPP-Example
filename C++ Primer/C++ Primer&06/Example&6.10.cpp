#include<iostream>
using namespace std;
void SWAP(int *p, int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

int main()
{
	int a = 5, b = 10;
	int *r = &a, *s = &b;
	SWAP(r, s);
	cout << "a=" << a << endl << "b=" <<b << endl;
	return 0;
}
