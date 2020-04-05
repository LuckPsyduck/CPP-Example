#include<iostream>
#include<string>
#include<map>
using namespace std;
void main()
{
	typedef map<string, float> InstringMMap;//<
	InstringMMap coll;
	coll["VAT"] = 0.15;
	coll["pi"] = 3.1415;
	coll["an arbi number"] = 4983.223;
	coll["null"] = 0;
	InstringMMap::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
		cout << "key:\"" << pos->first << "\"" << "value: " << pos->second << endl;
}