#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &_wp;
    std::string _name;
public:
    HumanA(const std::string& name, Weapon &wp);
    ~HumanA();
    void    attack();
};

#endif
