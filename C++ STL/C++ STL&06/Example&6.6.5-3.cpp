#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
template <class K,class V>
class value_equals
{
private:
	V value;
public:
	value_equals(const V & v):value(v){ }

	bool operator() (pair<const K,V> elem)
	{
		return  elem.second== value;
	}
};
void main()
{
	typedef map<float, float> FloatFloatMap;
	FloatFloatMap coll;
	FloatFloatMap::iterator pos;
	coll[1] = 7;
	coll[2] = 4;
	coll[3] = 2;
	coll[4] = 3;
	coll[5] = 6;
	coll[6] = 1;
	coll[7] = 3;
	pos = coll.find(3.0);//key
	if (pos != coll.end())
		cout << pos->first << ": " << pos->second << endl;
	pos = find_if(coll.begin(), coll.end(), value_equals<float, float>(3.0));
	if (pos != coll.end())
		cout << pos->first << ": " << pos->second << endl;
}