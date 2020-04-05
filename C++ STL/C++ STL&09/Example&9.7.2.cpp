#include"algostuff.h"
#include<iterator>
using namespace std;
void main()
{
	int source[] = { 1,4,4,6,1,2,2,3,1,6,6,6,5,7,5,4,4 };
	int sourceNum = sizeof(source) / sizeof(source[0]);

	list<int> coll;

	copy(source, source + sourceNum, back_inserter(coll));
	PRINT_ELEMENTS(coll);

	list<int>::iterator pos;
	pos = unique(coll.begin(), coll.end());

	copy(coll.begin(), pos, ostream_iterator<int>(cout, " "));
	cout << "\n\n";

	copy(source, source + sourceNum, coll.begin());
	PRINT_ELEMENTS(coll);
	//将greater 的比较结果为true 的所有元素删除，\
	该判断不是用来将元素和其前区元素相比较，而是将他和未被删除的前驱元素比较
	coll.erase(unique(coll.begin(), coll.end(), greater<int>()), coll.end());
	PRINT_ELEMENTS(coll);
}  