/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:00:44 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/04 22:26:06 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string _name);
        void    attack();
        void setWeapon(Weapon &_weapon);
        ~HumanB();  
};

#endif