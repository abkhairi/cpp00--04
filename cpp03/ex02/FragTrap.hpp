/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:22:22 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/25 19:42:38 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string _name);
    FragTrap(const FragTrap &oldobj);
    FragTrap& operator=(const FragTrap &oldobj);
    ~FragTrap();

    void highFivesGuys(void);
};


#endif