#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Hasptr
{
	friend void swap(Hasptr&, Hasptr&);
public:
	Hasptr(const string &s = string()) :ps(new string(s)), i(0) {}
	Hasptr(const Hasptr &p) :ps(new string(*p.ps)), i(p.i) {}
	Hasptr &operator=(const Hasptr&);
	Hasptr &operator=(const string &);
	string& operator*();
	~Hasptr();
	bool operator<(const Hasptr &)const;
private:
	string *ps;
	int i;
};
Hasptr::~Hasptr()
{
	delete ps;
}
inline void swap(Hasptr & lhs, Hasptr & rhs)
{
	cout << "exchange :" << *lhs.ps << " " << *rhs.ps << endl;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
}

inline Hasptr &Hasptr::operator=(const Hasptr &rhs)
{
	auto newps = new string(*rhs.ps);
	delete ps;
	ps = newps;
	i = rhs.i;
	return *this;
}

Hasptr& Hasptr::operator=(const string &rhs)
{
	*ps = rhs;
	return *this;
}

string& Hasptr::operator*()
{
	return *ps;
}
bool Hasptr::operator<(const Hasptr &rhs)const
{
	return *ps < *rhs.ps;
}
int main(int argc,char *argv[])
{
	vector<Hasptr> vh;
	//int n = atoi(argv[1]);
	///*int n = 2;*/
	//for (int i = 0; i < n; i++)
	//	vh.push_back(to_string(n - i));
	Hasptr a("zhang");
	Hasptr b("heng");
	Hasptr c("jie");
	vh.push_back(a);
	vh.push_back(b);
	vh.push_back(c);
	for (auto p : vh)
		cout << *p << " ";
	cout << endl;
	sort(vh.begin(), vh.end());
	for (auto p : vh)
		cout << *p << " ";
	cout << endl;
	return 0;
}