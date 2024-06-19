/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:04:21 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/04 22:04:23 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    std::string s1;
    Harl harlfilter;
    
    if (ac != 2)
    {
        std::cout << "number argument incorrect" << std::endl;
        exit(1);
    }
    s1 = av[1];
    harlfilter.complain(s1);
    return 0;
}