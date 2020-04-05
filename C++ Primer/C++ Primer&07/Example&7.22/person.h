#ifndef PERSON_H_INCLUDE
#define PERSON_H_INCLUDE
#include<iostream>
#include<string>
using namespace std;
class person
{
private:
	string strname;
	string straddress;
public:
	friend istream & operator >> (istream& in, person& s)
	{
		in >> s.straddress >> s.strname;
		return in;
	}
	friend ostream & operator<<(ostream& out, const  person& s)
	{
		out << s.straddress << s.strname;
		return out;
	}
public:
	person() = default;
	person(const string &name, const string &add)
	{
		strname = name;
		straddress = add;
	}
	person(istream &is) { is >> *this; }
public:
	string getname() const { return strname; }
	string getaddress() const { return straddress; }
};
#endif
