class Sales_data
{
	friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
public:
	Sales_data & operator+=(const Sales_data & rhs);
};
// Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
// {
// 	Sales_data sum = lhs;
// 	sum.units_sold += rhs.units_sold;
// 	sum.revenue += rhs.revenue;
// 	return sum;
// }
// Sales_data & operator+=(const Sales_data & rhs)
// {
// 	*this = (*this) + rhs;
// }