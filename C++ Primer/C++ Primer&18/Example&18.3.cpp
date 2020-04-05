void exercise(int *b, int *e)
{
	vector<int> v(b, e);
	int *p = new int[v.size()];
	try
	{
		ifstream in("ints");
		//
	}
	catch
	{
		delete[] p;
	}
}




void exercise(int *b, int *e)
{
	vector<int> v(b, e);
	resource res(v.size());
	ifstream in("ints");
	exception occur here
}