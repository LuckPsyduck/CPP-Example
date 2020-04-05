#include<iostream>
using namespace std;
int main()
{
	int i=5,j=10;
	int *p=&i;
	cout<<p<<" "<<*p<<endl;
	p=&j;
	cout<<p<<" "<<*p<<endl;
	*p=20;
	cout<<p<<" "<<*p<<endl;
	j=30;
	cout<<p<<" "<<*p<<endl;
	return 0;
}