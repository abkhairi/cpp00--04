/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:36:05 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/20 16:36:33 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int frac_bit;
    public:
        Fixed(void);
        Fixed(const int nbr); // default constructor 
        Fixed(const float nbr);
        Fixed(const Fixed &oldobj);//A copy constructor
        Fixed& operator=(const Fixed &old); // copy assignment operator overload.
        ~Fixed(); //A destructor.

        float toFloat( void ) const;
        int toInt( void ) const;

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        //The 6 comparison operators >, <, >=, <=, == and !=
        bool operator==(const Fixed &old) const;
        bool operator!=(const Fixed &old) const;
        bool operator>(const Fixed &old) const;
        bool operator<(const Fixed &old) const;
        bool operator>=(const Fixed &old) const;
        bool operator<=(const Fixed &old) const;
        
        //The 4 arithmetic operators: +, -, *, and /.
        Fixed operator+(const Fixed &old2);
        Fixed operator-(const Fixed &old2);
        Fixed operator*(const Fixed &old2);
        Fixed operator/(const Fixed &old2);

        // The 4 increment/decrement ++ -- ++ --
        Fixed& operator++(void);
        Fixed operator++(int);
        Fixed& operator--(void);
        Fixed operator--(int);
        
        // max and min
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);
        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        
};

std::ostream& operator<<(std::ostream &ref_cout , Fixed const &ref_obj);



#endif
