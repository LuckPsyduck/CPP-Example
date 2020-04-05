#include<iostream>
#include<valarray>
using namespace std;

template <class T>
void printvalarray(const valarray<T>&va,int num)//ÁÐÊý
{
	for (int i = 0; i < va.size() / num; i++)
	{ 
		for (int j = 0; j < num; j++)
			cout << va[i*num + j] << " ";
		cout << "\n";
	}
}

void main()
{
	valarray<double> va(12);
	for (int i = 0; i < 12; i++)
		va[i] = i;

	printvalarray(va, 3);
	//0 3 6 9                                  1 4 7 10                                   2 5 8 11
	va[slice(0, 4, 3)] = pow(valarray<double>(va[slice(1, 4, 3)]), valarray<double>(va[slice(2, 4, 3)]));
	printvalarray(va, 3);

	valarray<double>vb(va[slice(2, 4, 0)]);
	va[slice(2, 4, 3)] *= vb;//2 5 8
	printvalarray(va, 3);

	printvalarray(sqrt(valarray<double>(va[slice(3, 3, 1)])), 3);//3 4 5
	printvalarray(va, 3);
}