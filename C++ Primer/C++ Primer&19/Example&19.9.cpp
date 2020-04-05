#include<iostream>
#include<typeinfo>
using namespace std;
class Base {};
class Derived :public Base {};
int main()
{
	Base b, *pb;
	pb = NULL;
	Derived d;
	cout << typeid(int).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(pb).name() << endl;
	cout << typeid(Derived).name() << endl;
	cout << typeid(d).name() << endl;
	return 0;
}