#include<iostream>
#include<string>
#include<regex>
using namespace std;
int main()
{
	string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	regex r(pattern);
	smatch results;
	string test_str;
	while (1)
	{
		cout << "enter a word ,or q to quit :\n";
		cin >> test_str;
		if (test_str == "q")
			break;
		if (regex_search(test_str, results, r))
			cout << results.str() << endl;
	}
	return 0;
}