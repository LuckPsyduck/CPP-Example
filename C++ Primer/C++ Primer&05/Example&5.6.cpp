#include<iostream>
#include<string>
using namespace std;
int main()
{
	int grade;
	cout << "input your grade: \n";
	cin >> grade;
	if (grade < 0 || grade>100)
	{
		cout << "illegally\n";
		return - 1;
	}
	if (grade == 100)
	{
		cout << "A++\n";
		return -1;
	}
	if (grade < 60)
	{
		cout << "F\n";
		return -1;
	}
	int iu = grade / 10;
	int it = grade % 10;
	string score, level, lettergrade;
	score = (iu == 9) ? "A" : (iu == 8) ? "B" : (iu == 7) ? "C" : "D";
	level = (it < 3) ? "-" : (it > 7) ?  "+" : " ";
	lettergrade = score + level;
	cout <<lettergrade << endl;
	return 0;
}
