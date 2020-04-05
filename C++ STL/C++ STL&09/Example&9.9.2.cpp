#include"algostuff.h"
using namespace std;
void main()
{
	deque<int> coll;
	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 1, 5);
	PRINT_ELEMENTS(coll);

	partial_sort(coll.begin(), coll.begin() + 5, coll.end());
	PRINT_ELEMENTS(coll);
	//自定义的函数则直接写函数名，模板函数则需实例化
	partial_sort(coll.begin(), coll.begin() + 5, coll.end(), greater<int>());
	PRINT_ELEMENTS(coll);

	partial_sort(coll.begin(), coll.end(), coll.end());
	PRINT_ELEMENTS(coll);
}