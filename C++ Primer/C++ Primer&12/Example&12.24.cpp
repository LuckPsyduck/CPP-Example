#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char c;
	char *r = new char[20];
	int l = 0;
	while (cin.get(c))
	{
		if (isspace(c))
			break; 
		r[l++] = c;
		if (l == 20)
		{
			cout << "approach the max\n";
			break;
		}
	}
	r[l] = 0;
	cout << r << endl;
	delete [] r;
	return 0;
}