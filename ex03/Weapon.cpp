/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarapet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:32:40 by zkarapet          #+#    #+#             */
/*   Updated: 2023/09/02 20:40:33 by zkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};

Weapon::Weapon(const std::string& str):_type(str) {}

std::string Weapon::getType() const
{
    return (_type);
}

void    Weapon::setType(const std::string& ty)
{
    _type = ty;
}

Weapon::~Weapon() {}
