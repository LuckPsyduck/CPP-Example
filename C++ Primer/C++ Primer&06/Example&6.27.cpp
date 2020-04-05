#include<iostream>
#include<string>
using namespace std;
int icount(initializer_list<int> il)//³£Á¿
{
	int count = 0;
	for (auto val : il)
		count += val;
	return count;
}
int main(int argc, char * *argv)
{
	cout << icount({ 1,6,9 }) << endl;
	cout << icount({ 4,5,9,18 }) << endl;
	return 0;
}