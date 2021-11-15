#pragma once
Fraction Fraction::Add(const Fraction fobj)
{
	Fraction temp;
	temp.numerator = this->numerator * fobj.denominator + this->denominator * fobj.numerator;
	temp.denominator = this->denominator * fobj.denominator;
	temp.nod();
	return temp;
}Fraction Fraction::Sub(const Fraction fobj)
{
	Fraction temp;
	temp.numerator = this->numerator * fobj.denominator - this->denominator * fobj.numerator;
	temp.denominator = this->denominator * fobj.denominator;
	temp.nod();
	return temp;
}
Fraction Fraction::Mult(const Fraction fobj)
{
	Fraction temp;
	temp.numerator = this->numerator * fobj.numerator;
	temp.denominator = this->denominator * fobj.denominator;
	temp.nod();
	return temp;
}
Fraction  Fraction::Div(const Fraction fobj)
{
	Fraction temp;
	temp.numerator = this->numerator * fobj.denominator;
	temp.denominator = this->denominator * fobj.numerator;
	temp.nod();
	return temp;
}
Fraction Fraction::Deg()
{
	Fraction temp;
	temp.numerator = this->numerator * this->numerator;
	temp.denominator = this->denominator * this->denominator;
	temp.nod();
	return temp;
}
Fraction Fraction::Sqrt()
{
	Fraction temp;
	temp.numerator = sqrt(this->numerator);
	temp.denominator = sqrt(this->denominator);
	temp.nod();
	return temp;
}