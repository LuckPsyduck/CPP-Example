#include<iostream>
#include<list>
#include<deque>
#include<algorithm>
#include"countptr.h"
using namespace std;

void printcountedptr(countedptr<int> elem)
{
	cout << *elem <<" ";
}

void main()
{
	static int values[] = { 3,5,9,1,6,4 };
	typedef countedptr<int> Intptr;
	deque<Intptr> coll1;
	list<Intptr> coll2;

	for (int i = 0; i < sizeof(values) / sizeof(values[0]); ++i)
	{
		Intptr ptr(new int(values[i]));
		coll1.push_back(ptr);
		coll2.push_front(ptr);
	}

	for_each(coll1.begin(), coll1.end(), printcountedptr);
	cout << endl << endl;

	for_each(coll2.begin(), coll2.end(), printcountedptr);
	cout << endl << endl;

	*coll1[2] *= *coll1[2];
	(**coll1.begin()) *= -1;
	(**coll2.begin()) = 0;//reference coll1 and coll2 change

	for_each(coll1.begin(), coll1.end(), printcountedptr);
	cout << endl << endl;

	for_each(coll2.begin(), coll2.end(), printcountedptr);
	cout << endl << endl;

}