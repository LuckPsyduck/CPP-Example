#ifndef COUNTPTR
#define COUNTPTR
template<class T>
class countedptr
{
private:
	T *ptr;
	long *count;
public:
	explicit countedptr(T *p = 0) :ptr(p), count(new long(1)) {}
	countedptr(const countedptr<T>& p) throw() :ptr(p.ptr), count(p.count) { ++*count; }
	~countedptr() throw()
	{
		dispose();
	}

	countedptr<T>& operator=(const countedptr<T>& p) throw()
	{
		if (this != &p)
		{ 
			dispose();
			ptr = p.ptr;
			count = p.count;
			++*count;
		}
		return *this;
	}

	T &operator*() const throw() { return *ptr; }
private:
	void dispose()
	{
		if (--*count == 0)
		{
			delete count;
			delete ptr;
		}
	}
};
#endif // !COUNTPTR

