#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word,line;
	cout<<"请选着读取字符串的方式: 1.表示逐词读取 2.表示整行读取"<<endl;
	char ch;
	cin>>ch;
	if(ch=='1')
	{
		cout<<"请输入字符串:   welcome to c++ family!   \n";
		cin>>word;
		cout<<"从系统读取的有效字符串是:  "<<endl;
		cout<<word<<endl;
		return 0;
	}
	cin.clear();
	cin.sync();
	if(ch=='2')
	{
		cout<<"请输入字符串:   welcome to c++ family!   \n";
		getline(cin,line);
		cout<<"从系统读取的有效字符串是:  "<<endl;
		cout<<line<<endl;
		return 0;
	}
	cout<<"input error!\n";
	return -1;
}