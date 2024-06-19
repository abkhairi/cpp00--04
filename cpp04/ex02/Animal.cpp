/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:33:08 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/12 14:16:01 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &oldobj)
{
    std::cout << "Animal copy constructor called\n";
    *this = oldobj;
}

Animal& Animal::operator=(const Animal &oldobj)
{
    if (this != &oldobj)
        this->type = oldobj.getType();
    return (*this);
}


std::string Animal::getType() const
{
    return type;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}