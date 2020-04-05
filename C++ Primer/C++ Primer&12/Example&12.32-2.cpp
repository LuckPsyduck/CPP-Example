0#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<sstream>
#include<fstream>
#include<memory>
#include<stdexcept>
using namespace std;
class QueryReasult;
class StrBlob 
{
	friend void print(ostream&, const QueryReasult&);
public:
	typedef vector<string>::size_type size_type;
	StrBlob() :data(make_shared<vector<string>>()) {}
	StrBlob(initializer_list<string>il) : data(make_shared<vector<string>>(il)) {}
	const string& get_string(int i) 
	{             
		return (*data)[i];
	}
	size_type size()const { return data->size(); }
	bool empty() { return data->empty(); }
	void push_back(const string& str) { data->push_back(str); }
	void pop_back()
	{
		check(0, "pop_back on empty StrBlob");
		data->pop_back();
	}
	string& front()const 
	{
		check(0, "front on empty StrBlob");
		return data->front();
	}
	string& back()const 
	{
		check(0, "back on empty StrBlob");
		return data->back();
	}
private:
	shared_ptr<vector<string>>data;
	void check(size_type i, const string& msg)const 
	{
		if (i >= data->size())
			throw out_of_range(msg);
	}
};

class QueryReasult 
{
	friend void print(ostream&, const QueryReasult&);
public:
	QueryReasult(string str, shared_ptr<set<int>>p, shared_ptr<StrBlob>p2)        //ÐÞ¸Ä¹¹Ôìº¯Êý  
		: sought(str), lines(p), file(p2) {};
	set<int>::iterator begin()const
	{           
		return lines->begin();
	}
	set<int>::iterator end()const 
	{              
		return lines->end();
	}
	shared_ptr<StrBlob> get_file()const 
	{     
		return file;
	}
private:
	string sought;
	shared_ptr<set<int>>lines;
	shared_ptr<StrBlob>file;                    //ÐÞ¸Ä³ÉÔ±  
};

class TextQuery
{
public:
	TextQuery(ifstream& ifs) :file(new StrBlob)
	{     
		string line, str;
		int num = 0;
		while (getline(ifs, line)) 
		{
			++num;
			file->push_back(line);
			istringstream is(line);
			while (is >> str) 
			{
				shared_ptr<set<int>>& ret = wm[str];
				if (!ret)
					ret.reset(new set<int>);
				ret->insert(num);
			}
		}
	}
	QueryReasult query(const string& str)const
	{
		static shared_ptr<set<int>> nodata(new set<int>);
		auto ret = wm.find(str);
		if (ret == wm.end())
			return QueryReasult(str, nodata, file);
		return QueryReasult(str, ret->second, file);
	}
private:
	shared_ptr<StrBlob> file;                         //ÐÞ¸Ä³ÉÔ±  
	map<string, shared_ptr<set<int>> >wm;
};
void print(ostream& os, const QueryReasult& qr)
{
	os << qr.sought << "  occurs " << qr.lines->size() << endl;
	for (auto i : *qr.lines)
		cout << "line" << i << ": " << qr.file->get_string(i - 1) << endl;     //µ÷ÓÃget_string  
	cout << endl;
}
int main() 
{
	ifstream infile("data.txt");
	TextQuery tq(infile);
	string str;
	while (1) 
	{
		cout << "please input a word:" << endl;
		cin >> str;
		print(cout, tq.query(str));
	}

	return 0;
}