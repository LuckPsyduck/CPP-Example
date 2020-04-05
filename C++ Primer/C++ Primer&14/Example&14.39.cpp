#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
//#include<iterator>
using namespace std;
class strlenbetween
{
public:
	strlenbetween(int minlen, int maxlen) :minlen(minlen), maxlen(maxlen) {}
	bool operator()(const string &str)
	{
		return str.length() >= minlen&&str.length() <= maxlen;
	}
private:
	int maxlen, minlen;
};
class strnotshorterthan
{
public:
	strnotshorterthan(int len) :minlen(len) {}
	bool operator()(const string & str)
	{
		return str.length() >= minlen;
	}
private:
	int minlen;
};

//class Strlenis
//{
//public:
//	Strlenis(int len) :len(len) {}
//	bool operator()(const string &str) { return str.length() == len; }
//private:
//	int len;
//};
void readstr(istream &is, vector<string>&vec)
{
	string word;
	while (is >> word)
		vec.push_back(word);
}
int main()
{
	vector<string> vec;
	readstr(cin, vec);
	strlenbetween slenbetween(1, 9);
	strnotshorterthan snotshorterthan(10);
	cout << "len:" << count_if(vec.begin(), vec.end(), slenbetween) << endl;
	cout << "len>=10 "<< count_if(vec.begin(), vec.end(),strnotshorterthan)<<endl;
	return 0;
}