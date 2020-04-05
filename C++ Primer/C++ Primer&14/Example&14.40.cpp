class isshort
{
public:
	bool operator()(const string &s1, const string &s2)
	{
		return s1.size() < s2.size();
	}
};


class notshortthan
{
public:
	notshortthan(int len) :minlen(len) {}
	bool operator()(const string &str)
	{
		return str.size() >= minlen;
	}

private:
	int minlen;
};

class printstring
{
public:
	void operator()(const string &str)
	{
		cout << str << " ";
	}
};

void big(vector<string> &word, vector<string>::size_type sz)
{
	elimdups(words);
	isshort is;
	stable_sort(word.begin(), word.end(), is);
	notshortthan nst(sz);
	auto wc = find_if(words.begin(), words.end(), nst);
	auto count = words.end() - wc;
	cout <</***********/;
	printstring ps;
	for_each(wc, words.end(), ps);
	cout << endl;
}