#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	ifstream in("data.txt");
	if (!in)
	{
		cerr << "no open text!!!\n";
		return -1;
	}
	string line;
	vector<string> words;
	while (getline(in, line))//EOF    #cin -> line
		words.push_back(line);
	in.close();
	vector<string>::const_iterator it = words.begin();
	while (it != words.end())
	{
		cout << *it << endl;
		++it;
	}
	return 0;
}