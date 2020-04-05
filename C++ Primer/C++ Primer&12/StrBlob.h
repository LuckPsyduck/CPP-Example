#ifndef STRBLOB_H
#define STRBLOB_H
#include<iostream>
#include<vector>
#include<string>
#include<initializer_list>
#include<memory>
#include<stdexcept>
using namespace std;
class StrBlobptr;
class StrBlob
{
	friend class StrBlobptr;
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back();
	string & front();
	const string & front() const;
	string & back();
	const string & back() const;
	StrBlobptr begin();
	StrBlobptr end();
private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

inline StrBlob::StrBlob() :data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}

inline void StrBlob::check(size_type i, const string &msg) const
{
	if (i >= data->size())
		throw out_of_range(msg);
}
inline string &StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

inline const string &StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}

inline string &StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

inline const string &StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}
inline void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	return data->pop_back();
}

class StrBlobptr
{
	friend bool eq(const StrBlobptr &, const StrBlobptr &);
public:
	StrBlobptr() :curr(0) {}
	StrBlobptr(StrBlob &a, size_t sz = 0) :wptr(a.data), curr(sz) {}
	string & deref() const;
	StrBlobptr& incr();
	StrBlobptr &decr();
private:
	shared_ptr<vector<string>> check(size_t, const string&) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;
};

inline shared_ptr<vector<string>> StrBlobptr::check(size_t i, const string &msg) const
{
	auto ret = wptr.lock();
	if (!ret)
		throw runtime_error("unbound StrBlobptr");
	if (i >= ret->size())
		throw out_of_range(msg);
	return ret;
}
inline string &StrBlobptr::deref() const
{
	auto p = check(curr, "dereference past end" );
	return (*p)[curr];
}
inline StrBlobptr&StrBlobptr::incr()
{
	check(curr, "increment past end of StrBlobptr");
	++curr;
	return *this;
}
inline StrBlobptr&StrBlobptr::decr()
{
	--curr;
	check(-1, "decrement past begin of StrBlobptr");
	return *this;
}
inline StrBlobptr StrBlob::begin()
{
	return StrBlobptr(*this);
}
inline StrBlobptr StrBlob::end()
{
	auto ret = StrBlobptr(*this, data->size());
	return ret;
}
inline bool eq(const StrBlobptr &lhs, const StrBlobptr &rhs)
{
	auto l = lhs.wptr.lock();
	auto r = rhs.wptr.lock();
	if (l == r)
		return (!r || lhs.curr == rhs.curr);
	else
		return false;
}
inline bool neq(const StrBlobptr &lhs, const StrBlobptr &rhs)
{
	return !eq(lhs, rhs);
}
#endif


