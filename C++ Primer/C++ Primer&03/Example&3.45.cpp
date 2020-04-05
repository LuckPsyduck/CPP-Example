#include<iostream>
using namespace std;
using int_array = int[4];
int main()
{
	int ia[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
	cout << "用for输出多维数组内容:\n";
	for (auto &row : ia)
	{
		for (auto &col : row)
			cout << col << " ";
		cout << "\n";
	}
	cout << "利用普通for :\n";
	for (int i = 0; i != 3; i++)
	{
		for (int j = 0; j != 4; j++)
			cout << ia[i][j] << " ";
		cout << endl;
	}
	return 0;
}