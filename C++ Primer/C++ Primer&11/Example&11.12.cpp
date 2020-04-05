#include<iostream>
#include<fstream>
//#include<map>
//#include<sstream>
//#include<list>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if (!in)
	{
		cout << "not open the file\n";
		exit(1);
	}
	vector<pair<string, int>> data;
	string s;
	int v;
	while (in >> s && in >> v)
		data.push_back(pair<string, int>(s, v));
	for (const auto &d : data)
		cout << d.first << " " << d.second << endl;
	return 0;
}