#include <iostream>
#include "read.h"
#include <vector>

void calUni(std::vector<double> vec)
{
    double sum{ 0.0 };
    double sumDeviation{ 0.0 };
    double average{ 0.0 };
    double delta{ 0.0 };

    // change the unit
    for(int i{0};i< vec.size();i++)
    {
        vec[i] = vec[i] * 1.0e-10;
    }

    // calculate the average
    for (int i{0}; i < vec.size(); i++)
    {
        sum += vec[i];
    }

    average = sum / vec.size();

    // search for the min and the max
    for (int j{0}; j < vec.size(); j++)
    {
        sumDeviation += (average - vec[j]) * (average - vec[j]);
    }

    delta = sqrt(sumDeviation / vec.size());

    // std::cout << "The average is " << average << std::endl;
    // std::cout << "The delta is " << delta << std::endl;
    std::cout << "The uniformity is " << (average > 0 ? delta / average :-delta / average) << std::endl;
}