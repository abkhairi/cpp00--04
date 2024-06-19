/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:49:41 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/09 12:11:48 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &oldobj)
{
    if (this != &oldobj)
        this->type = oldobj.getType();
    return (*this);
}

Dog::Dog(const Dog &oldobj)
{
    std::cout << "Dog copy constructor called\n";
    *this = oldobj;
}

void Dog::makeSound() const
{
    std::cout << "haw haw" << std::endl;
}

std::string Dog::getType() const
{
    return type;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}