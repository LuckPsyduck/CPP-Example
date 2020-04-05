#include<iostream>
#include<string>
#include<ostream>
#include<vector>
#include "a.h"
using namespace std;

int main()
{
	vector<Quote> itemvec;
	for (size_t i = 0; i!=10; i++)
	{
		Bulk_quote item("c++ primer", 6, 5, 0.5);
		itemvec.push_back(item);
	}
	double sum = 0;
	for (vector<Quote>::iterator iter = itemvec.begin(); iter != itemvec.end(); ++iter)
	{
		sum += iter->net_price(10);
	}
	cout << sum << endl;
}