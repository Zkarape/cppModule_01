#include <iostream>
#include <iomanip>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPtr = &string;
    std::string &stringRef = string;

    std::cout << "Memory address of the string: " << &string << std::endl;
    std::cout << "Memory address held by stringPtr: " << stringPtr << std::endl;
    std::cout << "Memory address held by stringRef: " << &stringRef << std::endl;

    std::cout << "The value of string variable: " << string << std::endl;
    std::cout << "The value of stringPtr variable: " << *stringPtr << std::endl;
    std::cout << "The value of stringRef variable: " << stringRef << std::endl;
}