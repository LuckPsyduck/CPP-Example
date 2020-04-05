#include"algostuff.h"
#include<iterator>
using namespace std;

void main()
{
	deque<int> coll1;
	vector<int> coll6(6);
	vector<int> coll30(30);

	INSERT_ELEMENTS(coll1, 3, 7);
	INSERT_ELEMENTS(coll1, 2, 6);
	INSERT_ELEMENTS(coll1, 1, 5);
	PRINT_ELEMENTS(coll1);

	vector<int>::iterator pos6;
	//被排序的数量是源区间和目标区间的元素较小值
	pos6 = partial_sort_copy(coll1.begin(), coll1.end(), coll6.begin(), coll6.end());
	copy(coll6.begin(), pos6, ostream_iterator<int>(cout, " "));
	cout << endl;

	vector<int>::iterator pos30;
	pos30 = partial_sort_copy(coll1.begin(), coll1.end(), coll30.begin(), coll30.end(), greater<int>());

	copy(coll30.begin(), pos30, ostream_iterator<int>(cout, " "));
	cout << endl;
}