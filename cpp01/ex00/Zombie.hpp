/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:53:10 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/05 15:16:44 by abkhairi         ###   ########.fr       */
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
        Zombie(std::string _name);
        void announce(void);
        ~Zombie();
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif