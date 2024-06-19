/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:00:01 by abkhairi          #+#    #+#             */
/*   Updated: 2024/03/30 13:51:58 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {}

PhoneBook::~PhoneBook(){}

void PhoneBook::promptAddContact()
{
        std::string fname;
        std::string lname;
        std::string n_name;
        std::string p_number;
        std::string secret;
        std::string str;

        str = "";
        while (str == "")
        {
            std::cout << "\033[1;36mFirst name    = \033[0m";
            std::getline(std::cin, str);
            if (std::cin.eof())
                std::exit(0);
            fname = str;
        }
        str = "";
        while (str == "")
        {
            std::cout << "\033[1;36mLast name     = \033[0m";
            std::getline(std::cin, str);
            if (std::cin.eof())
                std::exit(0);
            lname = str;
        }
        str = "";
        while (str == "")
        {
            std::cout << "\033[1;36mnickname      = \033[0m";
            std::getline(std::cin, str);
            if (std::cin.eof())
                std::exit(0);
            n_name = str;
        }
        str = "";
        while (str == "")
        {
            std::cout << "\033[1;36mphoneNumber   = \033[0m";
            std::getline(std::cin, str);
            if (std::cin.eof())
                std::exit(0);
            p_number = str;
        }
        str = "";
        while (str == "")
        {
            std::cout << "\033[1;36mdarkestSecret = \033[0m";
            std::getline(std::cin, str);
            if (std::cin.eof())
                std::exit(0);
            secret = str;
        }
        Contacts obj_new_contact(fname, lname, n_name, p_number, secret);
        add_contact(obj_new_contact);
}


int check_is_nbr(std::string str)
{
    std::size_t pos = str.find_first_not_of("0123456789");
	if(pos != std::string::npos || str.empty())
	{
        // Return 0 if the string is empty or contains non-numeric characters
		std::cout<<"\033[1;91mthe index is not correct\033[0m\n";
		return(0);
	}
        // Return 1 if the string consists only of numeric characters
	return(1);
}

void PhoneBook::add_contact(Contacts obj)
{
        arry_obj_contact[index % 8] = obj;
        index++;
}

int check_index_dis(int contNum, int index)
{
    if (contNum <= 7 && contNum >= 0 && contNum < index)
    {
        return 1;
    }
    else
    {
        std::cout << "\033[1;91mindex out range \033[0m\n";
        return 0;
    }
}
void PhoneBook::displayContacts_present()
{
    int max_contacts = 0;

    if (index > 8)
        max_contacts = 8;
    else if(index <= 8)
        max_contacts = index;
    if (index == 0)
    {
        std::cout << "\033[1;35mcontact is empty please enter command ADD For ADD contact\033[0m \n";
        return ; 
    }
    std::cout << std::setfill('-');
    std::cout <<"+"  << std::setw(11);
    std::cout <<"+"  << std::setw(11);
    std::cout <<"+"  << std::setw(11);
    std::cout <<"+"  << std::setw(11) << "+" << "\n";
    std::cout << std::setfill(' '); 
    std::cout <<"|"  << std::setw(10) << "index" ;
    std::cout <<"|"  << std::setw(10) << "First Name" ;
    std::cout <<"|"  << std::setw(10) << "Last Name" ;
    std::cout <<"|"  << std::setw(10) << "  nickname|" << "\n";
    std::cout << "+-------------------------------------------+";
    for (int i = 0; i < max_contacts; i++)
    {
        std::cout << "\n|" << std::setw(10) << i;
        if (arry_obj_contact[i].getFirstName().length() > 10)
            std::cout << "|" << std::setw(10) << arry_obj_contact[i].getFirstName().substr(0, 9) + ".";
        else
            std::cout << "|" << std::setw(10) << arry_obj_contact[i].getFirstName();
        if(arry_obj_contact[i].getLastName().length() > 10)
            std::cout << "|" << std::setw(10) << arry_obj_contact[i].getLastName().substr(0, 9) + ".";
        else
            std::cout << "|" << std::setw(10) <<arry_obj_contact[i].getLastName();
        if (arry_obj_contact[i].getNickname().length() > 10)
        {
            std::cout << "|" << std::setw(10) << arry_obj_contact[i].getNickname().substr(0, 9) + "." << "|\n";
        }
        else
        {
            std::cout << "|" << std::setw(10) <<arry_obj_contact[i].getNickname() << "|\n";
        }
        std::cout << "+-------------------------------------------+";
    }
    std::string str;
    do {
        std::cout << "\nEnter index you want to display: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            std::exit(0);
    } while (check_is_nbr(str) == 0 || check_index_dis(std::atoi(str.c_str()) , index) == 0);
    int contNum ;
    contNum = std::atoi(str.c_str());
    std::cout << "\033[1;92mfirst name   : \033[0m" << arry_obj_contact[contNum].getFirstName() << "\n";
    std::cout << "\033[1;92mLast Name    : \033[0m" << arry_obj_contact[contNum].getLastName() << "\n";
    std::cout << "\033[1;92mnickname     : \033[0m" << arry_obj_contact[contNum].getNickname() << "\n";
    std::cout << "\033[1;92mphoneNumber  : \033[0m" << arry_obj_contact[contNum].getPhoneNumber() << "\n"; 
    std::cout << "\033[1;92mdarkestSecret: \033[0m" << arry_obj_contact[contNum].getDarkestSecret() << "\n";
}

