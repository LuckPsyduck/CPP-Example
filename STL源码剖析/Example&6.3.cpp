#include<iostream>
#include<numeric>
#include<vector>
#include<functional>
#include<iterator>

using namespace std;

int main()
{
	int ia[5] = { 1,2,3,4,5 };
	vector<int> iv(ia, ia + 5);

	cout << accumulate(iv.begin(), iv.end(), 0) << endl;

	cout << accumulate(iv.begin(), iv.end(), 0, minus<int>()) << endl;

	cout << inner_product(iv.begin(), iv.end(), iv.begin(), 10) << endl;

	cout << inner_product(iv.begin(), iv.end(), iv.begin(), 10, minus<int>(), plus<int>()) << endl;

	ostream_iterator<int> oiter(cout, " ");

	partial_sum(iv.begin(), iv.end(), oiter);

	partial_sum(iv.begin(), iv.end(), oiter, minus<int>());

	adjacent_difference(iv.begin(), iv.end(), oiter);

	adjacent_difference(iv.begin(), iv.end(), oiter, plus<int>());
	getchar();
}

