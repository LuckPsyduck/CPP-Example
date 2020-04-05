#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void find_longest(ifstream &in)
{
	string s, longest_word;
	int max_length = 0;
	string::size_type pos = 0;
	while (in >> s)
	{
			if ((pos = s.find_first_of("aceimnorsuvwsz", pos)) != string::npos)
				cout << s[pos] << " ";
			pos++;
	}
	/*	if (max_length < s.size())
		{
			max_length = s.size();
			longest_word = s;
		}

	cout << longest_word << endl;*/
}
int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if (!in)
	{
		cerr << "no open the file" << endl;
		return -1;
	}
	find_longest(in);
	return 0;
}