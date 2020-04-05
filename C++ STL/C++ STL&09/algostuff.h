#ifndef  ALGOSTUFF
#define ALGOSTUFF
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<algorithm>
#include<functional>
#include<numeric>
using namespace std;
template <class T>
inline void PRINT_ELEMENTS(const T &coll, const char *optcstr="")
{
	typename T::const_iterator pos;
	cout << optcstr;
	for (pos = coll.begin; pos != coll.end(); ++pos)
		cout << *pos << " ";
	cout << endl;
}

template<class T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i)
		coll.insert(coll.end(), i);
}
#endif // ! ALGOSTUFF

