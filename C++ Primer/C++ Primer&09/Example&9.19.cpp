#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{
	list<string> si;
	string word;
	while (cin >> word)
		si.push_back(word);
	for (auto sl = si.cbegin(); sl != si.cend(); sl++)
		cout << *sl << endl;
	return 0;
}