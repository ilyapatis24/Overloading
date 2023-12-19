#include "fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}

bool Fraction::operator==(Fraction& f)
{
	if (this->numerator_ == f.numerator_ && this->denominator_ == f.denominator_)
	{
		return true;
	}
	return false;
}

bool Fraction::operator!=(Fraction& f)
{
	return !(*this == f);
}

bool Fraction::operator<(Fraction& b)
{
	int scm_number = std::lcm(this->denominator_, b.denominator_);
	if ((this->numerator_ * (scm_number / this->denominator_)) < (b.numerator_ * (scm_number / b.denominator_)))
	{
		return true;
	}
	return false;
}

bool Fraction::operator>(Fraction& b)
{
	if (!(*this < b) && (*this != b))
	{
		return true;
	}
	return false;
}

bool Fraction::operator<=(Fraction& b)
{
	if ((*this < b) || (*this == b))
	{
		return true;
	}
	return false;
}

bool Fraction::operator>=(Fraction& b)
{
	if ((*this > b) || (*this == b))
	{
		return true;
	}
	return false;
}