#include<iostream>
#include<string>
#include<ostream>
using namespace std;
class Quote
{
public:
	Quote() = default;
	Quote(const string &book = "", double sales_price = 0) :bookno(book), price(sales_price)
	{
		cout << "Quto constructor is running\n";
	}
	string isbn() const
	{
		return bookno;
	}
	virtual double net_price(size_t n) const
	{
		return n * price;
	}
	virtual void debug()
	{
		cout << "bookno=" << bookno << "price= " << price << endl;
	}
	virtual ~Quote()
	{
		cout << "Quote destructor is running\n";
	}
	friend ostream &operator<<(ostream &, const Quote&);
private:
	string bookno;
protected:
	double price = 0;
};
ostream &operator<<(ostream & os, const Quote & e)
{
	os << "using operator<<(ostream &, Quote & e)\n";
	return os;
}
class Bulk_quote :public Quote
{
public:
	Bulk_quote(const string &book = "",double sales_price=0,size_t qty=0,double disc=0):\
		Quote(book, sales_price), min_qty(qty), discount(disc)
	{
		cout << "Bulk_construct is running \n";
	}
	double net_price(size_t cnt) const
	{
		if (cnt > min_qty)
			return cnt*(1 - discount*price);
		else
			return cnt*price;
	}
	~Bulk_quote()
	{
		cout << "Bulk_quote destructor is running \n";
	}
private:
	size_t min_qty;
	double discount;
};
ostream &operator<<(ostream &os, Bulk_quote &bq)
{
	cout << "using operator <<(ostream &os, Bulk_quote &bq)\n";
	return os;
}
int main()
{
	Quote base("c++ primer ", 128.0);
	Bulk_quote bulk("core python programming",89, 5, 0.19);
	cout << base << endl;
	cout << bulk << endl;
	return 0;
}