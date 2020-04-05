#include<iostream>
#include<valarray>
using namespace std;

template<class T>
void printvalarray3(const valarray<T>&va, int dim1, int dim2)
{
	for (int i = 0; i < va.size() / (dim1*dim2); i++)
	{
		for (int j = 0; j < dim2; j++)
		{
			for (int k = 0; k < dim1; k++)
				cout << va[i*dim1*dim2 + j*dim1 + k] << " ";
			cout << "\n";
		}
		cout << "\n";
	}
}

void main()
{
	valarray<double> va(24);
	for (int i = 0; i < 24; i++)
		va[i] = i;

	printvalarray3(va, 3, 4);

	size_t lengthvalues[] = { 2,3 };
	size_t stridevalues[] = { 12,3 };
	valarray<size_t>length(lengthvalues, 2);
	valarray<size_t>stride(stridevalues, 2);


	va[gslice(0, length, stride)] = valarray<double>(va[gslice(1, length, stride)]);

	va[gslice(0, length, stride)] += valarray<double>(va[gslice(2, length, stride)]);

	printvalarray3(va, 3, 4);
}