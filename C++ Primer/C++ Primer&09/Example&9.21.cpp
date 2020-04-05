#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string> svec;
	string word;
	auto iter = svec.begin();
	while (cin >> word)
		iter = svec.insert(iter, word);
	for (auto iter = svec.begin(); iter != svec.end(); iter++)
		cout << *iter << endl;
	return 0;
}