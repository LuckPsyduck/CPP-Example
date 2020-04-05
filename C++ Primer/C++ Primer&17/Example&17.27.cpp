#include<iostream>
#include<string>
#include<regex>
using namespace std;
int main()
{
	string zip = "(\\d{5})(\\d{4})?";// "(\\d{5})(\\d{4})";
	regex r(zip);
	string s;
	string fmt = "$1-$2";
	while (getline(cin, s)&&s!="q")
	{
		cout << regex_replace(s, r, fmt, regex_constants::match_flag_type::format_no_copy);
	}
	return 0;
}