#include<iostream>
#include<string>
using namespace std;
int main()
{
	unsigned int ffcnt = 0, flcnt = 0, ficnt = 0;
	char ch, prech = '\0';
	cout << "input text:\n";
	while (cin >> ch)
	{
		bool b1 = true;
		if (prech == 'f')
		{
			switch (ch)
			{
			case 'f':++ffcnt; b1 = false; break;
			case 'l':++flcnt; break;
			case 'i':++ficnt; break;
			}
		}
		if (!b1)
			prech = '\0';
		else
			prech = ch;
	}
	cout << "ff:" << ffcnt << endl;
	cout << "fl:" << flcnt << endl;
	cout << "fi:" << ficnt << endl;
	return 0;
}