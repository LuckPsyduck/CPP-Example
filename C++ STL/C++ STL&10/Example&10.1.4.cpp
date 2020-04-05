#include<iostream>
#include"stack.h"
using namespace std;

void main()
{
	try {
		Stack<int> st;

		st.push(1);
		st.push(2);
		st.push(3);

		cout << st.pop() << " ";
		cout << st.pop() << " ";

		st.top() = 77;

		st.push(4);
		st.push(5);

		st.pop();

		cout << st.pop() << " ";
		cout << st.pop() << endl;
	/*	cout << st.pop() << endl;*/  //ÒýÆð´íÎó
	}
	catch (const exception & e)
	{
		cerr << "exception: " << e.what() << endl;
	}
}