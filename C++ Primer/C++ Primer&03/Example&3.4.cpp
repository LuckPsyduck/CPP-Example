#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"ÇëÊäÈëÁ½¸ö×Ö·û´®: "<<endl;
	cin>>s1>>s2;
	if(s1==s2)
		cout<<"equal"<<endl;
	else if(s1>s2)
		cout<<s1<<" big "<<s2<<endl;
	else
		cout<<s1<<"less"<<s2;
	return 0;
}