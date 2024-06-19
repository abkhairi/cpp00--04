/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:02:36 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/20 16:39:38 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>

class   Fixed{
    private:
        int fixed_point;
        static const int bit;
    public:
        Fixed();
        Fixed(const Fixed &oldobj);
        Fixed& operator=(const Fixed &oldobj);
        ~Fixed();
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

#endif