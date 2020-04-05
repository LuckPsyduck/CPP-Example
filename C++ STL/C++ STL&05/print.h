#ifndef PRINT
#define PRINT
#include<iostream>
using namespace std;
template<class T> 
inline void PRINT_ELEMENTS(const T &coll, const char * optcstr = "")
{
	typename T::const_iterator pos;
	cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
		cout << *pos << " ";
}
#endif // !PRINT
#pragma once
