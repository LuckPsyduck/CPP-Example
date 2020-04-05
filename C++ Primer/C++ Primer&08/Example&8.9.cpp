#include<iostream>
#include<sstream>
#include<string>
#include<stdexcept>
using namespace std;
istream &f(istream & in)
{
	string v;
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
	ostringstream msg;
	msg << "C++ primer five\n";
	istringstream in(msg.str());
	f(in);
	return 0;
}