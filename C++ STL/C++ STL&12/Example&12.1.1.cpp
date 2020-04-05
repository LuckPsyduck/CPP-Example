#include<iostream>
#include<complex>
using namespace std;
void main()
{
	complex<double> c1(4.0, 3.3);
	complex<float> c2(polar(5.0, 0.75));

	cout << "c1: " << c1 << endl;
	cout << "c2: " << c2 << endl;

	cout << "c1: magnitude: " << abs(c1) << "squared magnitude: " << norm(c1) << "phase angle: " << arg(c1) << endl;
	cout << "c2: magnitude: " << abs(c2) << "squared magnitude: " << norm(c2) << "phase angle: " << arg(c2) << endl;

	cout << "c1 conjugated: " << conj(c1) << endl;
	cout << "c1 conjugated: " << conj(c2) << endl;

	cout << "4.4+c1*1.8: " << 4.4 + c1*1.8 << endl;

	cout << "c1+c2: " << c1 + complex<double>(c2.real(), c2.imag()) << endl;
	cout << "c1+=sqrt(c1): " << (c1 += sqrt(c1)) << endl;
}