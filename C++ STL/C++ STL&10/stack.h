#ifndef STACK_H
#define STACK_H
#include<deque>
#include<exception>
using namespace std;

template<class T>
class Stack
{
protected:
	deque<T> c;
public:
	class reademptystack :public exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "read empty stack ";
		}
	};

	typename deque<T>::size_type size() const
	{
		return c.size();
	}

	void push(const T &elem)
	{
		c.push_back(elem);
	}

	T pop()
	{
		if (c.empty())
			throw reademptystack();
		T elem(c.back());
		c.pop_back();
		return elem;
	}

	T &top()
	{
		if (c.empty())
			throw reademptystack();
		return c.back();
	}
};
#endif // !STACK_H

