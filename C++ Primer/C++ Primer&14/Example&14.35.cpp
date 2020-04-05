class ReadString
{
public:
	ReadString(istream &is = cin) :is(is) {}
	string operator()()
	{
		string line;
		if (!getline(is, line))
			line = " ";
		return line;
	}
private:
	istream &is;
};