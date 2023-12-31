/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarapet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:25:37 by zkarapet          #+#    #+#             */
/*   Updated: 2023/09/04 17:49:12 by zkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon &wp):_wp(wp), _name(name) {}

void    HumanA::attack()
{
    std::cout << _name << " attacks with his " << this->_wp.getType() << std::endl;
}

HumanA::~HumanA() {}
