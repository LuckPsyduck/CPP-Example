#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string> vstring;
	string s;
	char cont = 'y';
	cout << "请输入第一个词: " << endl;
	while (cin >> s)
	{
		vstring.push_back(s);
		cout << "您还要继续吗(y or n)?: " << endl;
		cin >> cont;
		if (cont != 'y'&&cont != 'Y')
			break;
		cout << "请输入下一个词: " << endl;
	}
	cout << "转换后的结果是: " << endl;
	for (auto &mem : vstring)
	{
		for (auto &c : mem)
			c = toupper(c);
		cout << mem << endl;
	}
	return 0;
}