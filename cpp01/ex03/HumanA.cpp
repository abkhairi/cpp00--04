/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:54:18 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/04 22:24:54 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon): name(_name), weapon(_weapon){}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    
}