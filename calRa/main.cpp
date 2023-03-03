#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "read.h"


int main()
{
    intro();
    std::string fileName; // To confirm the file's name.
    std::cout << "Enter the name of the csv file ended with .csv.\n";
    std::cin >> fileName;

    // Let data store in row, then store the in content. 
    std::vector<std::vector<std::string>> content; // Set the vector content with vector row of string 
    std::vector<std::string> row;

    std::string line, element;

    std::fstream file(fileName, std::ios::in); // Open the file.
    if (file.is_open())
    {
        std::cout << "reading...\n\n";
        int countLine{ 0 };
        while (std::getline(file, line))
        {
            if (countLine < 16)   // Ignore the other information by starting from line 16
            {
                row.clear();
                countLine++;
            }else
            {
                row.clear();
                std::stringstream ss(line);   // divide the line

                while (std::getline(ss, element, ',')) // divide ss by ',' 
                {
                    row.push_back(element); 
                }

                content.push_back(row);
            }
        }
    }
    else
    {
        std::cout << "To guarantee the file name is well-spelled!\n";
    }

    std::vector<double> length{};
    std::vector<double> height{};

    for (int i{0}; i < content.size() - 1; i++)
    {
        std::string tmp_1 = content[i][0];
        length.push_back(atof(tmp_1.c_str()));
        std::string tmp_2 = content[i][1];
        height.push_back(atof(tmp_2.c_str()));
    }


    // To examine the correctness of reading the csv
    /*for (int i{0}; i < length.size();i++)
    {
        std::cout << length[i] << "    :    " << height[i] << std::endl;
    }*/

    calUni(height);

    writeCsv("test.csv", length, height);
    std::cin.get();
    std::cin.get();

    return 0;
}