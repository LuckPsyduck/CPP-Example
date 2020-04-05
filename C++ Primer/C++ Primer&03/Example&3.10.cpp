#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cout << "请输入一个字符串，最好包含一些标点: " << endl;
	getline(cin, s);
	int i = 0;
	for (auto c : s)
	{
		if (!ispunct(c))
			cout << c;
	}
	cout << endl;
	return 0;
}