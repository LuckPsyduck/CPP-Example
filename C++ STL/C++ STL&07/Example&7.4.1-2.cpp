#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void main()
{
	vector<int> coll;
	for (int i = 1; i <= 9; ++i)
		coll.push_back(i);
	vector<int>::iterator pos;
	pos = find(coll.begin(), coll.end(), 5);
	cout << "pos: " << *pos << endl;
	vector<int>::reverse_iterator rpos(pos);
	cout << "rpos: " << *rpos << endl;//´íÎ» 
}