class StrBlob
{
public:
	string &operator[](size_t n) { return data[n]; }
	const string &operator[](size_t n)const { return data[n]; }
};

class StrBlobPtr
{
public:
	string &operator[](size_t n) { return (*wptr.lock()[n]); }
	const string &operator[](size_t n) const { return (*wptr.lock()[n]);}
};

class Strvec
{
public:
	string &operator[](size_t n) { return elements[n]; }
	const string &operator[](size_t n) const {
		return elements[n];}
};

class String
{
public:
	string &operator[](size_t n) { return (char)str[n]; }
	const string &operator[](size_t n) const {
		return (char str[n]);}
}
	