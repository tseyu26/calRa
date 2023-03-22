#include "read.h"
#include <vector>
#include <iostream>

/* To calculate the integration of the dots,
 * the author uses Trapezium method to calculate the integration.
 */


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

void changeUnit(std::vector<double>&height, std::vector<double>&length)
{
    for (int i{0}; i<length.size(); i++)
    {
        height[i] = height[i] * 1e-10;
        length[i] = length[i] * 1e-6;
    }
}

double calIntegration(std::vector<double> height,std::vector<double> length)
{
    changeUnit(height, length);
    double tempInt{ 0.0 };
    std::vector<double> tempVal(height);
    abs_csvVal(tempVal);
    //displayVector(temp)
    for (int i{0};i < height.size()-1;i++)
    {
        tempInt = tempInt + 
            (tempVal[i] + tempVal[i+1]) * 0.5 * (length[i+1]-length[i]);
        std::cout << length[i] << std::endl;
    }
    return tempInt;
}

double calRa(std::vector<double> height,std::vector<double> length)
{
    double ra{ 0.0 };
    double tempInt{ 0.0 };
    tempInt = calIntegration(height, length);
    ra = tempInt / ((length[length.size() - 1] - length[0])*1e-6);
    return ra;
}