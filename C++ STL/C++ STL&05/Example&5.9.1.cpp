#include<iostream>
#include<list>
#include<algorithm>
#include"print.h"
using namespace std;
class AddValue
{
public:
	AddValue(int v) :theValue(v) {}
	void operator()(int &elem) const { elem += theValue; }
private:
	int theValue;
};
void main()
{
	list<int> coll;//shuiji 
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);
	PRINT_ELEMENTS(coll, "initialized: ");
	cout << endl;
	for_each(coll.begin(), coll.end(), AddValue(10));
	PRINT_ELEMENTS(coll, "after adding 10:");
	cout << endl;
	for_each(coll.begin(), coll.end(), AddValue(*coll.begin()));//.de you xian ji gao
	PRINT_ELEMENTS(coll, "after adding first element: ");
	cout << endl;
}