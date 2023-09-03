#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
private:
    std::string _type;
public:
	Weapon();
    Weapon(const std::string& str);
    ~Weapon();
    std::string getType() const;
    void    setType(const std::string& str);
};

#endif
