#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
void print(int elem)
{
	cout << elem << " ";
}
void main()
{
	deque<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);
	deque<int>::iterator pos1;
	pos1 = find(coll.begin(), coll.end(),2);
	
	deque<int>::iterator pos2;
	pos2 = find(coll.begin(), coll.end(), 7);

	for_each(pos1, pos2, print);
	cout << endl;

	deque<int>::reverse_iterator rpos1(pos1);
	deque<int>::reverse_iterator rpos2(pos2);
	for_each(rpos2, rpos1, print);//[)attention qu jian
	cout << endl;
}