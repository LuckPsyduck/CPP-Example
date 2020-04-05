bool check_value(Sales_data &sd, double t)
{
	return sd.avg_price() > t;
}
vector<Sales_data>::iterator find_first_high(vector<Sales_data>&vsd, double t)
{
	auto f = bind(check_value, _1, t);
	return find_if(vsd.begin(), vsd.end(), f);
}
