#include<iostream>
#include<list>
#include<algorithm>
#include"print.h"
using namespace std;
class Nth
{
private:
	int nth;
	int count;
public:
	Nth(int n) :nth(n), count(0) {}
	bool operator()(int) { return ++count == nth; }
};
void main()
{
	list<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);
	PRINT_ELEMENTS(coll);
	cout << endl;

	list<int>::iterator pos;
	pos = remove_if(coll.begin(), coll.end(), Nth(3));

	coll.erase(pos, coll.end());
	PRINT_ELEMENTS(coll, "nth removed: ");
	cout << endl;
}