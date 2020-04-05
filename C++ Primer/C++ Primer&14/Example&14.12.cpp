#include<iostream>
using namespace std;
class Date
{
public:
	Date() { };
	Date(int y, int m, int d) { year = y; month = m; day = d; }
	friend istream& operator >> (istream &is, Date &dt);
private:
	int year, month, day;
};
istream & operator >> (istream &is, Date &dt)
{
	is >> dt.year >> dt.month >> dt.day;
	if (!is)
		dt = Date(0, 0, 0);
	return is;
}
int main()
{

}