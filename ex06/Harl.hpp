#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstring>

class Harl
{
private:
   void debug(void);
   void info(void);
   void warning(void);
public:
   void error(void);
    Harl();
    ~Harl();
    void complain(std::string level);
};

#endif
