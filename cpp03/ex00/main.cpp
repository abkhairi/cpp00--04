/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:11:13 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/25 16:41:09 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("ROBOT_B");

    a.attack("ROBOT_B");
    a.takeDamage(0);
    a.beRepaired(10);
    
    b.attack("ROBOT_A");
    b.takeDamage(5);
    b.beRepaired(10);
    return 0;
}
