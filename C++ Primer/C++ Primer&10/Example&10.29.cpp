#include<iostream>
#include<iterator>
//#include<list>
#include<vector>
#include<algorithm>
#include<fstream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
	ifstream in(argv[1]);
	if (!in)
	{
		cout << "not open the file\n";
		exit(1);
	}
	istream_iterator<string> in_iter(in);
	istream_iterator<string> eof;
	vector<string> words;
	while (in_iter != eof)
		words.push_back(*in_iter++);
	for (auto word : words)
		cout << word << " ";
	cout << endl;
	return 0;
}