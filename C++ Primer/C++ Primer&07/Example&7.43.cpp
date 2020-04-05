#include<iostream>
#include<string>
using namespace std;
class nodefault
{
public:
	nodefault(int i)
	{
		val = i;
	}
	int val;
};
class c
{
public:
	nodefault nd;
	c(int i = 0) :nd(i) {}
};
int main()
{
	c c1;
	cout << c1.nd.val << endl;
	return 0;
}