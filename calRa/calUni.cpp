#include "read.h"
#include <vector>


void calUni(std::vector<double> vec)
{
    double sum{ 0 };
    for (int i{0}; i < vec.size();i++)
    {
        sum += vec[i];
    }
}