/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:33:46 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/09 12:30:38 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP 

#include <iostream>


class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual void makeSound() const;
        Animal(const Animal &oldobj);
        Animal& operator=(const Animal &oldobj);
        std::string getType() const;
        virtual ~Animal();
};


#endif