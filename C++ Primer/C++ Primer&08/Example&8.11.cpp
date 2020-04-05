#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
struct personinfo
{
	string name;
	vector<string> phones;
};

int main()
{	
	string line, word;
	vector<personinfo> people;
	istringstream record;
	while (getline(cin, line))
	{
		personinfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	return 0;
}