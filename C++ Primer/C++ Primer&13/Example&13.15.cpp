#include<iostream>
using namespace std;
class numered
{
private:
	static int seq;
public:
	numered() { mysn = seq++; }
	numered(numered &n) { mysn = seq++; }
	int mysn;
};
int numered::seq = 0;
void f(numered s)
{
	cout << s.mysn << endl;
}
int main()
{
	numered a, b = a, c = b;
	f(a);
	f(b);
	f(c);
	return 0;
}