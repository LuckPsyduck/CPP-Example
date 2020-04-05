#include<iostream>
#include<deque>
using namespace std;
void main()
{
	deque<float> coll;
	for (size_t i = 0; i < 6; i++)
		coll.push_front(i*1.1);
	for (size_t i = 0; i < coll.size(); i++)
		cout << coll[i] << " ";
	cout << endl;
}