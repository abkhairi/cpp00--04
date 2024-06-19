/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:51:07 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/09 12:11:05 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &oldobj)
{
    if (this != &oldobj)
        this->type = oldobj.getType();
    return (*this);
}

Cat::Cat(const Cat &oldobj)
{
    std::cout << "Cat copy constructor called\n";
    *this = oldobj;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

std::string Cat::getType() const
{
    return type;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}