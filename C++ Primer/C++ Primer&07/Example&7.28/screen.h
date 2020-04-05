#ifndef SCREEN_H
#define SCREEN_H
#include<iostream>
#include<string>
using namespace std;
class screen
{
private:
	unsigned height = 0, width = 0;
	unsigned cursor = 0;
	string contents;
public:
	screen() = default;
	screen(unsigned ht, unsigned wd) :height(ht), width(wd), contents(ht*wd, ' ') {}
	screen(unsigned ht, unsigned wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}
public:
	screen move(unsigned r, unsigned c)
	{
		cursor = r*width + c;
		return *this;
	}
	screen set(char ch)
	{
		contents[cursor] = ch;
		return *this;
	}
	screen set(unsigned r, unsigned c, unsigned ch)
	{
		contents[r*width + c] = ch;
		return *this;
	}
	screen display()
	{
		cout << contents;
		return *this;
	}
};
#endif

