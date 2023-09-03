/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarapet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:16:44 by zkarapet          #+#    #+#             */
/*   Updated: 2023/09/03 17:34:26 by zkarapet         ###   ########.fr       */
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

void    Harl::nonofthem(void)
{
    std::cout << "WRONG LEVEL!!!!\n";
}

void Harl::complain(std::string level)
{
	void (Harl::*functions[5])() = {&Harl::nonofthem, &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i;

	i = (level == "DEBUG") * 1 + (level == "INFO") * 2 + (level == "WARNING") * 3 + (level == "ERROR") * 4;
	(this->*(functions[i]))();
}
