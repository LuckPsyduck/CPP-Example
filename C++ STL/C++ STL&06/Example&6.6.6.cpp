#include<iostream>
#include<iomanip>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
class RuntimeStringCmp
{
public:
	enum cmp_mode {normal,nocase};
private:
	const cmp_mode mode;
	static bool nocase_compare(char c1,char c2)
	{
		return toupper(c1) < toupper(c2);
	}
public:
	RuntimeStringCmp(cmp_mode m = normal) :mode(m) {}
	bool operator()(const string &s1, const string &s2)const
	{
		if (mode == normal)
			return s1 < s2;
		else
			return lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end(), nocase_compare);
	}
};
typedef map<string, string, RuntimeStringCmp> StringStringMap;

void fillAndPrint(StringStringMap &coll)
{
	coll["Deut"] = "Germany";
	coll["deut"] = "German";
	coll["Haken"] = "snag";
	coll["arbei"] = "work";
	coll["Hund"] = "dog";
	coll["gehen"] = "go";
	coll["Unter"] = "enterprise";
	coll["Unter"] = "undertake";
	coll["gehen"] = "walk";
	coll["Bestat"] = "undertaker";
	StringStringMap::iterator pos;
	cout.setf(ios::left, ios::adjustfield);
	for (pos = coll.begin(); pos != coll.end(); ++pos)
		cout << setw(15) << pos->first.c_str() << " " << pos->second << endl;
	cout << endl;
}

void main()
{
	StringStringMap coll1;//noraml,与大小写有关
	fillAndPrint(coll1);
	RuntimeStringCmp ignorecase(RuntimeStringCmp::nocase);//nocase,与大小写无关
	StringStringMap coll2(ignorecase);
	fillAndPrint(coll2);
}