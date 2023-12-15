#pragma once
#include <iostream>
#include <string>
#include <numeric>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator);

	Fraction operator+(Fraction& f);
	Fraction operator-(Fraction& f);
	Fraction operator*(Fraction& f);
	Fraction operator/(Fraction& f);

	Fraction operator++();
	Fraction operator--(int);
	std::string to_string();
};