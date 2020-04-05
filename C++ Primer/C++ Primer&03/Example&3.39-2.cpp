#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str1[80], str2[80];
	cout << "ÇëÊäÈëÁ½¸ö×Ö·û´®£º\n";
	cin >> str1 >> str2;
	auto result = strcmp(str1, str2);
	switch(result)
	{ 
		case 1:cout << "big\n"; break;
		case -1: cout << "less\n"; break;
		case 0:cout << "equal\n"; break;
		default:cout << "not define\n"; break;
	}
	return 0;
}