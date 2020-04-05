#include<iostream>
#include<fstream>
#include<list>
//#include<iterator>
#include<algorithm>
//#include<numeric>
using namespace std;
int main(int argc, char *argv[])
{
	list<int> li = { 0,1,2,0,3,4,5,0,6};
	auto last_z = find(li.rbegin(), li.rend(), 0);
	last_z++;
	int p = 1;
	for (auto iter = li.begin(); iter != last_z.base(); iter++, p++);
	if (p >= li.size())
		cout << "container not zero\n";
	else
		cout << "last zero is " << p << endl;
	return 0;
}