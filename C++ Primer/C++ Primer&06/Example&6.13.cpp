#include<iostream>
using namespace std;
void a(int i)
{
	++i;
	cout << i<<endl;
}
void b(int &j)
{
	++j;
	cout << j << endl;
}
int main()
{
	int s = 0, t =10;
	a(s);
	cout << s <<endl;
	b(t);
	cout << t << endl;
	return 0;
}