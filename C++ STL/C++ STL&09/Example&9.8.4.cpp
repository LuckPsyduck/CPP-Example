#include<cstdlib>
#include"algostuff.h"
using namespace std;
class MyRandom
{
public:
	ptrdiff_t operator()(ptrdiff_t max)
	{
		double tmp;
		tmp = static_cast<double>(rand())/static_cast<double>(RAND_MAX);
		return static_cast<ptrdiff_t>(tmp * max);
	}
};

void main()
{
	vector<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	random_shuffle(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "shuffled: ");

	sort(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "sorted: ");

	MyRandom rd;
	random_shuffle(coll.begin(), coll.end(), rd);
	PRINT_ELEMENTS(coll, "shuffled: ");
}