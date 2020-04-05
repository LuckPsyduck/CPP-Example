#include<iostream>
#include<vector>
#include<string>
using namespace std;
void name_string(string &name, const string &prefix, const string &suffix)
{
	name.insert(0," ");
	name.insert(0,prefix);
	name.insert(name.size()," ");
	name.insert(name.size(),suffix);
}
int main()
{
	string s = "james bond";
	name_string(s, "mr.", "ii");
	cout << s << endl;
	s = "m";
	name_string(s, "mrs.", "iii");
	cout << s << endl;
	return 0;
}