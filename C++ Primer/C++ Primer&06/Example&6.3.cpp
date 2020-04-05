#include<iostream>>
using namespace std;
int main()
{
	int val;
	cin >>val;
	if (val < 0)
		return -1;
	int ret = 1;
	for (int i = 1; i != val + 1; i++)
		ret *= i;
	cout << ret << endl;
	return 0;
}