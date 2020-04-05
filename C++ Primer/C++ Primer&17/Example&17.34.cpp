#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
bool get_status()
{
	return false;
}
int main()
{
	bool b=0;
	cout << "default bool value : " << true << " " << false\
		<< "\nalpha bool values: " << boolalpha << true << " " << false << endl;

	bool bool_val = get_status();
	cout << boolalpha << bool_val << noboolalpha << endl;

	const int ival = 15, jval = 1024;
	cout << "default :" << 20 << " " << 1024 << endl;
	cout << "octal: " << oct << 20 << " " << 1024 << endl;
	cout << "hex: " << hex << 20 << " " << 1024 << endl;
	cout << "decimal: " << dec << 20 << " " << 1024 << endl;

	cout << showbase;
	cout << "default :" << 20 << " " << 1024 << endl;
	cout << "in octal: " << oct << 20 << " " << 1024 << endl;
	cout << "in hex : " << hex << 20 << " " << 1024 << endl;
	cout << "in decimal: " << dec << 20 << " " << 1024 << endl;
	cout << noshowbase;

	cout << 10.0 << endl;
	cout << showpoint << 10.0 << noshowpoint << endl;
	
	cout << showpos << 10.0 << endl;
	cout << noshowpos << endl;

	cout << uppercase << showbase << hex << "printed in hexadecimal: " << 20 << " " << 1024\
		<< nouppercase << noshowbase << dec << endl;

	int i = -16;
	double d = 3.14159;
	cout << "i: " << setw(12) << i << "next col" << '\n' << "d: " << setw(12) << d << "next col" << '\n';

	cout<<left<< "i: " << setw(12) << i << "next col" << '\n' << "d: " << setw(12) << d << "next col" << '\n';
	cout << right << "i: " << setw(12) << i << "next col" << '\n' << "d: " << setw(12) << d << "next col" << '\n';
	cout << internal << "i: " << setw(12) << i << "next col" << '\n' << "d: " << setw(12) << d << "next col" << '\n';
	cout << setfill('#')<< "i: " << setw(12) << i << "next col" << '\n' << "d: " << setw(12) << d << "next col" << '\n';

	cout << "hi!" << endl;
	cout << "hi!" << flush;
	cout << "hi" << ends;
	return 0;
}