﻿#include <iostream>
#include "fraction.h"

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");
    int num, denom;
    std::cout << "Введите числитель дроби 1: ";
    std::cin >> num;
    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> denom;
    Fraction f1(num, denom);

    std::cout << "Введите числитель дроби 2: ";
    std::cin >> num;
    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> denom;
    Fraction f2(num, denom);

    Fraction result = f1 + f2;
    std::cout << f1.to_string() << " + " << f2.to_string() << " = " << result.to_string() << '\n';

    result = f1 - f2;
    std::cout << f1.to_string() << " - " << f2.to_string() << " = " << result.to_string() << '\n';

    result = f1 * f2;
    std::cout << f1.to_string() << " * " << f2.to_string() << " = " << result.to_string() << '\n';

    result = f1 / f2;
    std::cout << f1.to_string() << " / " << f2.to_string() << " = " << result.to_string() << '\n';


    std::cout << "++" << f1.to_string() << " * " << f2.to_string() << " = ";
    result = ++f1 * f2;
    std::cout << result.to_string() << '\n';

    std::cout << "Значение дроби 1 = " << f1.to_string() << '\n';


    std::cout << f1.to_string() << "-- * " << f2.to_string() << " = ";
    result = f1-- * f2;
    std::cout << result.to_string() << '\n';


    std::cout << "Значение дроби 1 = " << f1.to_string() << '\n';


	return 0;
}