#include"algostuff.h"
using namespace std;
void main()
{
	list<int> coll;
	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);

	cout << "inner product: " << inner_product(coll.begin(), coll.end(), coll.begin(), 0)<< endl;

	cout << "inner reverse product: " << inner_product(coll.begin(), coll.end(), coll.rbegin(), 0) << endl;
/*  1*(1+1)*(2+2)*(3+3)*(4+4)*(5+5)*(6+6)   */
	cout << "product of sums: " << inner_product(coll.begin(), coll.end(), coll.begin(), 1, \
		multiplies<int>(), plus<int>())<<endl;
}