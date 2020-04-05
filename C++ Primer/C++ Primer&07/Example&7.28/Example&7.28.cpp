#include<iostream>
#include<string>
#include "screen.h"
using namespace std;
int main()
{
	screen myscreen(5, 5, 'X');
	myscreen.display();
	cout << "\n";
	myscreen.move(4, 0).set('#').display();
	cout << "\n";
	myscreen.display();
	cout << "\n";
	return 0;
}