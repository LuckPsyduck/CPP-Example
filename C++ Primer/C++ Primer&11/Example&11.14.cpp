#include<iostream>
#include<fstream>
#include<map>
//#include<sstream>
//#include<list>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
void add_family(map<string, vector<pair<string, string>>>&families, const string &family)
{
	families[family];
}
void add_child(map<string, vector<pair<string, string>>>&famiies, const string &family\
	, const string &child, const string &birthday)
{
	famiies[family].push_back({ child,birthday });
}
int main()
{
	map<string, vector<pair<string, string>>> families;
	add_family(families, "张");
	add_child(families, "张", "强", "1970-1-1");
	add_child(families, "张", "刚", "1980-1-1");
	add_child(families, "王", "五", "1990-1-1");
	add_family(families, "王");
	for (auto f : families)
	{
		cout << f.first << "  家的孩子: ";
		for (auto c : f.second)
			cout << c.first << " " << c.second << endl;
		cout << endl;
	}
	return 0;
}