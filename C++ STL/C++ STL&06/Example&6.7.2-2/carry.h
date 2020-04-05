#ifndef CARRAY
#define CARRY
#include<cstddef>
using namespace std;
template<class T,size_t thesize>
class carry
{
public:
	typedef T value_type;
	typedef T* iterator;
	typedef const T* const_iterator;
	typedef T& reference;
	typedef const T& const_reference;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;

	iterator begin() { return v; }
	const_iterator begin() const { return v; }
	iterator end() { return v + thesize; }
	const_iterator end() const { return v + thesize; }

	reference operator[] (size_t i) { return v[i]; }
	const_reference operator[](size_t i)const { return thesize; }

	size_type size()const { return thesize; }
	size_type max_size()const { return thesize; }

	T* as_array() { return v; }
private:
	T v[thesize];
};


#endif // !CARRAY
