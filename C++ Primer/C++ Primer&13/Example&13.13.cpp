#include<iostream>
#include<vector>
using namespace std;
struct X
{
	X() { cout << "construct X()\n"; }
	X(const X&) { cout << "copy X(const X&)\n"; }
	X& operator=(const X&rhs) { cout << "copy and  =(const X&)\n"; return *this; }
	~X() { cout << "~X()\n"; }
};
void f1(X x){}
void f2(X &x) {}
int main()
{
	cout << "local var:\n";
	X x;
	cout << endl;

	cout << "not reference var:\n";
	f1(x);
	cout << endl;

	cout << "reference var:\n";
	f2(x);
	cout << endl;

	cout << "dynamic :\n";
	X *px = new X;
	cout << endl;

	cout << "add container:\n";
	vector<X> vx;
	vx.push_back(x);
	cout << endl;

	cout << "delete dyn:\n";
	delete px;
	cout << endl;

	cout << "间接初始化和赋值:\n";
	X y = x;
	y = x;
	cout << endl;
	cout << "程序结束:\n";
	return 0;
}