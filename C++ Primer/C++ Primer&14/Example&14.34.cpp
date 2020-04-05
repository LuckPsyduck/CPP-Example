class IfElseThen
{
public:
	IfElseThen() {}
	IfElseThen(int il1, int il2, int il3) :ival1(il1), ival2(il2), ival3(il3) {}
	int operator()(int il1, int il2, int il3) { return il1 ? il2 : il3; }
private:
	int ival1, ival2, ival3;
};