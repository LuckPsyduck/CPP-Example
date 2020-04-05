#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<int> iv = { 1,1,2,1 };
	int some_val = 1;
	vector<int>::iterator iter = iv.begin();
	int org_size = iv.size(), i = 0;
	while (i <= org_size / 2)
	{
		if (*iter == some_val)
		{
			iter = iv.insert(iter, 2 * some_val);
			iter++, iter++;
		}
		else
			iter++;
		i++;
	}
	for (iter = iv.begin(); iter != iv.end(); iter++)
		cout << *iter << endl;
	return 0;
}