#include<iostream>
#include<string>
using namespace std;
class Sales_data
{
	friend istream & read(istream &is, Sales_data &item);
	friend ostream & print(ostream &os,const Sales_data &item);
public:
	istream & read(istream &is, Sales_data &item);
	ostream & print(ostream &os, const Sales_data &item);
	Sales_data(const string &book,unsigned num,double sellp,double salep):\
		bookno(book), units_sold(num), sellingprice(sellp), saleprice(salep)
	{
		if (sellingprice)
			discount = saleprice / sellingprice;
		cout << "该构造函数接受书号 销售量 原价 实际售价:\n";
	}
	Sales_data() :Sales_data("", 0, 0, 0)
	{
		cout << "no data\n";
	}
	Sales_data(const string &book) :Sales_data(book, 0, 0, 0)
	{
		cout << "have book data\n";
	}
	Sales_data(istream &is) :Sales_data()
	{
		read(is, *this);
		cout << "have user data\n";
	}
private:
	string bookno;
	unsigned units_sold = 0;
	double sellingprice = 0;
	double saleprice = 0;
	double discount = 0;
};
istream & Sales_data::read(istream &is, Sales_data &item)
{
	is >> item.bookno >> item.units_sold >> item.sellingprice >> item.saleprice;
	return is;
}
ostream &Sales_data::print(ostream &os, const Sales_data &item)
{
	os << item.bookno << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " " << item.discount;
	return os;
}
int main()
{
	Sales_data first("978-7-121-15535-2", 85, 128, 109);
	Sales_data second;
	Sales_data third("978-7-121-15535-2");
	Sales_data last(cin);
	return 0;
}