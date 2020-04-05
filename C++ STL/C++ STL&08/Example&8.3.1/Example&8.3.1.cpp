#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<iterator>
#include"compose11.h"
#include"print.h"
using namespace std;
void main()
{
	vector<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);

	PRINT_ELEMENTS(coll);
	cout << endl;

	transform(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "),\
		compose_f_gx(bind2nd(multiplies<int>(), 5), bind2nd(plus<int>(), 10)));//plus after mul
	cout << endl;
}