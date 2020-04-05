class Quote
{
public:
	Quote() = default;
	Quote(const string &book, double sales_price) :bookno(book), price(sales_price) {}
	string isbn() const { return bookno; }
	virtual double net_price(size_t n) const { return n*price; }
	virtual void debug()
	{
		cout << "bookno=" << bookno << " price=" << price << endl;
	}
	virtual ~Quote() = default;
private:
	string bookno;
protected:
	double price = 0;
};
class Bulk_quote :public Quote
{
public:
	Bulk_quote(const string &book="",double sales_price=0,size_t qty=0,double disc_rate=0):\
		Quote(book, sales_price), min_qty(qty), discount(disc_rate) {}
	double net_price(size_t cnt) const
	{
		if (cnt > min_qty)
			return cnt*(1 - discount)*price;
		else
			return cnt*price;
	}
	virtual void debug()
	{
		Quote::debug();
		cout << "min_qty=" << min_qty << "discount" << discount << endl;
	}
private:
	size_t min_qty;
	double discount;
};