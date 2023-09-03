#include "Zombie.hpp"

int main()
{
    Zombie  *z;

    z = newZombie("Zhenya");
    z->announce();
    randomChump("DOC.E");
    delete z;
    return (0);
}
