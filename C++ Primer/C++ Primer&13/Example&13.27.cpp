#include<iostream>
#include<string>
using namespace std;
class Hasptr
{
public:
	Hasptr(const string &s = string()) :ps(new string(s)), i(0),use(new size_t(1)) {}
	Hasptr(const Hasptr &p) :ps(p.ps), i(p.i), use(p.use) { ++*use; }
	Hasptr &operator=(const Hasptr&);
	Hasptr &operator=(const string &);
	string &operator*();
	~Hasptr();
private:
	string *ps;
	int i;
	size_t *use;
};

Hasptr::~Hasptr()
{
	if (--*use == 0)
	{ 
		delete ps;
		delete use;
	}
}

inline Hasptr &Hasptr::operator=(const Hasptr &rhs)
{
	++*rhs.use;
	if (--*use == 0)
	{
		delete ps;
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
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
	Hasptr h2=h;
	h = "hi dad";
	cout << "h: " << *h << endl;
	cout << "h2: " << *h2 << endl;
	return 0;
}