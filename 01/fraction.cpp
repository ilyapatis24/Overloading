#include "fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}

std::strong_ordering Fraction::operator<=>(const Fraction&) const
{
	return std::strong_ordering();
}

//std::strong_ordering Fraction::operator<=>(const Fraction&) const = default;

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
