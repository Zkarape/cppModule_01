#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstring>

class Karen
{
private:
   void debug(void);
   void info(void);
   void warning(void);
public:
   void error(void);
    Karen();
    ~Karen();
    void complain(std::string level);
};

#endif