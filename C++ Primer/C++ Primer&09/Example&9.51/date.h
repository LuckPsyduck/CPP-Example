#ifndef DATE_H_INCLUDE
#define DATE_H_INCLUDE
#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

class date
{
public:
	friend ostream & operator<<(ostream &, const date&);
	ostream & operator<<(ostream &out, const date&d)
	{
		out << d.y() << "Äê" << d.m() << "ÔÂ" << d.d() << "ÈÕ" << endl;
		return out;
	}
	date() = default;
	date(string &ds);
	unsigned y() const { return year; }
	unsigned m() const { return month; }
	unsigned d() const { return day; }
private:
	unsigned year, month, day;
};

const string month_name[] = { "january","february","march","april","may",\
"june","july","august","september","october","november","december" };

const string month_abbr[] = { "jan","feb","mar","apr","may","jun","jul",\
"aug","sept","oct","nov","dec" };
const int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

inline int get_month(string &ds, int & end_of_month)
{
	int i, j;
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < month_abbr[i].size(); j++)
			if (ds[j] != month_abbr[i][j])
				break;
		if (j == month_abbr[i].size())
			break;
	}
	if (i == 12)
		throw invalid_argument("invalid month");
	if (ds[j] == ' ')
	{
		end_of_month = j + 1;
		return i + 1;
	}
	for (; j < month_name[i].size(); j++)
		if (ds[j] != month_name[[i][j])
			break;
	if (j == month_name[i].size() && ds[j] == ' ')
	{
		end_of_month = j + 1;
		return i + 1;
	}
	throw invalid_argument("invaild month");
}
inline int get_day(string &ds, int month, int &p)
{
	size_t q;
	int day = stoi(ds.substr(p), &q);
	if (day<1 || day>days[month])
		throw invalid_argument("invalid date");
		p += q;
	return day;
}
inline int get_year(string &ds, int &p)
{
	size_t q;
	int year = stoi(ds.substr(p), &q);
	if (p + q < ds.size())
		throw invalid_argument("invaild end");
	return year;
}
date::date(string &ds)
{
	int p;
	size_t q;
	if ((p = ds.find_first_of("0123456789")) == string::npos)
		throw invalid_argument("no digital,invalid date");
	if(p>0)
	{
		month = get_month(ds, p);
		day = get_day(ds, month, p);
		if (ds[p] != ' '&&ds[p] != ',')
			throw invalid_argument("invalid interval");
		p++;
		year = get_year(ds, p);
	}
	else
	{
		month = stoi(ds, &q);
		p = q;
		if (month < 1 || month>12)
			throw invalid_argument("invalid month");
		if (ds[p++] != '/')
			throw invalid_argument("invalid interval");
		day = get_day(ds, month, p);
		if (ds[p++] != '/')
			throw invalid_argument("invalid interval");
		year = get_year(ds, p);
	}
}
//ostream & operator<<(ostream &out, const date&d)
//{
//	out << d.y() << "Äê" << d.m() << "ÔÂ" << d.d() << "ÈÕ" << endl;
//	return out;
//}
#endif // !DATE_H_INCLUDE

