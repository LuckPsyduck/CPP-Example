class Myclass
{
public:
	string *operator->() const
	{
		return ptr->operator->();
	}
private:
	StrBlob *ptr;
};