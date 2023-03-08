#include "read.h"
#include <vector>
#include <iostream>

void abs_csvVal( std::vector<double> &height)
{
    for (int i{0}; i < height.size();i++)
    {
        height[i] = height[i] > 0 ? height[i] : -height[i];
    }
}

void displayVector( std::vector<double> height)
{
    for (int i{ 0 }; i < height.size(); i++)
    {
        std::cout << height[i] << "\n";
    }
}

