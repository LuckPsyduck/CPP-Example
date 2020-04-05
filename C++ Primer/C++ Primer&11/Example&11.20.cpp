#include<iostream>
#include<fstream>
#include<map>
//#include<sstream>
//#include<list>
#include<string>
#include<algorithm>
//#include<vector>
//#include<utility>
using namespace std;
int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if (!in)
	{
		cout << "not open the file\n";
		exit(1);
	}
	map<string, size_t> word_count;
	string word;
	while (in >> word)
	{
		auto ret = word_count.insert({ word,1 });
		if (!ret.second)
			++ret.first->second;
	}
	for (const auto &w : word_count)
		cout << w.first << " occur :" << w.second << endl;
	return 0;
}