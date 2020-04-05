#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()//输入完后按ctrl+z结束
{
	Sales_item book;
	cout<<"请输入销售记录: "<<endl;
	while(cin>>book)
		cout<<"ISBN 销售书本数 销售额 平均售价为 :\n"<<book<<endl;
	return 0;
}