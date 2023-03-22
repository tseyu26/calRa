#include "read.h"
#include <iostream>

void intro()
{
    std::cout
        << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n"
        << "* The program is designed to calculate the Ra and uniformity according to the csv file.\n"
        << "*\n"
        << "* And calculate the Ra by the formula:\n"
        << "*\n"
        << "* $Ra = \\frac{1}{l} \int_{0}^{l} |y(x)| dx$\n"
        << "*\n"
        << "* Integration is calculated by the Trapezium method.\n"
        << "*\n"
        << "* And calculate the uniformity by the formula:\n"
        << "*\n"
        << "* $\\tau = (\\delta/D) * 100% $\n"
        << "*\n"
        << "* D means average, \\delta means standard deviation \n"
        << "*\n"
        << "* (Make sure you take the thickness of resist into account!)\n"
        << "*\n"
        << "* Created by tseyu on 3/1/2023\n"
        << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n"
        << "\n";
}

