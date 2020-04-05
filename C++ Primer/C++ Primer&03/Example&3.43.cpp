#include<iostream>
using namespace std;
int main()
{
	int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	cout << "用for输出多维数组内容:\n";
	for (int(&row)[4] : ia)
	{
		for (int &col : row)
			cout << col << " ";
		cout << "\n";
	}
	cout << "利用普通for :\n";
	for (int(*p)[4] = ia; p != ia + 3; p++)
	{
		for (int *q = *p; q != *p + 4; q++)
			cout << *q << " ";
		cout << endl;
	}
	return 0;
}