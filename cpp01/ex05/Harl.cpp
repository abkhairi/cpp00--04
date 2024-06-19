/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:03:49 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/04 22:49:38 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level )
{
    int i = 0;
    std::string lv[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*pointer[4])();
    pointer[0] = &Harl::debug;
    pointer[1] = &Harl::info;
    pointer[2] = &Harl::warning;
    pointer[3] = &Harl::error;
    while(i < 4)
    {
        if (lv[i] == level)
            (this->*pointer[i])();
        i++;
    }
    // bool v;
    // while(i < 4)
    // {
    //     v = (lv[i] == level);
    //         v == true ? (this->*pointer[i])() : void();
    //     i++;
    // }
}

Harl::~Harl()
{
	
}