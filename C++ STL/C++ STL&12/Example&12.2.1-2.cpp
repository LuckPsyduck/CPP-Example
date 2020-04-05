#include<iostream>
#include<valarray>
using namespace std;
template <class T>
void printvalarray(const valarray<T>& va)
{
	for (int i = 0; i < va.size(); i++)
		cout << va[i] << ' ';
	cout << endl;
}

void main()
{
	valarray<double> va(9);
	for (int i = 0; i < va.size(); i++)
		va[i] = i*1.1;
	printvalarray(va);

	va *= 2.0;//每个数对应相乘
	printvalarray(va);

	valarray<double> vb(va + 10.0);//每个数对应相加
	printvalarray(vb);

	valarray<double> vc;
	vc = sqrt(va) + vb / 2.0 - 1.0;
	printvalarray(vc);
}