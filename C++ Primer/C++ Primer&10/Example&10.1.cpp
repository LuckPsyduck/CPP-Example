#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc,char * argv[])
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
	/*for (auto s : vi)
		cout << s << " ";*/
	/*cout << endl;*/
	cout << "input integer:\n";
	cin >> val;
	cout << count(vi.begin(), vi.end(), val)<<endl;
	return 0;

}