#include<iostream>
#include<string>
using namespace std;
int main()
{
	unsigned int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
	unsigned int spacecnt = 0, tabcnt = 0, newlinecnt = 0;
	char ch;
	cout << "input texr:\n";
	while (cin.get(ch))
	{
		switch (ch)
		{
		case 'a':
		case 'A':++acnt; break;
		case 'e':
		case 'E':++ecnt; break;
		case 'i':
		case 'I':++icnt; break;
		case 'o':
		case 'O':++ocnt; break;
		case 'u':
		case 'U':++ucnt; break;
		case ' ':++spacecnt; break;
		case '\t':++tabcnt; break;
		case '\n':++newlinecnt; break;
		dafault:break;
		}
	}
	cout << acnt << endl;
	cout << ecnt << endl;
	cout << icnt << endl;
	cout << ocnt << endl;
	cout << ocnt << endl;
	cout << ucnt << endl;
	cout << spacecnt << endl;
	cout << tabcnt << endl;
	cout << newlinecnt << endl;
	return 0;
}