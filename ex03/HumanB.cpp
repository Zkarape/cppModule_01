#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name), _wp(nullptr) {}

void    HumanB::attack()
{
    std::cout << _name << " attacks with his " << _wp->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &wp)
{
    _wp = &wp;
}

HumanB::~HumanB() {}
