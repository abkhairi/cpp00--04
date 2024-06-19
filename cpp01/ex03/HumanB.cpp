/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:02:00 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/04 22:25:58 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name):name(_name), weapon(NULL){}

void HumanB::setWeapon(Weapon &_weapon)
{
    weapon = &_weapon;
}

void    HumanB::attack(void)
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << "no weapon" << std::endl;
}

HumanB::~HumanB()
{
    
}