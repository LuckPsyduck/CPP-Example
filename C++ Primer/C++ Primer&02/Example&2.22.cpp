#include<iostream>
using namespace std;
int main()
{
	int i=0;
	int *p1=nullptr;
	int *p=&i;
	if(p1)
		cout<<"p1 pass"<<endl;
	if(p)
		cout<<"p pass"<<endl;
	if(*p)
		cout<<"i pass"<<endl;
	return 0;
}