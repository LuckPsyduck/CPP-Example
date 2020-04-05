#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void main()
{
	list<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);

	list<int>::iterator pos;
	pos = find(coll.begin(), coll.end(), 5);
	if (pos != coll.end())
		cout << "difference between beginning and 5: " << distance(coll.begin(), pos) << endl;
	else
		cout << "5 is not found\n";
}