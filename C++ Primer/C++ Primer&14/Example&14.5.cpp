#include<iostream>
using namespace std;
class Date
{
public:
	Date() {}
	Date(int y, int m, int d) { year = y; month = m; day = d; }
	friend ostream &operator<<(ostream & os, const Date &dt);
private:
	int year, month, day;
};
ostream &operator<<(ostream &os, const Date &d)
{
	const char seq = '\t';
	os << "year:" << d.year << seq << "month:" << d.month << seq << "day:" << d.day << endl;
	return os;
}
int main()
{
	Date d(2, 6, 50);
	cout << d << endl;
	return 0;
}

