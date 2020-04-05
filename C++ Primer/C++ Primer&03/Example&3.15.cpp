#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string> vstring;
	string s;
	char cont = 'y';
	while (cin >> s)
	{
		vstring.push_back(s);
		cout << "Äú»¹Òª¼ÌÐøÂð(y or n)?  " << endl;
		cin >> cont;
		if (cont != 'y'&&cont != 'Y')
			break;
	}
	for (auto mem : vstring)
		cout << mem;
	cout << endl;
	return 0;
}