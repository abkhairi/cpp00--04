/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:24:42 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/25 17:08:40 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "default";
    this->HitPoint = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "ClapTrap called default constructor " << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
    this->name = _name;
    this->HitPoint = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "ClapTrap called constructor parameterized "<< _name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (HitPoint > 0 && EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " 
        << AttackDamage << " points of damage! "<<std::endl;
        EnergyPoints--;
    }
    else
        std::cout << "energy , hit point under zero\n";
}
ClapTrap::ClapTrap(const ClapTrap &oldobj)
{
    *this = oldobj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &oldobj)
{
    std::cout << "copy assignment operator called"<< std::endl;
    if(this != &oldobj)
    {
        this->name = oldobj.name;
        this->name = oldobj.HitPoint;
        this->name = oldobj.EnergyPoints;
        this->name = oldobj.AttackDamage;
    }
    return (*this);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoint)
    {
        if (HitPoint - amount > 0)
        {
            HitPoint -= amount;
            std::cout<<"ClapTrap "<<name<<" has take "<<amount<<" of damage"<<std::endl;
        }
        else
        {
            std::cout<<"ClapTrap "<<name<<" has deid"<<std::endl;
            HitPoint = 0;
        }
    }
    else
    {
        std :: cout << "ClapTrap "<< name <<" is dead " << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) // if hit point = 5 et amount = 4 donc :hitpoint = hitpoint + amount
{
    if (HitPoint < 1)
        std::cout << "clapTrap " << name << " is deid "<< std::endl;
    else if(EnergyPoints < 1)
        std::cout << "clapTrap " << name << " no energy "<< std::endl;
    else
    {
        HitPoint = HitPoint + amount;
        EnergyPoints--;
        std::cout << "claptrap " << this->name << " has repairing " << amount << std::endl;
    }
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap called destructor " <<name<< std::endl;
}
