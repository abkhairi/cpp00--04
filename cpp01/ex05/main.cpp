/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:28:12 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/04 22:43:48 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string level;
    Harl obj_harl;

    std::cout << "please entre level : ";
    std::getline(std::cin, level);
    obj_harl.complain(level);
    return 0;
}
