class IntCompare
{
public:
	IntCompare(int v) :val(v) {}
	bool operator()(int v) { return val == v; }
private:
	int val;
};
int main()
{
	vector<int> vec = { 1,2,3,2,1 };
	const int oldval = 2;
	const int newval = 200;
	IntCompare icmp(oldval);
	replace_if(vec.begin(), vec.end(), icmp, newval);
	return 0;
}