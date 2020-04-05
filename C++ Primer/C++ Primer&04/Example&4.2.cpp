#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	vector<int> vec;
	srand((unsigned)time(NULL));
	cout << "系统自动：\n";
	for (int i = 0; i < 10; i++)
		vec.push_back(rand() % 100);
	cout << "生成的:\n";
	for (auto c : vec)
		cout <<c << " ";
	cout << endl;
	cout << "检验\n";
	cout << "*vec.begin()的值: " << *vec.begin() << endl;
	cout << "*(vec.begin())的值: " << *(vec.begin()) << endl;
	cout << "*vec.begin()+1的值: " << *vec.begin()+1 << endl;
	cout << "*(vec.begin())+1的值: " << *(vec.begin())+1 << endl;
}
