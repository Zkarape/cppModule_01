#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i;
    Zombie *zmbs;
    
    i = -1;
    zmbs = new Zombie[N];
    while (++i < N)
        zmbs[i] = Zombie(name);
    return (zmbs);
}
