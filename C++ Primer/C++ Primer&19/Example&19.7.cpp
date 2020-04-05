#include<iostream>
using namespace std;
class Query_base
{
public:
	Query_base() {}
	virtual ~Query_base() {}
};
class BinaryQuery :public Query_base
{
public:
	BinaryQuery() {}
	virtual ~BinaryQuery() {}
};
class AndQuery :public BinaryQuery
{
public:
	AndQuery() {}
	virtual ~AndQuery() {}
};
int main()
{
	Query_base *qb = new Query_base;
	/*BinaryQuery *qb = new BinaryQuery;*/
	try
	{
		dynamic_cast<AndQuery&>(*qb);
		cout << "success\n";
	}
	catch (bad_cast & bc)
	{
		cout << "failure\n";
	}
	return 0;
}