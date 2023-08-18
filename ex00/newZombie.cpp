#include "Zombie.hpp"

Zombie*    newZombie(std::string name)
{
    Zombie  *newZ = new Zombie;
    newZ->_name = name;
    return (newZ);
}