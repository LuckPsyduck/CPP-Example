#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
int main()
{
	list<char *> slist = { "hello","world","!"};
	vector<string> svec;
	svec.assign(slist.begin(), slist.end());
	cout << svec.capacity() << " " << svec.size() << " " << endl;
	cout<< svec[0] << " " << svec[svec.size() - 1] << endl;
	return 0;
}