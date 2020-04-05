#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
template<typename C>
void print(const C &c)
{
	for (auto i=c.begin();i!=c.end();i++)
		cout <<*i << " ";
	cout << endl;
}
int main()
{
	string s = "hello1";
	print(s);

	vector<int> v1 = { 0,2,4,6,8 };
	print(v1);
	list<string> ls = { "hel","lo","!" };
	print(ls);
	return 0;
}

template<typename C>
void print(const C &c)
{
	for(auto i = c.begin(); i!= c.end(), i++)
		cout << *i << " ";
	cout << endl;
}