#include<iostream>
#include<string>
using namespace std;
int main()
{
	string finalgrade;
	int grade;
	cout << "inspect data :\n";
	while (cin >> grade&&grade >= 0 && grade <= 100)
	{
		finalgrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade > 60) ?\
			"low pass" : "fail";
		cout << "score:  " << finalgrade << endl;
		cout << "inspect score\n";
	}
	return 0;
}