#include <iostream>
#include "Source1.cpp"
#include "Header.h"
using namespace std;

int main()
{
	Fraction f1(1, 2);
	Fraction f2(1, 4);
	Fraction f3(1, 8);
	cout << f1 + f2 + f3;
	cout << f1 - f2 - f3;
	cout << f1 * f2 * f3;
	cout << f1 / f2 / f3;
	if (f2 == f2)
		cout << "Fraction f1 and f2 are equal\n";
	if (f2 < f1)
		cout << "Fraction f2 is less,then f1\n";
	if (f2 > f3)
		cout << "Fraction f2 is greater,then f3\n";
	if(f2 <= f1)
		cout << "Fraction f2 is less or equal,then f1\n";
	if(f2 >= f3)
		cout << "Fraction f2 is greater or equal,then f3\n";
	cout << ++f1;
	cout << --f1;
	cout << f1.Deg();
	cout << f2.Sqrt();
	Fraction f;
	cin >> f;
	cout << f;
	return 0;
}