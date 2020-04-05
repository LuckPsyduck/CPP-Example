#ifndef  TSCREEN_H
#define  TSCREEN_H
#include<iostream>
#include<string>
using namespace std;
template<int H,int W>
class Screen
{
public:
	Screen() :contents(H*W, ' ') {}
	Screen(char c):contents(H*W, c) {}
	friend class Window_mgr;
	char get() const
	{
		return contents[cursor];
	}
	inline char get(int, int) const;
	Screen &clear(char = bkground);
private:
	static const char bkground = ' ';
public:
	Screen &move(int r, int c);
	Screen &set(char);
	Screen &set(int, int, char);
	Screen &display(ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen &display(ostream &os) const
	{
		do_display(os);
		return *this;
	}
private:
	void do_display(ostream &os) const 
	{
		os << contents;
	}
	int cursor;
	string contents;
};
template<int H,int W>
Screen<H, W> &Screen<H, W>::clear(char c)
{
	contents = string(H*W, c);
	return *this;
}

template<int H, int W> inline
Screen<H, W> &Screen<H, W>::move(int r, int c)
{
	int row = r*W;
	cursor = row + c;
	return *this;
}

template<int H, int W> 
char Screen<H, W>::get(int r, int c) const
{
	int row = r*w;
	return contents[row + c];
}
template<int H, int W> inline
Screen<H, W> &Screen<H, W>::set(char c)
{
	contents[cursor] = c;
	return *this;
}
template<int H, int W> inline
Screen<H, W> &Screen<H, W>::set(int r, int col, char ch)
{
	contents[r*w + col] = ch;
	return *this;
}
#endif // ! TSCREEN_H