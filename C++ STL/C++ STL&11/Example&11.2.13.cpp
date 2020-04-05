#include<string>
#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
void main()
{
	string s("The zip code of Hondelage in Germany is 38108");
	cout << "original: " << s << endl;

	transform(s.begin(), s.end(), s.begin(), towlower);
	cout << "lowered : " << s << endl;

	transform(s.begin(), s.end(), s.begin(), toupper);
	cout << "uppered: " << s << endl;
}