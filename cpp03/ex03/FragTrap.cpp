/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:29:06 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/26 11:21:26 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    this->name = "FragTrap";
    this->HitPoint = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap called default constructor " << std::endl;
}

FragTrap::FragTrap(std::string _name)
{
    this->name = _name;
    this->HitPoint = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap called parametraize constructor " << std::endl;
}

FragTrap::FragTrap(const FragTrap &oldobj)
{
    std::cout << "FragTrap copy constructor called\n";
    *this = oldobj;
}

FragTrap& FragTrap::operator=(const FragTrap &oldobj)
{
    if (this != &oldobj)
    {
        this->name = oldobj.name;
        this->HitPoint = oldobj.HitPoint;
        this->EnergyPoints = oldobj.EnergyPoints;
        this->AttackDamage = oldobj.AttackDamage;
        std::cout << "FragTrap operator = " << name << " called" << std::endl;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout<<"FragTrap "<< name <<" high fives!"<<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}