/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:44:07 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/25 18:41:13 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "Robot";
    this->HitPoint = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap called default constructor " << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
    this->name = _name;
    this->HitPoint = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout<<"ScavTrap Parameterised constructor called " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &oldobj)
{
    std::cout << "ScavTrap copy constructor called\n";
    *this = oldobj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &oldobj)
{
    if (this != &oldobj)
    {
        this->name = oldobj.name;
        this->HitPoint = oldobj.HitPoint;
        this->EnergyPoints = oldobj.EnergyPoints;
        this->AttackDamage = oldobj.AttackDamage;
        std::cout << "ScavTrap operator = " << name << " called" << std::endl;
    }
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (HitPoint > 0 && EnergyPoints > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << " , causing " 
        << AttackDamage << " points of damage! "<<std::endl;
        EnergyPoints--;
    }
    else
        std::cout << "ScavTrap "<< name << "energy or hit point under zero\n";
}

void ScavTrap::guardGate()
{
    if (HitPoint  < 1)
        std::cout <<"ScavTrap "<< name << " is deid\n";
    else if (EnergyPoints < 1)
        std::cout << "ScavTrap " << name << " dont have energy\n";
    else
    {
        std::cout << "ScavTrap " << name << " is now in Gate keeper mode\n";
        EnergyPoints--;
    }
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}