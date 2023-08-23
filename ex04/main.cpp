#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

void    replaces1s2(int pos, std::string &s1, const std::string &s2)
{
    for (int i = pos; i < pos + s2.length(); i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {
            s1[i] = s2[j];
        }
    }
}

void replaceAll(std::string filename, const std::string &s1, const std::string &s2)
{
    std::ifstream inputFile(filename);
    std::stringstream buffer;
    std::string fileContents;
    int pos = 0;

    if (inputFile.is_open())
        buffer << inputFile.rdbuf();
    else
    {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return;
    }
    inputFile.close();
    fileContents = buffer.str();
    std::ofstream outFile(filename.append(".replace"));
    if (!outFile)
    {
        std::cerr << "Error opening file " << filename << std::endl;
        return;
    }
    while ((pos = fileContents.find(s1, pos)) != std::string::npos)
    {
        replaces1s2(pos, fileContents, s2);
        pos += s2.length();
    }
    outFile << fileContents;
    outFile.close();
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Enter filename, s1, s2" << std::endl;
    }
    replaceAll(av[1], av[2], av[3]);
}