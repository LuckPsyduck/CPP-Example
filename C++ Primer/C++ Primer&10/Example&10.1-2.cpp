#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char * argv[])
{
	ifstream in(argv[1]);
	if (!in)
	{
		cout << "not open file\n";
		exit(1);
	}
	vector<int> vi;
	int val;
	while (in >> val)
		vi.push_back(val);
	cout << "input integer:\n";
	cin >> val;
	int c = 0;
	for (auto iter = vi.begin(); iter != vi.end(); iter++)
		if (*iter == val)
			c++;
	cout << c << endl;
	return 0;

}