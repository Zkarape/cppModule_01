/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarapet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:22:45 by zkarapet          #+#    #+#             */
/*   Updated: 2023/09/02 19:46:18 by zkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void    Harl::debug(void)
{
    std::cout << "I love to get extra cake (debug)\n";
}

void    Harl::info(void)
{
    std::cout << "You dont put extra cake, you are done!!! (info)\n";
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have extra cake for free, give it to me!! (warning)\n";
}

void    Harl::error(void)
{
    std::cout << "I want to speak to the manager now (error)\n";
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*(functions[i]))();
            return;
        }
    }
    std::cout << "Invalid complaint level: " << level << std::endl;
}
