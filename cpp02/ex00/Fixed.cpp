/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:02:32 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/20 17:29:02 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const Fixed &oldobj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = oldobj; // *this = objet courant 
}

int Fixed::getRawBits( void ) const
{
    std::cout<< "getRawBits member function called" <<std::endl;
    return fixed_point;
}

Fixed& Fixed::operator=(const Fixed &oldobj)
{
    std::cout << "Copy assignment operator called" << std::endl; 
    if (this != &oldobj)
    {
        this->fixed_point = oldobj.getRawBits();
    }
    return *this;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl; 
}