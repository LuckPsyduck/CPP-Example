class Sales_data
{
public:
	Sales_data &operator=(const Sales_data &isbn);
};
Sales_data & Sales_data::operator=(const string &isbn)
{
	bookno = isbn;
	return *this;
}