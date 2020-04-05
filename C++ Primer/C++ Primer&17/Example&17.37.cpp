#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
	if (argc!=2)
	{
		cerr << "usage: execise infile_name\n";
		return -1;
	}
	ifstream in(argv[1]);
	if (!in)
	{
		cerr << "can not open input file\n";
		return -1;
	}
	char text[50];
	while (!in.eof())
	{
		in.getline(text, 30);
		cout << text << endl;
		if (!in.good())
			if (in.gcount() == 29)
				in.clear();
			else
				break;
	}
	return 0;
}