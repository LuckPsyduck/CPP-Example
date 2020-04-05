struct  base
{
	base(string sznm) :basename(sznm) {}
	string name()
	{
		return basename;
	}
	virtual void print(ostream &os)
	{
		os << basename;
	}
private:
	string basename;
};
struct derived :public base
{
	derived(string szname, int val) :base(sznm), mem(val) {}
	void print()
	{
		print(base::ostream &os);
		os << "--" << mem;
     }
private:
	int mem;
};