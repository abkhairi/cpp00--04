/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:46:38 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/27 11:12:42 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->name = "pas_name";
    ClapTrap::name = this->name + "_clap_name ";
    this->HitPoint = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
	std::cout<<"DiamondTrap Default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name;
    ClapTrap::name = this->name + "_clap_name ";
    this->HitPoint = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
	std::cout<<"DiamondTrap parametrize constructor called\n";
}

 DiamondTrap::DiamondTrap(const DiamondTrap &oldobj)
 {
    std::cout << "DiamondTrap copy constructor called\n";
    this->name = oldobj.name;
    this->HitPoint = oldobj.HitPoint;
    this->EnergyPoints = oldobj.EnergyPoints;
    this->AttackDamage = oldobj.AttackDamage;
 }

 DiamondTrap& DiamondTrap::operator=(const DiamondTrap &oldobj)
{
    std::cout << "copy assignment operator called"<< std::endl;
    if (this != &oldobj)
    {
        this->name = oldobj.name;
        this->name = oldobj.HitPoint;
        this->name = oldobj.EnergyPoints;
        this->name = oldobj.AttackDamage;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamonTrap name is " << this->name << " Claptrap name " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap called destructor " <<name<< std::endl;
}