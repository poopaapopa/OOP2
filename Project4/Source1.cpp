#include <iostream>
#include <stdio.h>
using namespace std;

class Fraction
{
	int numerator;
	int denominator;
	void nod()
	{
		int n = numerator;
		int d = denominator;
		while (n != 0 and d != 0)
		{
			if (n > d)
				n %= d;
			else
				d %= n;
		}
		numerator /= (n + d);
		denominator /= (n + d);
	}
public:
	Fraction(int numerator = 0, int denominator = 1)
	{
		this->numerator = numerator;
		if (denominator != 0)
			this->denominator = denominator;
		else cout << "Error 1: denominator cannot be zero!\n";
		nod();
	}
	void setNumerator(int numerator) { this->numerator = numerator; }
	void setDenominator(int denominator) { if (denominator != 0) this->denominator = denominator; else cout << "Error 1: denominator cannot be zero!\n"; }
	int getNumerator() { return numerator; }
	int getDenominator() { return denominator; }
	Fraction Add(const Fraction fobj);
	Fraction Sub(const Fraction fobj);
	Fraction Mult(const Fraction fobj);
	Fraction Div(const Fraction fobj);
	Fraction Deg();
	Fraction Sqrt();
	friend Fraction operator+(Fraction f1, const Fraction f2) { return f1.Add(f2); }
	friend Fraction operator-(Fraction f1, const Fraction f2) { return f1.Sub(f2); }
	friend Fraction operator*(Fraction f1, const Fraction f2) { return f1.Mult(f2); }
	friend Fraction operator/(Fraction f1, const Fraction f2) { return f1.Div(f2); }
	friend bool operator==(const Fraction& f1, const Fraction& f2) { if (f1.numerator == f2.numerator and f1.denominator == f2.denominator) return 1; else return 0; }
	friend bool operator<(Fraction& f1, Fraction& f2) { if (f1.denominator * f2.numerator > f2.denominator * f1.numerator) return 1; else return 0; }
	friend bool operator>(Fraction& f1, Fraction& f2) { if (f1.denominator * f1.numerator < f2.denominator * f2.numerator) return 1; else return 0; }
	friend bool operator>=(Fraction& f1, Fraction& f2) { if (f1 == f2 or f1 > f2) return 1; else return 0; }
	friend bool operator<=(Fraction& f1, Fraction& f2) { if (f1 == f2 or f1 < f2) return 1; else return 0; }
	friend Fraction operator++(Fraction& f) { f.numerator += f.denominator; return f; }
	friend Fraction operator--(Fraction& f) { f.numerator -= f.denominator; return f; }
	friend istream& operator>>(istream& in, Fraction& f)
	{
		cout << "Get numerator\n";
		in >> f.numerator;
		cout << "Get denominator\n";
		in >> f.denominator;
		return in;
	}
	friend ostream& operator<<(ostream& output, const Fraction f1)
	{
		if (f1.denominator < 0)
			output << "-" << f1.numerator << "/" << -f1.denominator << "\n";
		else
			output << f1.numerator << "/" << f1.denominator << "\n";
		return output;
	}
};