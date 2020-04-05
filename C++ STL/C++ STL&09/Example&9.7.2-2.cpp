#include"algostuff.h"
#include<iterator>
using namespace std;
bool bothSpace(char elem1, char elem2)
{
	return elem1 == ' '&&elem2 == ' ';
}

void main()
{
	cin.unsetf(ios::skipws);//使两个空格不会结束

	unique_copy(istream_iterator<char>(cin), istream_iterator<char>(), ostream_iterator<char>(cout),bothSpace);
}
