#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include<map>
#include<set>
#include<cstdlib>
#include "make_plural.h"
using namespace std;
using line_no = vector<string>::size_type;
vector<string> file;                            //ÎÄ¼þÃ¿ÐÐÄÚÈÝ
map<string, set<line_no>> wm;                   //µ¥´Êµ½ÐÐºÅµÄÓ³Éä

string cleanup_str(const string &word)
{
	string ret;
	for (auto it = word.begin(); it != word.end(); it++)
	{
		if (!ispunct(*it))
			ret += towlower(*it);
	}
	return ret;
}
void input_text(ifstream &is)
{
	string text;
	while (getline(is, text))                    //¶ÔÎÄ¼þµÄÃ¿Ò»ÐÐ
	{                           
		file.push_back(text);                    //±£´æ´ËÐÐÎÄ±¾
		int n = file.size() - 1;                     //µ±Ç°ÐÐºÅ
		istringstream line(text);                    //½«ÎÄ±¾·Ö½âÎªµ¥´Ê
		string word;
		while (line >> word)                         //¶ÔÐÐÖÐÃ¿¸öµ¥´Ê
			wm[cleanup_str(word)].insert(n);
	}
}

ostream &query_and_print(const string &sought, ostream &os)
{
	auto loc = wm.find(sought);
	if (loc == wm.end())
		os << sought << "occur 0 time" << endl;
	else
	{
		auto lines = loc->second;                  // ÐÐºÅset
		os << sought << "occur :" << lines.size() << endl;
		for (auto num : lines)
			os << num + 1 <<" " << *(file.begin() + num) <<endl;
	}
	return os;
}
void runQueries(ifstream &infile)
{
	input_text(infile);
	while (true)
	{
		cout << "enter word to look for ,or q to quit :" << endl;
		string s;
		if (!(cin >> s) || s == "q")
			break;
		query_and_print(s, cout) << endl;

	}
}
int main(int argc, char *argv[])
{
	ifstream infile;
	if (argc < 2 || !(infile.open(argv[1]), infile))
	{
		cerr << "not input the file";
		return EXIT_FAILURE;
	}
	runQueries(infile);
	return 0;
}
