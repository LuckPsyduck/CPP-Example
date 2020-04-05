#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()//输入完后按ctrl+z结束
{
	Sales_item trans1,trans2;
	cout<<"请输入两条ISBN相同的销售记录: "<<endl;
	cin>>trans1>>trans2;
	if(compareIsbn(trans1,trans2))
		cout<<"汇总信息： ISBN 销售书本数 销售额 平均售价为 :\n"<<trans1+trans2<<endl;
	else 
		cout<<"两条记录的ISBN不相同，请重新输入"<<endl;
	return 0;
}