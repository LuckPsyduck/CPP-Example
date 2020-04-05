#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
//#include<iterator>
using namespace std;
class Strlenis
{
public:
	Strlenis(int len) :len(len) {}
	bool operator()(const string &str) { return str.length() == len; }
private:
	int len;
};
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
	const int minlen = 1;
	const int maxlen = 10;
	for(int i=minlen;i<maxlen;i++)
	{
		Strlenis slenis(i);
		cout << "len:" << i << " cnt:" << count_if(vec.begin(), vec.end(), slenis) << endl;
	}
	return 0;
}