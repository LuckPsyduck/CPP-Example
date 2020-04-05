#include<iostream>
#include<fstream>
#include<map>
#include<sstream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
string &trans(string &s)
{
	for (int p = 0; p < s.size(); p++)
	{
		if (s[p] >= 'A'&&s[p] <= 'Z')
			s[p] -= ('A' - 'a');
		else if (s[p] == ',' || s[p] == '.')
			s.erase(p, 1);
	}
	return s;
}

int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if (!in)
	{
		cout << "not open the file\n";
		exit(1);
	}
	map<string, list<int>> word_lineo;
	string line;
	string word;
	int lineno = 0;
	while (getline(in, line))
	{
		lineno++;
		istringstream l_in(line);
		while (l_in >> word)
		{
			trans(word);
			word_lineo[word].push_back(lineno);
		}
	}
	for (const auto &w : word_lineo)
	{
		cout << w.first << "  ËùÔÚÐÐ: ";
		for (const auto &i : w.second)
			cout << i << " ";
		cout << endl;
	}
	return 0;
}