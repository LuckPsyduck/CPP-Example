#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;
void main()
{
	set<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.insert(i);
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	int num = coll.erase(3);//É¾³ýµÄ¸öÊý
	cout << num << endl;
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}