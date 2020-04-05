#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iterator>
#include <functional>
using namespace std;
template<class T1,class T2>
struct fopow :public binary_function<T1, T2, T1>
{
	T1 operator()(T1 base, T2 exp) const { return pow(base, exp); }
};

void main()
{
	vector<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);

	transform(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "), bind1st(fopow<float, int>(), 3));//base=3
	cout << endl;

	transform(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "), bind2nd(fopow<float, int>(), 3));//exp=3
	cout << endl;
}