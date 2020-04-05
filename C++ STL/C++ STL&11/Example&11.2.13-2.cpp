#include<string>
#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;

bool nocase_compare(char c1, char c2)
{
	return toupper(c1) == toupper(c2);
}

void main()
{
	string s1("This is a string");
	string s2("STRING");

	if (s1.size() == s2.size() && equal(s1.begin(), s1.end(), s2.begin(), nocase_compare))
		cout << "the string are equal" << endl;
	else
		cout << "the string are not equal" << endl;

	string::iterator pos;
	pos = search(s1.begin(), s1.end(), s2.begin(), s2.end(), nocase_compare);
	if (pos == s1.end())
		cout << "s2 is not substring of s1" << endl;
	else
		cout << "s2 is not substring of s1" << endl;
}