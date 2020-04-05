#include<iostream>
#include<string>
using namespace std;
int main()
{
	string line;
	cout<<"请输入字符串，可以包含空格: \n";
	while(getline(cin,line))
	cout<<line<<endl;
	return 0;
}