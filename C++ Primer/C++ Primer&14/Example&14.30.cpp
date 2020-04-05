class StrBlobptr
{
public:
	string &operator*() const
	{
		auto p = check(curr, "dereference pass end");
		return (*p)[curr];
	}
	string *operator->() const 
	{
		return &(this->operator*());
	}
};
class ConstStrBlobptr
{
public:
	const string &operator*() const
	{
		auto p = check(curr, "dereference pass end");
		return (*p)[curr];
	}
	const string *operator->() const
	{
		return &(this->operator*());
	}
};