#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vint;
	int i;
	char cont = 'y';
	while (cin >> i)
	{
		vint.push_back(i);
		cout << "Äú»¹Òª¼ÌÐøÂð(y or n)?  " << endl;
		cin >> cont;
		if (cont != 'y'&&cont != 'Y')
			break;
	}
	for (auto mem : vint)
		cout << mem;
	cout << endl;
	return 0;
}