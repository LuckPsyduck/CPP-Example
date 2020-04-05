#include<iostream>
#include<string>
using namespace std;
int main()
{
	do
	{
		cout << "input two strings:  \n";
		string str1, str2;
		cin >> str1 >> str2;
		if (str1.size() < str2.size())
			cout << str1 << endl;
		else if (str1.size() > str2.size())
			cout << str2 << endl;
		else
			cout << "equal\n";
	} while (cin);
	return 0;
}