#include "read.h"
#include <iostream>

void intro()
{
    std::cout
        << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n"
        << "* The program is designed to calculate the Ra and uniformity according to the csv file.\n"
        << "*\n"
        << "* It will read the data in csv file.\n"
        << "*\n"
        << "* And calculate the Ra by the formula:\n"
        << "*\n"
        << "* $Ra = \\frac{1}{l} \int_{0}^{l} |y(x)| dx$\n"
        << "* \n"
        << "* And calculate the uniformity by the formula:\n"
        << "*\n"
        << "* $\\tau = (\\delta/D) * 100% $\n"
        << "*\n"
        << "* D means average, \\delta means standard deviation\n"
        << "* \n"
        << "* Created by tseyu\n"
        << "* \n"
        << "* Date: 2023-03-01\n"
        << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n"
        << "\n";
}

