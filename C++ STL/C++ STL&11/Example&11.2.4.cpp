#include"icstring.h"
using namespace std;

void main()
{
	icstring s1("hallo");
	icstring s2("otto");
	icstring s3("hALLo");

	cout << boolalpha;//Êä³öfalse true
	cout << s1 << "==" << s2 << " : " << (s1 == s2) << endl;
	cout << s1 << "==" << s3 << " : " << (s1 == s3) << endl;

	icstring::size_type idx = s1.find("All");
	if (idx != icstring::npos)
		cout << "\"All\"in " << s1 << " " << idx << endl;
	else
		cout << "no exist\n";
}