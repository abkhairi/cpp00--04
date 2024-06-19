/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:36:00 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/20 17:45:28 by abkhairi         ###   ########.fr       */
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
}

std::ostream &operator<<(std::ostream &ref_cout , Fixed const &ref_obj)
{
    ref_cout << ref_obj.toFloat();
    return ref_cout;
}

Fixed::Fixed(const int n)
{
    this->fixed_point = n << frac_bit;
}

Fixed::Fixed(const float nbr)
{
    this->fixed_point = roundf(nbr * (1 << frac_bit));
}

Fixed& Fixed::operator=(const Fixed &old)
{
    if (this != &old)
        this->fixed_point = old.getRawBits();
    return (*this);
}

Fixed::Fixed(const Fixed &oldobj)
{
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

//------------------------------ The 6 operator For Compraison-------------------------------
bool Fixed::operator==(const Fixed &old) const
{
    if (this->getRawBits() == old.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator!=(const Fixed &old) const
{
    return(this->getRawBits() != old.getRawBits());
}

bool Fixed::operator>(const Fixed &old) const
{
    return(this->getRawBits() > old.getRawBits());
} 

bool Fixed::operator<(const Fixed &old) const
{
    return(this->getRawBits() < old.getRawBits());
}

bool Fixed::operator>=(const Fixed &old) const
{
    return(this->getRawBits() >= old.getRawBits());
} 

bool Fixed::operator<=(const Fixed &old) const
{
    return(this->getRawBits() <= old.getRawBits());
}

//------------------------------- The 4 operator For arthemic----------------------------
Fixed  Fixed::operator+(const Fixed &old2)
{
    return (this->toFloat() + old2.toFloat());
}

Fixed  Fixed::operator-(const Fixed &old2)
{
    return (this->toFloat() - old2.toFloat());
}

Fixed  Fixed::operator*(const Fixed &old2)
{
    return (this->toFloat() * old2.toFloat());
}

Fixed  Fixed::operator/(const Fixed &old2)
{
    return (this->toFloat() / old2.toFloat());
}
//-----------------------------The 4 increment/decrement---------------
Fixed Fixed::operator++(int) // postfix x++
{
    Fixed tmp;
    //exmple a = b++;
    tmp.fixed_point = this->fixed_point; // tmp = b , this = b
    this->fixed_point++;
    return tmp;
}

Fixed &Fixed::operator++(void) // prefix ++x :
{
    // std::cout<< "fixed a = " << fixed_point << std::endl;
    fixed_point++; // cas de 10  fixed_point = 2560
    //exmple a = ++b;
    //  Modifie et retourne l'objet modifié
    // std::cout<< "fixed ++a= " << fixed_point << std::endl;
    return (*this); //Renvoie une référence vers l'objet modifié (*this = b)
}

Fixed Fixed::operator--(int) // postfix x++
{
    Fixed tmp;
    //exmple a = b++;
    tmp = *this; // tmp = b , this = b
    this->fixed_point--;
    return tmp;
}

Fixed &Fixed::operator--(void) // prefix ++x :
{
    this->fixed_point--; // cas de 10  fixed_point = 
    return (*this); //Renvoie une référence vers l'objet modifié
}

// ---------------------min-------max------------
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{    
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    else
        return b;
}

















// Fixed& Fixed::min( Fixed &a, Fixed &b ) {
//     if ( a.getRawBits() < b.getRawBits() )
//         return a;
//     return b;
// }

// const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
//     if ( a.getRawBits() < b.getRawBits() )
//         return a;
//     return b;
// }

// Fixed& Fixed::max( Fixed &a, Fixed &b ) {
//     if ( a.getRawBits() > b.getRawBits() )
//         return a;
//     return b;
// }

// const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
//     if ( a.getRawBits() > b.getRawBits() )
//         return a;
//     return b;
// }

Fixed::~Fixed()
{
}