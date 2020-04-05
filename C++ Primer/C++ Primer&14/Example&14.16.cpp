class StrBlob
{
	friend bool operator==(const StrBlob &lhs, const StrBlob &rhs);
	friend bool operator!=(const StrBlob &lhs, const StrBlob &rhs);
};
bool operator==(const StrBlob &lhs, const StrBlob &rhs)
{
	return lhs.data == rhs.data;
}
bool operator!=(const StrBlob &lhs, const StrBlob &rhs)
{
	return !(lhs == rhs);
}

class String
{
	friend bool operator==(const String &lhs, const String &rhs);
	friend bool operator!=(const String &lhs, const String &rhs);
private:
	const char *str;
};
bool operator==(const String &lhs, const String &rhs)
{
	return strcmp(lhs.str, rhs.str);
}
bool operator!=(const String &lhs, const String &rhs)
{
	return !(lhs==rhs);
}