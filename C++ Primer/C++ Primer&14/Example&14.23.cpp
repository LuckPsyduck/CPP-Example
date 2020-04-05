class StrVec
{
public:
	StrVec & operator=(initializer_list<string> il);
};
StrVec & StrVec::operator=(initializer_list<string> il)
{
	auto data = alloc_n_copy(il.begin(), il.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}


class StrVec
{
public:
	StrVec & operator = (initializer_list<string> il);
};

StrVec & StrVec :: operator = (initializer_list<string> il)
{
	auto data = alloc_n_copy(il.begin(), il.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this
}
