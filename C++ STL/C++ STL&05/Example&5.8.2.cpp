#include<iostream>
#include<list>
#include<algorithm>
#include<cstdlib>
using namespace std;
bool isprime(int number)
{
	if (number == 0 || number == 1)
		return true;
	int divsor;
	for (divsor = number / 2; number%divsor != 0; --divsor)
		;
	return divsor == 1;//wei zhishu shuo ming douwei zheng chu
}
void main()
{
	list<int> coll;
	for (int i = 24; i <= 30; ++i)
		coll.push_back(i);
	list<int>::iterator pos;
	pos = find_if(coll.begin(), coll.end(), isprime);
	if (pos != coll.end())
		cout << *pos << " is primer number found" << endl;
}