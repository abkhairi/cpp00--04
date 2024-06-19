/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:49:25 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/12 13:28:42 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat &oldobj)
{
    std::cout << "WrongCat copy constructor called\n";
    *this = oldobj;
}

WrongCat& WrongCat::operator=(const WrongCat &oldobj)
{
    if (this != &oldobj)
    {
        type = oldobj.type;
    }
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Miwwwwwwwww\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}