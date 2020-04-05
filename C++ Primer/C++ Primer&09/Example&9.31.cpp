#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{
	list<int> ilist = { 0,1,2,3,4,5,6,7,8,9 };
	auto curr = ilist.begin();
	while (curr != ilist.end())
	{
		if (*curr & 1)
		{
			curr = ilist.insert(curr, *curr);
			curr++, curr++;
		}
		else
			curr = ilist.erase(curr);
	}
	for (curr = ilist.begin(); curr != ilist.end(); curr++)
		cout << *curr << " ";
	cout << endl;
	return 0;
}