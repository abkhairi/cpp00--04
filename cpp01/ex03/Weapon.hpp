/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:54:27 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/05 13:39:35 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string _type);
        const std::string &getType();// cette methode retourne un reference const a la variable
        //member type , elle permet a l utilisateur de recuperer le type d arme sans copie
        void setType(std::string _type1);
        ~Weapon();
};

#endif