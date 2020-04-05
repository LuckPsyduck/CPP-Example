class String
{
	friend bool operator<(const String &s1, const String &s2);
	friend bool operator<=(const String &s1, const String &s2);
	friend bool operator>(const String &s1, const String &s2);
	friend bool operator>=(const String &s1, const String &s2);
};
bool operator<(const String &s1, const String &s2)
{
	return strcmp(s1.str, s2.str) < 0;
}
bool operator<=(const String &s1, const String &s2)
{
	return strcmp(s1.str, s2.str) <= 0;
}
bool operator<=(const String &s1, const String &s2)
{
	return strcmp(s1.str, s2.str) > 0;
}
bool operator<=(const String &s1, const String &s2)
{
	return strcmp(s1.str, s2.str) > = 0;
}
/**********************************************************/
class StrBlob
{
	friend bool operator<(const StrBlob &s1, const StrBlob &s2);
	friend bool operator<=(const StrBlob &s1, const StrBlob &s2);
	friend bool operator>(const StrBlob &s1, const StrBlob &s2);
	friend bool operator>=(const StrBlob &s1, const StrBlob &s2);
};
bool operator<(const StrBlob &s1, const StrBlob &s2)
{
	return *s1.data < *s2.data;
}
bool operator<=(const StrBlob &s1, const StrBlob &s2)
{
	return *s1.data <= *s2.data;
}
bool operator>(const StrBlob &s1, const StrBlob &s2)
{
	return *s1.data > *s2.data;
}
bool operator>=(const StrBlob &s1, const StrBlob &s2)
{
	return *s1.data >= *s2.data;
}
	/*****************************************/
	class StrBlobPtr
	{
		friend bool operator<(const StrBlobPtr &s1, const StrBlobPtr &s2);
		friend bool operator<=(const StrBlobPtr &s1, const StrBlobPtr &s2);
		friend bool operator>(const StrBlobPtr &s1, const StrBlobPtr &s2);
		friend bool operator>=(const StrBlobPtr &s1, const StrBlobPtr &s2);
	};
	bool operator<(const StrBlobPtr &s1, const StrBlobPtr &s2)
	{
		auto l = s1.wptr.lock(), r = s2.wptr.lock();
		if (l == r)
			if (!r)
				return false;
		return (lhs.curr < rhs.curr);
			else
				return false;
	}
		bool operator<=(const StrBlobPtr &s1, const StrBlobPtr &s2)
		{
			auto l = s1.wptr.lock(), r = s2.wptr.lock();
			if (l == r)
					return (!r||lhs.curr<=rhs.curr);
				else
					return false;
		}
		bool operator>(const StrBlobPtr &s1, const StrBlobPtr &s2)
		{
			auto l = s1.wptr.lock(), r = s2.wptr.lock();
			if (l == r)
				if (!r)
					return false;
			return (lhs.curr > rhs.curr);
				else
					return false;
		}
		bool operator>=(const StrBlobPtr &s1, const StrBlobPtr &s2)
		{
			auto l = s1.wptr.lock(), r = s2.wptr.lock();
			if (l == r)
				return (!r || lhs.curr >= rhs.curr);
			else
				return false;
		}
		/*******************************************/
class Strvec
{
	friend bool operator<(const Strvec &s1, const Strvec &s2);
	friend bool operator<=(const Strvec &s1, const Strvec &s2);
	friend bool operator>(const Strvec &s1, const Strvec &s2);
	friend bool operator>=(const Strvec &s1, const Strvec &s2);
};
bool operator<(const Strvec &s1, const Strvec &s2)
{
	for (auto p1 = s1.begin(), p2 = s2.begin(); p1 != s1.end() && p2 != s2.end(); p1++, p2++)
		if (*p1 < *p2)
			return true;
		else if (*p1 > *p2)
			return false;
	if (p1 == s1.end() && p2 != s2.end())
		return true;
	return false;
}
	bool operator<=(const Strvec &s1, const Strvec &s2)
	{
		for (auto p1 = s1.begin(), p2 = s2.begin(); p1 != s1.end() && p2 != s2.end(); p1++, p2++)
			if (*p1 < *p2)
				return true;
			else if (*p1 > *p2)
				return false;
	if (p1 == s1.end())
		return true;
	return false;
	}
	bool operator>(const Strvec &s1, const Strvec &s2)
	{
		for (auto p1 = s1.begin(), p2 = s2.begin(); p1 != s1.end() && p2 != s2.end(); p1++, p2++)
			if (*p1 < *p2)
				return false;
			else if (*p1 > *p2)
				return true;
		if (p1 == s1.end() && p2 != s2.end())
			return true;
		return false;
	}
	bool operator>=(const Strvec &s1, const Strvec &s2)
	{
		for (auto p1 = s1.begin(), p2 = s2.begin(); p1 != s1.end() && p2 != s2.end(); p1++, p2++)
			if (*p1 < *p2)
				return false;
			else if (*p1 > *p2)
				return true;
		if (p2 == s2.end())
			return true;
		return false;
	}