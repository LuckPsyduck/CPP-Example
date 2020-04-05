#ifndef DEQUE_H
#define DEQUE_H
#include<deque>
#include<exception>
using namespace std;

template<class T>
class Queue
{
protected:
	deque<T> c;
public:
	class reademptyqueue :public exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "read empty queue ";
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
			throw reademptyqueue();
		T elem(c.front());
		c.pop_front();
		return elem;
	}

	T &front()
	{
		if (c.empty())
			throw reademptyqueue();
		return c.front();
	}
};

#endif // !DEQUE_H

