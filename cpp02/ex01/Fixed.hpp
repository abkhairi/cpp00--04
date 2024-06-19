/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:02:18 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/20 12:14:09 by abkhairi         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream &ref_cout , Fixed const &ref_obj);


#endif
