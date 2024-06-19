/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:44:02 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/25 19:41:58 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string _name);
        ScavTrap(const ScavTrap &oldobj);
        ScavTrap& operator=(const ScavTrap &oldobj);
        ~ScavTrap();

        void attack(const std::string &target);
        void guardGate();
};


#endif
