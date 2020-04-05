#include<iostream>
#include<vector>
#include<functional>


using namespace std;

vector<vector<int>> vec = {};

template <class T>
struct display
{
	void operator() (const T& x) const
	{
		cout << x << "\t";
	}
}

struct even
{
	bool operator() (int x) const
	{
		return x % 2 ? false : true;
	}
};


class even_by_two
{
public:
	int operator() () const
	{
		return x += 2;
	}
private:
	static int x;
}

int even_by_two:: x = 0;


int main()
{
	int ia[] = {0,1,2,3,4,5,6,7,8};
	vector<int> iv(ia, ia + sizeof(ia) / sizeof(int));

	cout << *adjacent_find(iv.begin(), iv.end()) << endl;

	cout << *adjacent_find(iv.begin(), iv.end(), equal_to<int>()) << endl;

	cout << count(iv.begin(), iv.end(), bind2nd(less<int>() ,7)) << endl; 

	cout << *find(iv.begin(), iv.end(), 4) << endl;

	cout << *find_if(iv.begin(), iv.end(), bind2nd(greater<int>(), 2)) << endl;

	vector<int> iv2(ia + 6, ia + 8);

	cout << *(find_end(iv.begin(), iv.end(), iv2.begin(), iv2.end()) + 3) << endl; 

	cout << *(find_first_of(iv.begin(), iv.end(), iv2.begin(), iv2.end()) + 3) << endl;

	for_each(iv.begin(), iv.end(), display<int>());
	cout << endl;


	generate(iv2.begin(), iv2.end(), even_by_two());
	for_each(iv2.begin(), iv2.end(), display<int>());
	cout << endl;

	generate_n(iv.begin(), iv.end(), even_by_two());
	for_each(iv.begin(), iv.end(), display<int>());
	cout << endl;


	remove(iv.begin(), iv.end(), 6);
	for_each(iv.begin(), iv.end(), display<int>());
	cout << endl;

	vector<int> iv3(12);

	remove_copy(iv.begin(), iv.end(), iv3.begin(), 6);
	for_each(iv3.begin(), iv3.end(), display<int>());
	cout << endl;

	remove_copy_if(iv.begin(), iv.end(), iv3.begin(), bind2nd(less<int>(), 7));
	for_each(iv3.begin(), iv3.end(), display<int>());
	cout << endl;

	replace(iv.begin(), iv.end(), 6, 3) ;
	for_each(iv3.begin(), iv3.end(), display<int>());
	cout << endl;

	replace_copy(iv.begin(), iv.end(), iv3.begin(), 3, 5);
	for_each(iv3.begin(), iv3.end(), display<int>());
	cout << endl;

	replace_if(iv.begin(), iv.end(), bind2nd(less<int>(), 5), 2);
	for_each(iv.begin(), iv.end(), display<int>());
	cout << endl;

	replace_copy_if(iv.begin(), iv.end(), iv3.begin(), bind2nd(equal_to<int>(), 8), 9);
	for_each(iv3.begin(), iv3.end(), display<int>());
	cout << endl;

	reverse(iv.begin(), iv.end());
	for_each(iv.begin(), iv.end(), display<int>());
	cout << endl;

	reverse_copy(iv.begin(), iv.end(), iv3.begin());
	for_each(iv3.begin(), iv3.end(), display<int>());
	cout << endl;

	rotate(iv.begin(), iv.begin() + 4, iv.end());
	for_each(iv3.begin(), iv3.end(), display<int>());
	cout << endl;

	rotate_copy(iv.begin(), iv.begin() + 4, iv.end(), iv3.begin());

	int ia2[3] = {2, 8};
	vector<int> iv4(ia2, ia2 + 2);
	for_each(iv4.begin(), iv4.end(), display<int>());
	cout << endl;

	cout << *search(iv.begin(), iv.end(), iv4.begin(), iv4.end()) << endl;

	cout << *search_n(iv.begin(), iv.end(), 2, 8) << endl;

	cout << *search_n(iv.begin(), iv.end(), 3, 8, less<int>()) << endl;

	swap_ranges(iv4.begin(), iv4.end(), iv.begin());

	transform(iv.begin(), iv.end(), iv.begin(), bind2nd(minus<int>(), 2));

	transform(iv.begin(), iv.end(), iv.begin(), plus<int>());

	//****************************************//

	vector<int> iv5(ia, ia + sizeof(ia) / sizeof(int));
	vector<int> iv6(ia + 4, ia + 8);
	vector<int> iv7(15);
	for_each(iv5.begin(), iv5.end(), display<int>());


	cout << *max_element(iv5.begin(), iv5.end()) << endl;
	cout << *mix_element(iv5.begin(), iv5.end()) << endl;

	cout << includes(iv5.begin(), iv5.end(), iv6.begin(), iv6.end()) << endl;

	merge(iv5.begin(), iv5.end(), iv6.begin(), iv6.end(), iv7.begin());


	partition(iv7.begin(), iv7.end(), even());

	unique(iv5.begin(), iv5.end());

	unique_copy(iv5.begin(), iv5.end(), iv7.begin());
}





adjacent_find

template<class ForwardIterator>
ForwardIterator adjacent_find(ForwardIterator first, ForwardIterator last)
{
	if (first == last)
		return last;
	ForwardIterator next = first;
	while(++next != last)
	{
		if (*first == *next)
			return first;
		first = next;		
	}
	return last;
}

template<class ForwardIterator, class BinaryPredicate>
ForwardIterator adjacent_find(ForwardIterator first, ForwardIterator last, BinaryPredicate binary_pred)
{
	if (first == last)
		return last;
	ForwardIterator next = first;
	while(++next != last)
	{
		if (binary_pred(*first, *next))
			return first;
		first = next;		
	}
	return last;
}



cout

template<class InputIterator, class T>
typename iterator_traits<InputIterator> :: difference_type
cout(InputIterator first, InputIterator last, const T& value)
{
	typename iterator_traits<InputIterator> :: difference_type n = 0;
	for(;, first != last; ++first)
		if (*first == value)

			++n;
	return n
}

cout_if

template<class InputIterator, class Predicate>
typename iterator_traits<InputIterator> :: difference_type 
cout_if(InputIterator first, InputIterator last, Predicate pred)
{
	typename iterator_traits<InputIterator> :: difference_type n = 0;
	for(;, first != last; ++first)
		if (pred(*first))
			++n;
	return n;
}

find 

template<class InputIterator, class T>
InputIterator find(InputIterator first, InputIterator last, const T& value)
{
	while(first != last && *first != value)
		++first;
	return first;
}

find_if

template<class InputIterator, class Predicate>
InputIterator find_if(InputIterator first, InputIterator last, Predicate pred)
{
	while(first != last && !pred(*first))
		++first;
	return first;
}


find_first_of

template<class InputIterator, class ForwardIterator>
InputIterator find_first_of(InputIterator first1, InputIterator last1, InputIterator first2, InputIterator last2)
{
	for(; first1 != last1; ++first1)
		for(ForwardIterator iter = first2, iter != last2,; ++iter)
			if(*first1 == *iter)
				return first1;
	return last1;
}

template<class InputIterator, class ForwardIterator, class BinaryPredicate>
InputIterator find_first_of(InputIterator first1, InputIterator last1, ForwardIterator first2, ForwardIterator last2, BinaryPredicate comp)
{
	for(; first1 != last1; ++first1)
		for(ForwardIterator iter = first2; iter != last2; ++iter)
			if(comp(*first1, *iter))
				return first1;
	return last1;
}

for_each

template<class InputIterator, class Function>
Function for_each(InputIterator first, InputIterator last, Function f)
{
	for(; first != last; ++first)
		f(*first);
	return f
}

generate

template<class ForwardIterator, class Generator>
void generate(ForwardIterator first, ForwardIterator last, Generator gen)
{
	for(; first != last; ++first)
		*first = gen();
}

generate_n

template<class OutputIterator, class Size, class Generator>
OutputIterator generate_n(OutputIterator first, Size n, Generator gen)
{
	for(; n>0; --n, ++first)
		*first = gen();
	return first; 
}



includes
template<class InputIterator1, class InputIterator2>
bool includes(InputIterator1 first1, InputIterator1 last1, \
	InputIterator2 first2, InputIterator2 last2)
{
	while(first1 != last1 && first2 != last2)
		if(*first2 < *first1)
			return false;
		else if(*first1 < *first2)
			++first1;
		else
			++first1;
			++first2;

	return first2 == last2;
}

template<class InputIterator1 first1, InputIterator1 last1, \
	InputIterator2 first2, InputIterator2 last2>
{
	while(first1 != last1 && first2 != last2)
		if(comp(*first2, *first1))
			return false;
		else if(comp(*first1, *first2))
			++first1;
		else
			++first1, ++first2;
	return first2 == last2;
}


max_element
template<class ForwardIterator>
ForwardIterator max_element(ForwardIterator first, ForwardIterator last)
{
	if(first == last)
		return first;
	ForwardIterator result = first;
	while(++first != last)
		if(*result < *first) 
			result = first;
	return result;
}

template<class ForwardIterator, class Compare>
ForwardIterator max_element(ForwardIterator first, ForwardIterator last, Compare comp)
{
	if(first == last)
		return first;
	ForwardIterator result = first;
	while(++first != last)
		if(comp(*result, *first))
			result = first;
	return result;
}
                              


merge

template<class InputIterator1, class InputIterator2, class OutputIterator>
OutputIterator merge(InputIterator1 first1, InputIterator1 last1, \
	InputIterator2 first2, InputIterator2 last2, OutputIterator result)
{
	while(first1 != last1 && first2 != last2)
	{
		if(*first2 < *first1)
		{
			*result = *first2;
			++first2;
		}
		else
		{
			*result = *first1;
			++first1;
		}
		++result;
	}	
	return copy(first2, last2, copy(first1, last1, result))
}


template<class InputIterator1, class InputIterator2, class OutputIterator, class Compare>
OutputIterator merge(InputIterator1 first1, InputIterator1 last, \
		InputIterator2 first2, InputIterator2 last, OutputIterator result, Compare comp)
{
	while(first1 != last1 && first2 != last2)
	{
		if(comp(*first2, *first1))
		{
			*result = *first2;
			++first2
		}
		else 
		{
			*result = *first1;
			++first1;
		}
		++result;
	}
	return copy(first2, last2, copy(first1, last1, result));
}

min_element

template<class ForwardIterator>
ForwardIterator min_element(ForwardIterator first, ForwardIterator last)
{
	if(first == last)
		return first;
	ForwardIterator result = first;
	while(++first != last)
		if(*first < result)
			result = first;
	return result;
}

template<class ForwardIterator, class Compare>
ForwardIterator min_element(ForwardIterator first, ForwardIterator last, Compare comp)
{
	if(first == last)
		return first;
	ForwardIterator result = first;
	while(++first != last)
		if(comp(*first, *result))
			result = first;
	return result;
}



partition

template<class BidirectionalIterator, class Predicate>
BidirectionalIterator partition(BidirectionalIterator first, BidirectionalIterator last, Predicate pred)
{
	while(true)
	{
		while(true)
			if(first == last)
				return first;
			else if(pred(*first))
				++first;
			else
				break;
		--last;
		while(true)
			if(first == last)
				return first;
			else if(!pred(*last))
				--last;
			else
				break;
		iter_swap(first, last)
		++first;  
	}
}



remove

template<class ForwardIterator, class T>
ForwardIterator remove(ForwardIterator first, ForwardIterator last, const T& value)
{
	first = find(first, last, value);
	ForwardIterator next = first;
	return first == last? first : remove_copy(++next, last, first, value);
}


remove_copy
template<class InputIterator, class OutputIterator, class T>
OutputIterator remove_copy(InputIterator first, InputIterator last, OutputIterator result, const T& value)
{
	for(; first != last; ++first)
		if(*first != value)
		{
			*result = *first;
			++result;
		}
	return result;
}

remove_if
template<class ForwardIterator, class Predicate>
ForwardIterator remove_if(ForwardIterator first, ForwardIterator last, Predicate pred)
{
	first = find_if(first, last, pred);
	ForwardIterator next = first;
	return first == last ? first : remove_copy_if(++next, last, first, pred);
}

template<class InputIterator, class OutputIterator, class Predicate>
OutputIterator remove_copy_if(InputIterator first, InputIterator last, OutputIterator result, Predicate pred)
{
	for(; first != last; ++first)
		if(!pred(*first))
		{
			*result = *first;
			++result;
		}
	return result;
} 


remove_copy_if

template<class InputIterator, class OutputIterator, class Predicate>
OutputIterator remove_copy_if(InputIterator first, InputIterator last, OutputIterator result, Predicate pred)
{
	for(; first != last; ++first)
	{
		if(!pred(*first))    // false
 	 	{
			*result = *first;
			++result
		}
	}
	return result;
}

replace
template<class ForwardIterator, class T>
void replace(ForwardIterator first, ForwardIterator last, const T& old_value, const T& new_value)
{
	for(; first != last; ++first)
		if(*first == old_value)
			*first = new_value;
}


replace_copy
template<class InputIterator, class OutputIterator, class T>
OutputIterator replace_copy(InputIterator first, InputIterator last, \
	OutputIterator result, const T& old_value, const T& new_value)
{
	for(; first != last; ++first, ++result)
		*result = *first == old_value ? new_value : *first;
	return result;
}

replace_if

template<class ForwardIterator, class Predicate, class T>
void replace_if(ForwardIterator first, ForwardIterator last, Predicate pred, const T& new_value)
{
	for(; first != last; ++first)
		if(pred(*first))
			*first = new_value;
}

replace_copy_if

template<class Iterator, class OutputIterator, class Predicate, class T>
OutputIterator replace_copy_if(Iterator first, Iterator last, OutputIterator result, Predicate pred, const T& new_value)
{
	for(; first != last; ++first, ++result)
		*result = pred(*first) ? new_value : *first;
	return result
}

reverse
template<class BidirectionalIterator>
inline void reverse(BidirectionalIterator first, BidirectionalIterator last)
{
	__reverse(first, last, iterator_category(first))
}
template<class BidirectionalIterator>
void __reverse(BidirectionalIterator first, BidirectionalIterator last, bidirectional_iterator_tag)
{
	while(true)
		if(first == last || first == --last)
			return;
		else
			iter_swap(first++, last)
}

template<class RandomAccessIterator>
void __reverse(RandomAccessIterator first, RandomAccessIterator last, random_access_iterator_tag)
{
	while(first < last)
		iter_swap(first++, --last)
}

reverse_copy
template<class BidirectionalIterator, class OutputIterator>
OutputIterator reverse_copy(BidirectionalIterator first, BidirectionalIterator last, OutputIterator result)
{
	while(first != last)
	{
		--last;
		*result = *last;
		++result;
	}
	return result;
}

rotate
template<class ForwardIterator>
inline void rotate(ForwardIterator first, ForwardIterator middle, ForwardIterator last)
{
	if(first == middle || middle == last)
		return;
	__rotate(first, middle, last, distance_type(first), iterator_category(first));
}

template<class ForwardIterator, class Distance>
void __rotate(ForwardIterator first, ForwardIterator middle, ForwardIterator last, Distance*, forword_iterator_tag)
{
	for(ForwardIterator i = middle; ;)
	{
		iter_swap(first, i);
		++first; 
		++i;

		if(first == middle)
		{
			if (i == last)
				return;
			middle = i;
		} 
		else if(i == middle)
			i = middle;
	}
}

rotate_copy

template<class ForwardIterator, class OutputIterator>
OutputIterator rotate_copy(ForwardIterator first, ForwardIterator middle, ForwardIterator last, OutputIterator result)
{
	return copy(first, middle, copy(middle, last, result));
}

search
template<class ForwardIterator1, class ForwardIterator2>
inline ForwardIterator1 search(ForwardIterator1 first1, ForwardIterator1 last1, ForwardIterator2 first2, ForwardIterator2 last2)
{
	return __search(first1, last1, first2, last2, distance_type(first1), distance_type(first2));
}

template<class ForwardIterator1, class ForwardIterator2, class Distance1, class Distance2>
ForwardIterator1 __search(ForwardIterator1 first1, ForwardIterator1 last1, \
	ForwardIterator2 first2, ForwardIterator2 last2, Distance1*, Distance2*)
{
	Distance1 d1 = 0
	distance(first1, last1, d1);
	Distance2 d2 = 0
	distance(first2, last2, d2);

	if(d1 < d2)
		return last1;

	ForwardIterator1 current1 = first1;
	ForwardIterator2 current2 = first2;

	while(current2 != last2)
		if(*current1 == *current2)
		{
			++current1;
			++current2;
		}
		else
		{
			if(d1 == d2)
				return last1;
			else
			{
				current1 = ++first1;
				current2 = first2;
				--d1;
			}
		}
	result first1;
}

search_n

template<class ForwardIterator, class Iterator, class T>
ForwardIterator search_n(ForwardIterator first, ForwardIterator last, Integer count, const T& value)
{
	if(count <= 0)
		return first;
	else
	{
		first = find(first, last, value);
		while(first != last)
		{
			Integer n = count -1;
			ForwardIterator i = first;
			++i;
			while(i != last && n != 0 && *i == value)
			{
				++i;
				--n;
			}
			if(n == 0)
				return first;
			else
				first = find(i, last, value);
		}
	return last;
	}
}

swap_ranges

template<class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 swap_ranges(ForwardIterator1 first1, ForwardIterator1 last1, ForwardIterator2 first2)
{
	for(; first1 != last1; ++first1, ++first2)
		iter_swap(first1, first2);
	return first2;
}

transform
template<class InputIterator, class OutputIterator, class UnaryOperation>
OutputIterator transform(InputIterator first, InputIterator last, OutputIterator result, UnaryOperation op)
{
	for(; first != last; ++first, +result)
		*result = op(*first);
	return result;
}

unique
template<class ForwardIterator>
ForwardIterator unique(ForwardIterator first, ForwardIterator last)
{
	first = adjacent_find(first, last);
	return unique_copy(first, last, first);
}

unique_copy
template<class InputIterator, class OutputIterator>
inline OutputIterator unique_copy(InputIterator first, InputIterator last, OutputIterator result)
{
	if(first == last)
		return result;
	return __unique_copy(first, last, result, iterator_category(result));
}

template<class InputIterator, class ForwardIterator>
ForwardIterator __unique_copy(InputIterator first, InputIterator last, ForwardIterator result, forword_iterator_tag)
{
	*result = *first;
	while(++first != last)
		if(*result != *first)
			*++result = *first;
	return +=result;
}

