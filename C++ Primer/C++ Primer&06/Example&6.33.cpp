#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> vint, unsigned index)
{
	unsigned sz = vint.size();
	if (!vint.empty() && index < sz)
	{
		cout << vint[index] << endl;
		print(vint, index + 1);//ตÝน้
	}
}
int main()
{	
	vector<int> v = { 1,3,5,7,9,11,13,15 };
	print(v, 0);
	return 0;
}