#include<iostream>
#include<map>
#include<string>
#include<iomanip>
using namespace std;
void main()
{
	typedef multimap<string, string> StrStrMap;
	StrStrMap dict;
	dict.insert(make_pair("day", "Tag"));
	dict.insert(make_pair("strange", "frem"));
	dict.insert(make_pair("car", "auto"));
	dict.insert(make_pair("smart", "elegant"));
	dict.insert(make_pair("trait", "merkmal"));
	dict.insert(make_pair("strange", "seltsam"));
	dict.insert(make_pair("smart", "raffiniert"));
	dict.insert(make_pair("smart", "klug"));
	dict.insert(make_pair("clever", "raffiniert"));
	StrStrMap::iterator pos;
	cout.setf(ios::left, ios::adjustfield);
	cout << ' ' << setw(10) << "english " << "german " <<endl;
	cout << setfill('-') << setw(20) << "" << setfill(' ') << endl;
	for (pos = dict.begin(); pos != dict.end(); ++pos)
		cout << ' ' << setw(10) << pos->first.c_str() << pos->second << endl;
	cout << endl;

	string word("smart");
	cout << word << ": " << endl;
	for (pos = dict.lower_bound(word); pos != dict.upper_bound(word); ++pos)
		cout << "    " << pos->second << endl;

	word = ("raffiniert");
	cout << word << ": " << endl;
	for (pos = dict.begin(); pos != dict.end(); ++pos)
		if (pos->second == word)
			cout <<"  "<< pos->first << endl;
}