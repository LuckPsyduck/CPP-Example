void swappointer3(int *&p, int *&q)
{
	int *temp = p;
	p = q;
	q = temp;
}