/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:59:52 by abkhairi          #+#    #+#             */
/*   Updated: 2024/03/30 13:48:17 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string cmd;
    PhoneBook    arry_obj_contact;
    
    std::cout << "\033[1;32mWelcome to the PhoneBook!\033[0m\n";
    std::cout << "\033[1;37mCommands:\033[0m ADD, SEARCH, EXIT\n";
    while(1)
    {
        std::cout << "\033[1;37mEnter command :\033[0m";
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            break ;
        if (cmd == "EXIT")  
        {
            std::cout << "\033[1;30mExiting PhoneBookk. Goodbey!\033[0m\n";
            break ;
        }
        else if (cmd == "ADD")
            arry_obj_contact.promptAddContact();
        else if (cmd == "SEARCH")
            arry_obj_contact.displayContacts_present();
        else
            std::cout << "\033[1;91mInvalid command. Please try again.\033[0m\n";
    }
    return (0);
}