#include<iostream>
#include<string>
#include"screen_window.h"
using namespace std;
//class window_mgr
//{
//public:
//	void clear();
//};
//class screen
//{
//	friend void window_mgr::clear();
//private:
//	unsigned height = 0, width = 0;
//	unsigned cursor = 0;
//	string contents;
//public:
//	screen() = default;
//	screen(unsigned ht, unsigned wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}
//};
void window_mgr::clear()
{
	screen myscreen(4, 5, 'X');
	cout << "清理之前screen的内容是:\n";
	cout << myscreen.contents << endl;
	myscreen.contents =" ";
	cout << "清理之后myscreen的内容是:\n";
	cout << myscreen.contents << endl;
}
int main()
{
	window_mgr w;
	w.clear();
	return 0;
}