/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:45:43 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/05 15:20:41 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
    private:
        std::string name;
    public:
        Zombie();
        void set_name(std::string _name);
        void announce();
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif