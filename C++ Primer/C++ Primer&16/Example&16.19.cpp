#include<iostream>
#include<string>
#include<vector>
using namespace std;
template<typename C>
void print(const C &d)
{
	for (typename C :: size_type i = 0; i < d.size(); i++)
		cout << d.at(i)<< " ";
	cout << endl;
}
int main()
{
	string s = "hello1";
	print(s);
	vector<int> v1 = { 0,2,4,6,8 };
	print(v1);
	return 0;
}


template<typename C>
void print(const C &d)
{
	for(typename C :: size_type i)
}