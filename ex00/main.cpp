#include "Zombie.hpp"

int main()
{
    Zombie  *z;

    z = newZombie("Zhenya");
    z->announce();
    randomChump("RadiCue");
    delete z;
    return (0);
}
