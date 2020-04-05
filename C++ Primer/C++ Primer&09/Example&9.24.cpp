#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<int> iv = {1,2};
	cout << iv.at(0) << endl;
	cout << iv[0] << endl;
	cout << iv.front() << endl;
	cout << *(iv.begin()) << endl;
	return 0;
}