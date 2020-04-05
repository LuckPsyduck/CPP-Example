#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	int a=3,b=4;
	decltype(a) c=a;
	//decltype((b)) d=a;
	decltype(a=b) d=a;
	++c;
	++d;
	cout<<typeid(a).name()<<endl;
	cout<<typeid(b).name()<<endl;
	cout<<typeid(c).name()<<endl;
	cout<<typeid(d).name()<<endl;
	cout<<a<<endl;//可说明d为引用
	return 0;
}