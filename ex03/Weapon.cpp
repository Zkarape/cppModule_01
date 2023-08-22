#include "Weapon.hpp"

Weapon::Weapon(const std::string str)
{
    _type = str;
}

const std::string& Weapon::getType() const
{
    return (_type);
}

void    Weapon::setType(const std::string ty)
{
    _type = ty;
}

Weapon::~Weapon() {}