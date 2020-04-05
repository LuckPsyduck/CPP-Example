class Quote
{
public:
	Quote() = default;
	Quote(const string &book, double sales_price) :bookno(book), price(sales_price) {}
	string isbn() const { return bookno; }
	virtual double net_price(size_t n) const { return n*price; }
	virtual ~Quote() = default;
private:
	string bookno;
protected:
	double price = 0;
};
double print_total(ostream &os, Quote &item, size_t n)
{
	double ret = item.net_price;
	os << "isbn:" << item.isbn() << " sold:" << n << "total:" << ret << endl;
	return ret;
}