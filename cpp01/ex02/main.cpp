/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:18:02 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/05 22:16:18 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "The memory address the string variable = " << &str << std::endl;
    std::cout << "The memory address held by stringPTR   = " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF   = " << &stringREF << std::endl;
    std::cout << "The value of the string variable       = " << str << std::endl;
    std::cout << "The value pointed to by stringPTR      = " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF      = " << stringREF << std::endl;
    return 0;
}