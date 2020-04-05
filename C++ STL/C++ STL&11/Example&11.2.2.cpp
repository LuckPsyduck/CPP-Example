#include<iostream>
#include<string>
using namespace std;
void main()
{
	string s1("nico");
	string s2("nico", 5);// \0
	string s3(5, '\0');

	cout << s1.length() << endl << s2.length() << endl << s3.length() << endl;

	//string c1('x');//error
	string c2(1, 'x');
}