#include"algostuff.h"
using namespace std;

bool isEven(int elem)
{
	return elem % 2 == 0;//
}

void main()
{
	vector<int> coll;
	int num;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll,"coll: ");

	num = count(coll.begin(), coll.end(), 4);
	cout << "number of elements equal to 4 : " << num << endl; 

	num = count_if(coll.begin(), coll.end(), isEven);
	cout << "number of elements with even value : " << num << endl;

	num = count_if(coll.begin(), coll.end(), bind2nd(greater<int>(), 4));
	cout << "number of elements greater than 4: " << num << endl;
}