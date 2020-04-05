
#include<iostream>
#include<string>
#include<vector>
#include<list>
/*#include<functional>  */                            
using namespace std;
template <typename I,typename T> 
I find(I b, I e, const T &v)
{
	while (b != e && *b != v)
		b++;
	return b;
}
int main()
{
	vector<int> vi = { 0,2,4,6,8,10 };
	list<string> ls = { "hello","world","!" };
	auto iter =::find(vi.begin(), vi.end(), 6);
	if (iter == vi.end())
		cout << "not find 6\n";
	else
		cout << "find 6 at position " << iter - vi.begin() << endl;
	auto iter1 = ::find(ls.begin(), ls.end(), "mom");
	if (iter1 == ls.end())
		cout << "not find mom\n";
	else
		cout << "find mom  "<< endl;
	return 0;
}
