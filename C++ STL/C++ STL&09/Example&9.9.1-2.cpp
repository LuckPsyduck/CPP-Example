#include"algostuff.h"
using namespace std;

bool lessLength(const string &s1, const string &s2)
{
	return s1.length() < s2.length();
}

void main()
{
	vector<string> coll1;
	vector<string> coll2;

	coll1.push_back("1xxx");
	coll1.push_back("2x");
	coll1.push_back("3x");
	coll1.push_back("4x");
	coll1.push_back("5xx");
	coll1.push_back("6xxxx");
	coll1.push_back("7xx");
	coll1.push_back("8xxx");
	coll1.push_back("9xx");
	coll1.push_back("10xxx");
	coll1.push_back("11");
	coll1.push_back("12");
	coll1.push_back("13");
	coll1.push_back("14xx");
	coll1.push_back("15");
	coll1.push_back("16");
	coll1.push_back("17");


	coll2 = coll1;

	PRINT_ELEMENTS(coll1,"on entry: ");

	sort(coll1.begin(), coll1.end(), lessLength);

	stable_sort(coll2.begin(), coll2.end(), lessLength);//维持相对次序

	PRINT_ELEMENTS(coll1, "\nwith sort():\n");
	PRINT_ELEMENTS(coll2, "\nwith stable_sort():\n");
}