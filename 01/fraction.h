#pragma once
#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator);
	std::strong_ordering operator<=>(const Fraction&) const;
	bool operator==(Fraction& f);
	bool operator!=(Fraction& f);
};