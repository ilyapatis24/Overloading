#include "fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}


Fraction Fraction::operator+(Fraction& f)
{
	Fraction sum(0, 0);
	sum.numerator_ = numerator_ * f.denominator_ + f.numerator_ * denominator_;
	sum.denominator_ = denominator_ * f.denominator_;
	return sum;
}

Fraction Fraction::operator-(Fraction& f)
{
	Fraction sub(0, 0);
	sub.numerator_ = numerator_ * f.denominator_ - f.numerator_ * denominator_;
	sub.denominator_ = denominator_ * f.denominator_;
	return sub;
}

Fraction Fraction::operator*(Fraction& f)
{
	Fraction result(0, 0);

	result.denominator_ = this->denominator_ * f.denominator_;;
	result.numerator_ = this->numerator_ * f.numerator_;
	int del = std::gcd(result.numerator_, result.denominator_);
	result.denominator_ = result.denominator_ / del;
	result.numerator_ = result.numerator_ / del;
	return result;
}

Fraction Fraction::operator/(Fraction& f)
{
	Fraction result(0, 0);

	result.denominator_ = this->denominator_ * f.numerator_;;
	result.numerator_ = this->numerator_ * f.denominator_;
	int del = std::gcd(result.numerator_, result.denominator_);
	result.denominator_ = result.denominator_ / del;
	result.numerator_ = result.numerator_ / del;
	return result;
}

Fraction Fraction::operator++()
{	
	this->numerator_ += this->denominator_;
	return *this;
}

Fraction Fraction::operator--(int)
{
	Fraction result = *this;
	this->numerator_ -= this->denominator_;
	return result;
}

std::string Fraction::to_string()
{
	return std::to_string(numerator_) + "/" + std::to_string(denominator_);
}