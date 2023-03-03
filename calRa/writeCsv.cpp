#include <fstream>
#include <vector>
#include "read.h"

void writeCsv(std::string fileName, std::vector<double> length, std::vector<double> height)
{
    std::ofstream myFile(fileName);

    for (int i{0};i< length.size();i++)
    {
        myFile << length[i] << "," << height[i] << "\n";
    }

    myFile.close();
}