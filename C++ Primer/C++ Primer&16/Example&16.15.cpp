template<int h, int w> class screen;

template<int h,int w>
ostream &operator << (ostream &, screen<h, w>&);

template<int h,int w>
istream &operator >> (istream &, screen<h, w>&);

template<int h,int w>
class screen
{
	friend ostream &operator<<<h, w>(ostream &, screen<h, w>&);
	friend istream &operator>><h, w>(istream &, screen<h, w>&);
};
template<int h, int w>
ostream &operator<<(ostream &os, screen<h, w>&s)
{
	os << s.contents;
	return os;
}
template<int h, int w>
istream &operator >> (istream &is, screen<h, w>&s)
{
	string t;
	is >> t;
	s.content = t.substr(0, h*w);
	return is;
}
