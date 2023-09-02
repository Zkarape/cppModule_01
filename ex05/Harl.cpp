/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarapet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:16:44 by zkarapet          #+#    #+#             */
/*   Updated: 2023/09/02 19:37:05 by zkarapet         ###   ########.fr       */
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
    std::cout << "You dont put extra cake, you are done!!!\n";
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have extra cake for free, give it to me!!\n";
}

void    Harl::error(void)
{
    std::cout << "I want to speak to the manager now\n";
}

void Harl::complain(std::string level)
{
	int i;

	i = 0;
    void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = (level == "DEBUG") * 0 + (level == "INFO") * 1 + (level == "WARNING") * 2 + (level == "ERROR") * 3;
	(this->*(functions[i]))();
}
