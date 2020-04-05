#include<iostream>
#include<string>
using namespace std;
int main()
{
	string currstring, prestring;
	bool b1 = true;
	cout << "请输入一组字符串: \n";
	while (cin >> currstring)
	{
		if (!isupper(currstring[0]))
			continue;
		if (currstring == prestring)
		{
			b1 = false;
			cout << "连续出现的字符串是:\n"<<currstring<<endl;
			break;
		}
		prestring = currstring;
	}
	if (b1)
		cout << "没有连续出现的字符串\n";
	return 0;
}