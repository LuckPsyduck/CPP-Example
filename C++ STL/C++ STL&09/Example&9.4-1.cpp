#include"algostuff.h"
void print(int elem)
{
	cout << elem << " ";
}
void main()
{
	vector<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);

	for_each(coll.begin(), coll.end(), print);
	cout << endl;
}