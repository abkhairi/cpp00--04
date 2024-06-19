/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:24:00 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/26 18:51:15 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    protected:
        std::string name;
        unsigned int HitPoint; // Il représente la santé du ClapTrap et est initialisé à 10.
        unsigned int EnergyPoints; //  Il représente l'énergie du ClapTrap et est initialisé à 10.
        unsigned int AttackDamage; // darar lhojom
    public:
        ClapTrap();
        ClapTrap(std::string _name);
        ClapTrap(const ClapTrap &oldobj);
        ClapTrap& operator=(const ClapTrap &oldobj); // copy assignment operator overload.
        ~ClapTrap();

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif