#include<iostream>
#include<iterator>
using namespace std;
void main()
{
	istream_iterator<int> intreader(cin);
	istream_iterator<int> intreadereof;
	while (intreader != istream_iterator<int>())
	//while (intreader != intreadereof)
	{
		cout << "once: " << *intreader << endl;
		cout << "once again: " << *intreader << endl;
		++intreader;
	}
}