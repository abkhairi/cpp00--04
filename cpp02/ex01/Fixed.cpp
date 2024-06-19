/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:02:12 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/20 17:37:11 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::frac_bit = 8;

int Fixed::getRawBits(void) const
{
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &ref_cout , Fixed const &ref_obj)
{
    ref_cout << ref_obj.toFloat(); // a.toFloat(); or b.toFloat()
    return ref_cout;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point = n << frac_bit;
    // fixed_point = 10 << 8 ; 10 = 00001010 
    // donc 10 << 8 = 0000101000000000 = 2560 left shfting
    // 2560 / 2^8 = 10; 
}


Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point = roundf(nbr * (1 << frac_bit));
    // if not use roundf() fixed_point = 10859 appearing = 42.41
    // if use roundf fixed_point = 10860 and appearing 42.42 
}

Fixed& Fixed::operator=(const Fixed &old) // old = fixed b
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &old)
        this->fixed_point = old.getRawBits();
    return (*this);
}

Fixed::Fixed(const Fixed &oldobj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = oldobj;
}

int Fixed::toInt( void ) const
{
    return (this->fixed_point / (1 << frac_bit));
}

float Fixed::toFloat( void ) const
{
    return ((float)this->fixed_point / float(1 << this->frac_bit));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}