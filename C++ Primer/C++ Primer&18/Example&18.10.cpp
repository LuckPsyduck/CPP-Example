sales_data item1, item2, sum;
while (cin >> item1 >> item2)
{
	try
	{
		sum = item1 + item2;
		return sum;
	}
	catch (const isbn_mismatch &e)
	{
		cerr << e.what() << ": left isbn(" << e.left << ")right isbn(" << e.right << ")" << endl;
	}
}