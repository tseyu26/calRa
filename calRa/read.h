#ifndef _READ_H_
#define _READ_H_

#include <vector>
#include <string>

void intro();
void calUni(std::vector<double> vec);
void writeCsv(std::string fileName, std::vector<double> length, std::vector<double> height);
void abs_csvVal(std::vector<double>& height);
void displayVector(std::vector<double> height);
template <typename T>
T my_Abs(T val)
{
    return val > 0 ? val : -val;
}
#endif

