/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:09:26 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/09 12:22:51 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called\n";
}


WrongAnimal::WrongAnimal(const WrongAnimal &oldobj)
{
    *this = oldobj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &oldobj)
{
    if (this != &oldobj)
    {
        type = oldobj.type;
    }
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal make WrongAnimal sound\n";
}

std::string WrongAnimal::getType() const
{
    return type;
}


WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}