/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:17:22 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/20 17:39:27 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;        
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl; // a = 0;
    std::cout << ++a << std::endl; // a = 1 donc  1 / (1 << frac_bit) = 0.00390625 
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;
}

/*
    0
    0.00390625
    0.00390625
    0.00390625
    0.0078125
    10.1016
    10.1016
$>*/