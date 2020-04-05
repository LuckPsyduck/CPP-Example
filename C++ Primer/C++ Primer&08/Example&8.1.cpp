#include<iostream>
#include<stdexcept>
using namespace std;
istream &f(istream & in)
{
	int v;
	while (in >> v, !in.eof())
	{
		if (in.bad())
			throw runtime_error("IO error\n");
		if (in.fail())
		{
			cerr << "data error try again\n";
			in.clear();
			in.ignore(100, '\n');
			continue;
		}
		cout << v << endl;
	}
	in.clear();
	return in;
}
int main()
{
	cout << "enter integer :" << endl;
	f(cin);
	return 0;
}