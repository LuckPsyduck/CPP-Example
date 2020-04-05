#include<iostream>
#include<fstream>
#include<vector>
#include<iterator>
#include<algorithm>
//#include<numeric>
using namespace std;
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << "not open the file\n";
		return -1;
	}
	ifstream in(argv[1]);
	if (!in)
	{
		cout << "not open the file\n";
		exit(1);
	}
	vector<int> vi;
	int v;
	while (in >> v)
		vi.push_back(v);
	for (auto r_iter = vi.crbegin(); r_iter != vi.crend(); ++r_iter)
		cout << *r_iter << " ";
	cout << endl;
	return 0;
}