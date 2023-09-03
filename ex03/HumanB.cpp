#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string& name):_name(name) {}

void    HumanB::attack()
{
    if (_wp) {
        std::cout << _name << " attacks with his " << _wp->getType() << std::endl;
    }
}

void    HumanB::setWeapon(Weapon &wp)
{
    _wp = &wp;
}

HumanB::~HumanB() {}
