#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "first operand: ";
	if (!(cin >> x))
	{ 
			cerr << "error while reading the first floating value " << endl;
		return EXIT_FAILURE;
	}
	cout << "second operator: ";
	if (!(cin >> y))
	{
		cerr << "error while reading the first floating value " << endl;
		return EXIT_FAILURE;
	}
	cout << x*y << endl;
}