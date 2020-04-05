#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class MeanValue
{
private:
	long num;
	long sum;
public:
	MeanValue() :num(0), sum(0) {}

	void operator()(int elem) 
	{
		num++;
		sum += elem;
	}
	double value()
	{
		return static_cast<double>(sum) / static_cast<double>(num);
	}
};

void main()
{
	vector<int> coll;
	for (int i = 1; i <= 8; i++)
		coll.push_back(i);

	MeanValue mv = for_each(coll.begin(), coll.end(), MeanValue());

	cout << "mean value: " << mv.value() << endl;
}