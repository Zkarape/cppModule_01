#include "Harl.hpp"

int levelToIndex(char *level)
{
    if (strcmp(level, "DEBUG") == 0)
        return (0);
    else if (strcmp(level, "INFO") == 0)
        return (1);
    else if (strcmp(level, "WARNING") == 0)
        return (2);
    else if (strcmp(level, "ERROR") == 0)
        return (3);
    else
        return (-1);
}

int main(int ac, char **av)
{
    Harl K;
    if (ac == 2 && av[1])
    {
        int res = levelToIndex(av[1]);
        switch (res)
        {
        case 0:
            K.complain("DEBUG");
        case 1:
            K.complain("INFO");
        case 2:
            K.complain("WARNING");
        case 3:
            K.complain("ERROR");
            break;
        default:
            std::cerr << "Enter one of the arguments DEBUG, INFO, WARNING, ERROR\n";
            break;
        }
    }
    else
        std::cerr << "Enter one of the arguments DEBUG, INFO, WARNING, ERROR\n";
}
