#include<iostream>
#include<cstring>
using namespace std;
#pragma warning (disable:4996)
int main()
{
	char str1[] = "welcome to ";
	char str2[] = "c++ family!";
	char *result=new char [strlen(str1)+strlen(str2)-1];
	strcpy(result, str1);
	strcat(result, str2);
	cout << "firstly string :" << str1 << endl;
	cout << "secondly:" << str2 << endl;
	cout << "connection:" << result << endl;
	return 0;
}