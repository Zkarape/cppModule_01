#include "Zombie.hpp"

Zombie::Zombie() 
{
    std::cout << "Default constructor is called\n";
}

Zombie::Zombie(std::string name)
{
    _name = name;
	std::cout << "Zombie object " << _name << " created" << std::endl;
}

void    Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " is destroyed\n";
}