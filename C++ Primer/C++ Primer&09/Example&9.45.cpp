#include<iostream>
#include<vector>
#include<string>
using namespace std;
void name_string(string &name, const string &prefix, const string &suffix)
{
	name.insert(name.begin(), 1, ' ');
	name.insert(name.begin(), prefix.begin(), prefix.end());
	name.append(" ");
	name.append(suffix.begin(), suffix.end());
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