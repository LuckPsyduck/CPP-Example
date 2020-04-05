#include<algorithm>
#include<vector>
#include <functional>
#include <iostream>

using namespace std;

struct even
{
	bool operator()(int x) const
	{
		return x % 2 ? false : true ;
	}
}

int main()
{
	int ia[]= {12, 17, 20, 22, 23, 30, 33, 40};
	vector<int> iv(ia, sizeof(ia) / sizeof(ia[0]));

	cout << *low_bound(iv.begin(), iv.end(), 21) << endl;
	cout << *upper_bound(iv.begin(), iv.end(), 21) << endl;

	cout << binary_search(iv.begin(), iv.end(), 33) << endl;
	cout << binary_search(iv.begin(), iv.end(), 34) << endl;

	random_shuffle(iv.begin(), iv.end());
	copy(iv.begin(), iv.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";

	partial_sort(iv.begin(), iv.begin()+4, iv.end());
	copy(iv.begin(), iv.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";

	sort(iv.begin(), iv.end())
	copy(iv.begin(), iv.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	sort(iv.begin(), iv.end(), greater<int>());
	copy(iv.begin(), iv.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	iv.push_back(22);
	iv.push_back(30);
	iv.push_back(17);

	stable_sort(iv.begin(), iv.end())
	copy(iv.begin(), iv.end(), ostream_iterator<int>());
	cout << endl;

	pair<vector<int> :: iterator, vector<int> ::iterator> pairIte;
	pairIte = equal_range(iv.begin(), iv.end(), 22);
	cout << *(pairIte.first) << endl;
	cout << *(pairIte.second) << endl;

	nth_element(iv.begin(), iv.begin()+5, iv.end());
	copy(iv.begin(), iv.end(), ostream_iterator<int>());
	cout << endl;

	nth_element(iv.begin(), iv.begin() + 5, iv.end());
	copy(iv.begin(), iv.end(), ostream_iterator<int>());
	cout << endl;

	stable_partition(iv.begin(), iv.end(), even());
	copy(iv.begin(), iv.end(), ostream_iterator<int>());
	cout << endl;
}

template<class ForwardIterator, class T>
inline ForwardIterator lower_bound(ForwardIterator first, ForwardIterator last, const T& value)
{
	return __lower_bound(first, last, value, distance_type(first), iterator_category(first));
}

template<class ForwardIterator, class T, class Compare>
inline ForwardIterator lower_bound(ForwardIterator first, ForwardIterator last, const T& value, Compare comp)
{
	return __lower_bound(first, last, value, comp, distance_type(first), iterator_category(first));
}

template<class ForwardIterator, class T, class Distance>
ForwardIterator __lower_bound(ForwardIterator first, ForwardIterator last, const T& value, Distance*, forward_iterator_tag)
{
	Distance len = 0;
	distance(first, last, len);
	Distance half;
	ForwardIterator middle;

	while(len > 0)
	{
		half = len >> 1;
		middle = first;
		advance(middle, half);
		if(*middle < value)
		{
			first = middle;
			++first;
			len = len - half -1;
		}
		else
			len = half;
	}
	return first;
}


template<class ForwardIterator, class T, class Distance>
ForwardIterator _upper_bound(ForwardIterator first, ForwardIterator last, const T& value, Distance*, forward_iterator_tag)
{
	Distance len = 0;
	distance(first, last, len);
	Distance half;
	ForwardIterator middle;

	while(len > 0)
	{
		half = len >> 1;
		middle  = first;
		advance(middle, half);
		if(value < *middle)
			len = half;
		else
		{
			first = middle;
			++first;
			len = len - half -1;

		}
	}
	return first;
}


binary_search
template<class ForwardIteratorm, class T>
bool binary_search(ForwardIterator first, ForwardIterator last, const T& value)
{
	ForwardIterator i = lower_bound(first, last, value);
	return i != last && !(value < *i);
}

random_shuffle
template<class RandomAccessIterator>
inline void random_shuffle(RandomAccessIterator first, RandomAccessIterator last)
{
	__random_shuffle(first, last, distance_type(first));
}

template<class RandomAccessIterator, class Distance>
void __random_shuffle(RandomAccessIterator first, RandomAccessIterator last, RandomNumberGenerator& rand)
{
	if(first == last)
		return;
	for(RandomAccessIterator i = first + 1; i != last; ++i)
		iter_swap(i, first + rand((i - first) + 1));
}

