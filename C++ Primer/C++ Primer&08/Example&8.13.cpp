#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
struct personinfo
{
	string name;
	vector<string> phones;
};
string format(const string &s) { return s; }
bool valid(const string &s)
{
	return true;
}
int main(int argc,char **argv)
{
	string line, word;
	vector<personinfo> people;
	istringstream record;
	if (argc!= 2)
	{
		cerr << "give file name\n";
		return -1;
	}
	ifstream in(argv[1]);
	if (!in)
	{
		cerr << "not open file\n";
		return -1;
	}
	while (getline(in,line))
	{
		personinfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	ostringstream os;
	for (const auto &entry : people)
	{
		ostringstream formatted, badnums;
		for (const auto &num : entry.phones)
		{
			if (!valid(num))
				badnums << "" << num;
			else
				formatted << "" << format(num);
		}
		if (badnums.str().empty())
			os << entry.name << " " << formatted.str() << endl;
		else
			cerr << "input error" << entry.name << "invalid number(s)" << badnums.str() << endl;
	}
	cout << os.str() << endl;
	return 0;
}