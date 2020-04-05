#include<iostream>
#include<valarray>
using namespace std;

template<class T>
void printvalarray(const valarray<T>&va, int num)
{
	for (int i = 0; i < va.size() / num; i++)
	{
		for (int j = 0; j < num; j++)
			cout << va[i*num + j] << " ";
		cout << "\n";
	}
	cout << endl;
}

void main()
{
	valarray<double> va(12);
	for (int i = 0; i < 12; i++)
		va[i] = i;
	printvalarray(va, 3);

	va[va < 5.0] = 77.0;//ÀàÐÍÒ»ÖÂ
	va[va > 5.0&&va < 9.0] = valarray<double>(va[va > 5.0&&va < 9.0]) + 100.0;

	printvalarray(va, 3);
}