#include<iostream>
#include<string>
using namespace std;
int main()
{
	char cont='y';
	string s,result;
	cout<<"please input firstly string:  \n";
	while(cin>>s)
	{
		result+=s;
		cout<<"continue(y or n)?\n";
		cin>>cont;
		if(cont=='y'||cont=='Y')
			cout<<"next string:\n";
		else
			break;
	}
	cout<<"mix up "<<result<<endl;
	return 0;
}