#include<iostream>
#include<string>
using namespace std;
int main()
{
	unsigned int vowlcnt = 0;
	char ch;
	cout << "input text:\n";
	while (cin >> ch)
	{
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			++vowlcnt;
	}
	cout << vowlcnt << endl;
	return 0;
}
