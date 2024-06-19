/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:51:07 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/11 12:07:13 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
    dmagh = new Brain();
}

Cat& Cat::operator=(const Cat &oldobj)
{
    if (this != &oldobj)
    {
        this->type = oldobj.getType();
        this->dmagh = new Brain();
    }
    return (*this);
}

Cat::Cat(const Cat &oldobj)
{
    *this = oldobj;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete dmagh;
}