void swappointer1(int *p, int *q)
{
	int *temp = p;
	p = q;
	q = temp;
}