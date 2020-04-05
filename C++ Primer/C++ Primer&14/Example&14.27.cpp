class StrBlobptr
{
public:
	StrBlobptr & operator++();
	StrBlobptr & operator--();

	StrBlobptr & operator++(int);
	StrBlobptr & operator--(int);
};

StrBlobptr & operator++()
{
	check(curr, "increment past end of StrBlobptr");
	++curr;
	return *this;
}
StrBlobptr & operator--()
{
	--curr;
	check(curr, "increment past end of StrBlobptr");
	return *this;
}
StrBlobptr & operator++(int)
{
	StrBlobptr ret = *this;
	++(*this);
	return ret;
}
StrBlobptr & operator--(int)
{
	StrBlobptr ret = *this;
	--(*this);
	return ret;
}


// ""
// StrBlobptr & operator++(int)
// {
// 	StrBlobptr ret = *this;
// 	++(*this);
// 	return ret;
// }

// StrBlobptr & operator--(int)
// {
// 	StrBlobptr ret = *this;
// 	--(*this);
// 	return ret;
// }
// ""