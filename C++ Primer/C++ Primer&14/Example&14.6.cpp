class Sales_data
{
	friend ostream& operator<<(ostream &os, const Sales_data &item);

};
ostream & operator<<(ostream &os,const Sales_data &item)
{
	const char *seq = ' ';
	os << item.isbn() << *seq << item.units_sols << *seq << item.revenue << seq << item.avg_price();
	return os;
}