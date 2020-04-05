#include<iostream>
#include<string>
#include<regex>
using namespace std;
int main()
{
	string pattern("[^c]ei");
	pattern = pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	regex r(pattern, regex::icase);
	smatch results;
	string line;
	while (1)
	{
		cout << "enter a word or q to quit:\n";
		getline(cin, line);
		if (line == "q")
			break;
		for (sregex_iterator it(line.begin(), line.end(), r), end_it; it != end_it; ++it)
			cout << it->str() << endl;
	}
	return 0;
}