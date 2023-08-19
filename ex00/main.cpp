#include "Zombie.hpp"

int main()
{
    Zombie  *z;

    z = newZombie(nullptr);
    z->announce();
    randomChump("RadiCue");
    delete z;
    return (0);
}