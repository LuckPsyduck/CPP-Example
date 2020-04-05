#include"algostuff.h"
#include<cstdlib>
#include<iterator>
using namespace std;
void main()
{
	list<int> coll;

	generate_n(back_inserter(coll), 5, rand);
	PRINT_ELEMENTS(coll);

	generate(coll.begin(), coll.end(), rand);
	PRINT_ELEMENTS(coll);
}
