#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
#include"print.h"
using namespace std;
class IntSequence
{
private:
	int value;
public:
	IntSequence(int initialValue) :value(initialValue){}

	int operator()(){return value++; }
};
void main()
{
	list<int> coll;
	generate_n(back_inserter(coll), 9, IntSequence(1));

	PRINT_ELEMENTS(coll);
	cout << endl;

	generate(++coll.begin(), --coll.end(), IntSequence(42));

	PRINT_ELEMENTS(coll);
	cout << endl;
}