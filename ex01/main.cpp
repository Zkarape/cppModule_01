#include "Zombie.hpp"

int main()
{
    Zombie  *z;

    z = zombieHorde(3, "ZhenyaIsZombie");
    for (int i = 0; i < 3; i++)
        z[i].announce();
    delete[] z;
    return (0);
}