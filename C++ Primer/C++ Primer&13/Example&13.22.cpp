#include<iostream>
#include<string>
using namespace std;
class Hasptr
{
public:
	Hasptr(const string &s = string()) :ps(new string(s)), i(0) {}
	Hasptr(const Hasptr &p) :ps(new string(*p.ps)), i(p.i) {}
	Hasptr &operator=(const Hasptr&);
	Hasptr &operator=(const string &);
	string& operator*();
	~Hasptr();
private:
	string *ps;
	int i;
};
Hasptr::~Hasptr()
{
	delete ps;
}
inline Hasptr &Hasptr::operator=(const Hasptr &rhs)
{
	auto newps = new string(*rhs.ps);
	delete ps;
	ps = newps;
	i = rhs.i;
	return *this;
}
Hasptr& Hasptr::operator=(const string &rhs)
{
	*ps = rhs;
	return *this;
}
string& Hasptr::operator*()
{
	return *ps;
}
int main()
{
	Hasptr h("hi mom");
	Hasptr h2(h);
	Hasptr h3 = h;
	h2 = "hi dad";
	h3 = "hi son";
	cout << "h: " << *h << endl;
	cout << "h2: " << *h2 << endl;
	cout << "h3: " << *h3 << endl;
	return 0;
}