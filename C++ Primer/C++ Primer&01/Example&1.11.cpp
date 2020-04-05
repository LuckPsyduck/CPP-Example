#include<iostream>
using namespace std;
int main()
{
	cout<<"请输入两个数"<<endl;
	int v1,v2;
	cin>>v1>>v2;
	if(v1>v2)
		while(v1>=v2)
			{
				cout<<v1<<" ";
				v1--;
			}
	else
		while(v1<=v2)
		{
			cout<<v1<<" ";
			v1++;
		}
	cout<<endl;
	return 0;
}