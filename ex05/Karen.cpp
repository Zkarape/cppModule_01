#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void    Karen::debug(void)
{
    std::cout << "I love to get extra cake (debug)\n";
}

void    Karen::info(void)
{
    std::cout << "You dont put extra cake, you are done!!!\n";
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have extra cake for free, give it to me!!\n";
}

void    Karen::error(void)
{
    std::cout << "I want to speak to the manager now\n";
}

void    Karen::complain(std::string level)
{
    Karen K();
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        
    }
}