#include<iostream>
#include<string>
using namespace std;
bool HASUPPER(const string & str)
{
	for (auto c : str)//由字符串分解为字符
		if (isupper(c))
			return true;
	return false;
}
void CHANGETOLOWER(string & str)
{
	for (auto &c : str)
		c = tolower(c);
}
int main()
{
	cout << "请输入一个字符串:  " << endl;
	string str;
	cin >> str;
	if (HASUPPER(str))
	{
		CHANGETOLOWER(str);
		cout << str << endl;
	/*	getchar();*/
	}
	else
		cout << "no changed!\n";
	return 0;
}
