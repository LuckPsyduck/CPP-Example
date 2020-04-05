#include<iostream>
#include<queue>
#include<string>
using namespace std;

void main()
{
	queue<string> q;

	q.push("these ");
	q.push("are ");
	q.push("more than ");

	cout << q.front();
	q.pop();
	cout << q.front();
	q.pop();

	q.push("four ");
	q.push("words! ");

	q.pop();

	cout << q.front();
	q.pop();
	cout << q.front();
	q.pop();
	cout << endl;
	cout << "number of elements in the queue : " << q.size() << endl;
}