#include<iostream>
#include<fstream>
#include<list>
#include<vector>
#include<iterator>
#include<algorithm>
//#include<numeric>
using namespace std;
int main(int argc, char *argv[])
{
	ostream_iterator<int> out_iter(cout, " ");
	vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	copy(vi.begin(), vi.end(), out_iter);
	cout << endl;
	list<int> li;
	vector<int>::reverse_iterator re(vi.begin() + 2);
	vector<int>::reverse_iterator rb(vi.begin() + 7);
	copy(rb, re, back_inserter(li));
	copy(li.begin(), li.end(), out_iter);
	cout << endl;
	return 0;
}