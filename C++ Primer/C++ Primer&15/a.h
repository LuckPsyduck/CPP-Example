#ifndef A_H
#define A_H
#include<iostream>
#include<string>
#include<ostream>
//using namespace std;
//class Quote
//{
//public:
//	Quote() = default;
//	Quote(const string &book, double sales_price) :bookno(book), price(sales_price) {}
//	string isbn() const { return bookno; }
//	virtual double net_price(size_t n) const { return n*price; }
//	virtual ~Quote() = default;
//private:
//	string bookno;
//protected:
//	double price = 0;
//};
//class Bulk_quote :public Quote
//{
//public:
//	double net_price(size_t cnt) const override
//	{
//		if (cnt >= min_qty)
//			return cnt*(1 - discount)*price;
//		else
//			return cnt*price;
//	}
//private:
//	size_t min_qty;
//	double discount;
//};




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
	virtual double net_price(size_t n)const
	{
		return n*price;
	}
	virtual void debug()
	{
		cout << "bookno=" << bookno << "price= " << price << endl;
	}
	virtual ~Quote()
	{
		cout << "Quote destructor is running\n";
	}
	friend ostream &operator<<(ostream &, Quote&);
private:
	string bookno;
protected:
	double price = 0;
};

ostream &operator<<(ostream & os, Quote & e)
{
	os << "using operator<<(ostream &, Quote & e) \n";
	return os;
}
class Bulk_quote :public Quote
{
public:
	Bulk_quote(const string &book = "", double sales_price = 0, size_t qty = 0, double disc = 0) :\
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
	os << "using operator <<(ostream &os, Bulk_quote &bq) \n";
	return os;
}
#endif // !A_H

