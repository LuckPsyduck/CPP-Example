#include<iostream>
#include<string>
using namespace std;
class book
{
private:
	string name, isbn, author, publisher;
	double price = 0;
public:
	friend istream & operator >> (istream& in, book& s)
	{
		in >> s.author >> s.isbn >> s.name >> s.price >> s.publisher;
		return in;
	}
	friend ostream & operator<<(ostream& out, const  book& s)
	{
		out << s.author << s.isbn<<s.name<<s.price<<s.publisher;
		return out;
	}
	book() = default;
	book(const string & n, const string & i, double pr, const string &a, const string &p)
	{
		name = n;
		isbn = i;
		price = pr;
		author = a;
		publisher = p;
	}
	book(istream &is) {is >> *this; }
};
int main()
{
	book a1;
	cout << a1 << endl;
	book a2(cin);
	cout << a2 << endl;
	book a3("s", "a", 2, "c", "d");
	cout << a3 << endl;
	return 0;
}
