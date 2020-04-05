#include<iostream>
#include<string>
#include "tscreen.h"
using namespace std;
int main()
{
	Screen<5, 3> myscreen;
	myscreen.display(cout);
	myscreen.move(4, 0).set('#');

	Screen<5, 5> nextscreen('X');
	nextscreen.move(4, 0).set('#').display(cout);
	cout << endl;
	nextscreen.display(cout);
	cout << endl;

	const Screen<5, 3> blank;
	myscreen.set('#').display(cout);
	cout << endl;
	blank.display(cout);
	cout << endl;

	myscreen.clear('z').display(cout);
	cout << endl;
	myscreen.move(4, 0);
	myscreen.set('#');
	myscreen.display(cout);
	cout << endl;
	myscreen.clear('z').display(cout);
	cout << endl;

	Screen<5, 3> temp = myscreen.move(4, 0);
	temp.set('#');
	myscreen.display(cout);
	cout << endl;
	return 0;
}
