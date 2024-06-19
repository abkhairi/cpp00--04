/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:56:06 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/04 22:29:25 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type){}

const std::string& Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string _type1)
{
    type = _type1;
}

Weapon::~Weapon()
{
}
