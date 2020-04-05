#ifndef SCREEN_WINDOW_H
#define SCREEN_WINDOW_H
#include<iostream>
#include<string>
using namespace std;
class window_mgr
{
public:
	void clear();
};
class screen
{
	friend void window_mgr::clear();
private:
	unsigned height = 0, width = 0;
	unsigned cursor = 0;
	string contents;
public:
	screen() = default;
	screen(unsigned ht, unsigned wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}
};
#endif
