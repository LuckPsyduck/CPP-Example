#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include "make_plural.h"
using namespace std;
//inline void output_words(vector<string> &words)
//{
//	for (auto iter = words.begin(); iter != words.end(); iter++)
//		cout << *iter << " ";
//	cout << endl;
//}
void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}//size_type ×ãÒÔ±£´æµ±Ç°ÀàÐÍµÄ×î´ó¶ÔÏóµÄ´óÐ¡

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	for_each(words.begin(), words.end(), \
		[](const string &s) {cout << s << " "; });
	cout << endl;
	/*stable_sort(words.begin(), words.end(), \
		[](const string &a, const string &b) {return a.size() < b.size(); });*/
	auto wc = partition(words.begin(), words.end(), \
		[sz](const string &a) {return a.size() > sz; });

	auto count = wc-words.begin();
	cout << count << " " << make_plural(count, "word", "s") \
		<< "of length " << sz << " or longer " << endl;
	for_each(words.begin(), wc, [](const string &s) {cout << s << " "; });
	cout << endl;
}
int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if (!in)
	{
		cout << "not open the file\n";
		exit(1);
	}
	vector<string> words;
	string word;
	while (in >> word)
		words.push_back(word);
	biggies(words, 4);
	return 0;
}