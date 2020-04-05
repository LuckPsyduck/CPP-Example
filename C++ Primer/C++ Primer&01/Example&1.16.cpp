#include<iostream>
using namespace std;
int main()
{
	int sum=0,value=0;
	cout<<"请输入一些数，按CTRL+Z表示结束\n";
	for(;cin>>value;)
		sum+=value;
	cout<<"输入的和为"<<sum<<"\n";
	return 0;
}