#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp):_wp(wp), _name(name) {}

void    HumanA::attack()
{
    std::cout << _name << " attacks with his " << this->_wp.getType() << std::endl;
}

HumanA::~HumanA() {}