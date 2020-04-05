#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>
using namespace std;
class Sales_data
{
	friend istream &read(istream &is, Sales_data &s);
	friend ostream &print(ostream &os, const Sales_data &s);
	friend bool operator==(const Sales_data&, const Sales_data&);
	friend bool operator<(const Sales_data&, const Sales_data&);
public:
	Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	Sales_data() = default;
	Sales_data(const string &book) :bookNo(book) {}
	Sales_data(istream &is) { read(is, *this); }
public:
	Sales_data &combine(const Sales_data &rhs);
	string isbn() const { return bookNo; }
private:
	string bookNo;
	unsigned units_sold = 0;
	double sellingprice = 0.0;
	double saleprice = 0.0;
	double discount = 0.0;
};
inline bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() == rhs.isbn();
}
inline bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.units_sold == rhs.units_sold &&lhs.sellingprice == rhs.sellingprice &&lhs.saleprice == rhs.saleprice &&lhs.isbn() == rhs.isbn();
}
inline bool operator!=(const Sales_data &lhs, const Sales_data &rhs)
{
	return !(lhs == rhs);
}
Sales_data & Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	saleprice = (rhs.saleprice *rhs.units_sold + saleprice*units_sold) / (rhs.units_sold + units_sold);
	if (sellingprice != 0)
		discount = saleprice / sellingprice;
	return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
ostream & print(ostream &os, const Sales_data &s)
{
	os << s.isbn() << " " << s.units_sold << " " << s.sellingprice << " " << s.saleprice << " " << s.discount;
	return os;
}
inline Sales_data Sales_data::add(const Sales_data & lhs, const Sales_data & rhs)
{
	return Sales_data();
}
istream & read(istream& is, Sales_data& s)
{
	is >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice;
	return is;
}
#endif

/*
ostream & print(ostream &os, const Sales_data &s)
{
	os << << endl;
	return os;
}

*/
