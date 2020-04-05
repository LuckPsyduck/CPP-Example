class Date
{
public:
	Date &operator=(const string &date);
};

Date & Date::operator=(const string &date)
{
	istringstream in(data);
	char ch2, ch1;
	in >> year >> ch1 >> month >> ch2 >> day;
	if (!in || ch1 != '-' || ch2 != '-')
		throw invalid_argument("bad date");
	if(month<1||month>12||day<1||day>31)
		throw invalid_argument("bad date");
	return *this;
}

