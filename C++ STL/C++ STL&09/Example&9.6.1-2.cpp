#include"algostuff.h"
using namespace std;
void main()
{
	vector<char> soure(10, '.');
	for (int c = 'a'; c <= 'f'; c++)
		soure.push_back(c);
	soure.insert(soure.end(), 10, '.');
	PRINT_ELEMENTS(soure, "source: ");

	vector<char> c1(soure.begin(), soure.end());
	copy(c1.begin() + 10, c1.end() + 16, c1.begin() + 7);//注意区间，前闭后开

	PRINT_ELEMENTS(c1, "c1: ");

	vector<char>c2(soure.begin(), soure.end());
	copy_backward(c2.begin() + 10, c2.begin() + 16, c2.begin() + 19);
	PRINT_ELEMENTS(c2, "c2: ");
}