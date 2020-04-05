#include<iostream>
#include"deque.h"
#include<string>
using namespace std;

void main()
{
	try{
		Queue<string> q;

		q.push("these ");
		q.push("are ");
		q.push("more than ");

		cout<<q.pop();
		cout<<q.pop();

		q.push("four ");
		q.push("words! ");

		q.pop();

		cout<<q.pop();
		cout<<q.pop();
		cout << endl;

		cout << "number of elements in the queue : " << q.size() << endl;
		cout << q.pop()<<endl;//ÒýÆð±¨´í
	}
	catch (const exception &e)
	{
		cerr << "exception: " << e.what() << endl;
	}
}