#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *_wp;
    std::string _name;
public:
	HumanB();
    HumanB(const std::string& name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon& wp);
};

#endif
