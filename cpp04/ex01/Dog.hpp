/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:43:16 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/11 12:08:01 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP 

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    Brain   *dmagh;
    public:
        Dog();
        Dog(const Dog &oldobj);
        Dog& operator=(const Dog &oldobj);
        void makeSound() const;
        virtual ~Dog();
};


#endif