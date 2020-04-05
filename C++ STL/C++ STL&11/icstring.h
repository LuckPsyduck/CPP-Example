#ifndef ICSTRING_H
#define ICSTRING_H
#include<string>
#include<iostream>
#include<cctype>
using namespace std;

struct ignorecase_traits :public char_traits<char>
{
	static bool eq(const char &c1, const char &c2)
	{
		return toupper(c1) == toupper(c2);
	}

	static bool it(const char &c1, const char &c2)
	{
		return toupper(c1) < toupper(c2);
	}

	static int compare(const char *s1, const char *s2, size_t n)
	{
		for (size_t i = 0; i < n; i++)
			if (!eq(s1[i], s2[i]))
				return it(s1[i], s2[i]) ? -1: 1;
	}
	static const char *find(const char *s, size_t n, const char &c)
	{
		for (size_t i = 0; i < n; i++)
			if (eq(s[i], c))
				return &(s[i]);
		return 0;
	}
};


typedef basic_string<char, ignorecase_traits> icstring;

inline ostream& operator<<(ostream &strm, const icstring& s)
{
	return strm << string(s.data(), s.length()) << endl;
}
#endif // !ICSTRING_H

