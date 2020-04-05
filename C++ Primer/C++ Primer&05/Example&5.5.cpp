#include<iostream>
#include<string>
using namespace std;
int main()//需要加括号，优先级问题
{
	int grade;
	cout << " input score : \n";
	cin >> grade;
	if (grade < 0 || grade>100)
	{
		cout << "illegal\n";
		return -1;
	}
	if (grade == 100)
	{
		cout << "a++" << endl;
		return -1;
	}
	if (grade < 60)
	{
		cout << "f\n";
		return -1;
	}
	int iu = grade / 10;
	int it = grade % 10;
	string score, level, lettergrade;
	if (iu == 9)
		score = "a";
	else if (iu == 8)
		score = "b";
	else if (iu == 7)
		score = "c";
	else
		score = "d";
	if (it < 3)
		level = "-";
	else if (it > 7)
		level = "+";
	else
		level = " ";
	lettergrade = score + level;
	cout <<lettergrade << endl;
	return 0;
}
