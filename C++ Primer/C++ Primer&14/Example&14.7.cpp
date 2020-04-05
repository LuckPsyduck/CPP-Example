#include<iostream>
using namespace std;
class String
{
	String();
	String(const char *str);
	friend ostream& operator<<(ostream &os, const String &str);
private:
	char *str;
};
ostream& operator<<(ostream &os,const String &str)
{
	os << str;
	return os;
}
//int main()
//{
//	String d();
//	cout <<d<< endl;
//}
