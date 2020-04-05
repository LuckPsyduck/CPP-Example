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
		if (grade > 90)
			finalgrade = "high pass";
		else if (grade > 75)
			finalgrade = "pass";
		else if (grade > 60)
			finalgrade = "low pass";
		else
			finalgrade = "fail";
		cout << "score:  "<<finalgrade<<endl;
		cout << "inspect score\n";
	}
	return 0;
}
