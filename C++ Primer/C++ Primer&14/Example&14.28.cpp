class StrBlobprt
{
	friend StrBlobprt operator+(int n);
	friend StrBlobprt operator+(int n);
};
StrBlobprt operator+(int n)
{
	auto ret = *this;
	ret.curr += n;
	return ret;
}
StrBlobprt operator-(int n)
{
	auto ret = *this;
	ret.curr -= n;
	return ret;
}