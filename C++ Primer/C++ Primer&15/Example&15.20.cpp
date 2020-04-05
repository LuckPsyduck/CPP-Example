#include<iostream>
using namespace std;
class Base
{
public:
	void pub_mem();
protected:
	int prot_mem;
private:
	char priv_mem;
};
struct pub_derv:public Base
{
	int f() { return prot_mem; }
	void memfcn(Base &b)
	{
		b = *this;
		cout << "pub_derv" << endl;
	}
};
struct priv_derv :private Base
{
	int f1() { return prot_mem; }
	void memfcn(Base &b)
	{
		b = *this;
		cout << "priv_derv" << endl;
	}
};
struct prot_derv :protected Base
{
	int f2() { return prot_mem; }
	void memfcn(Base &b)
	{
		b = *this;
		cout << "prot_derv" << endl;
	}
};
struct derived_from_public :public pub_derv
{
	int use_base() { return prot_mem; }
	void memfcn(Base &b)
	{
		b = *this;
		cout << "derived_from_public" << endl;
	}
};
struct derived_from_protected:public prot_derv
{
	int use_base() { return prot_mem; }
	void memfcn(Base &b)
	{
		b = *this;
		cout << "derived_from_protected" << endl;
	}
};
int main()
{
	pub_derv d1;
	priv_derv d2;
	prot_derv d3;
	derived_from_public dd1;
	derived_from_protected dd3;
	Base base;
	Base *p = new Base;
	p = &d1;
	p = &dd1;
	d1.memfcn(base);
	d2.memfcn(base);
	d3.memfcn(base);
	dd1.memfcn(base);
	dd3.memfcn(base);
	return 0;
}