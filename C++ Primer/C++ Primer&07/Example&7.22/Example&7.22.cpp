#include<iostream>
#include<string>
#include "person.h"
using namespace std;
int main()
{
	person data1;
	person data2("zhangheng", "36553666");
	person data3(cin);
	cout << data1 << endl << data2 << endl << data3 << endl;
	return 0;
}