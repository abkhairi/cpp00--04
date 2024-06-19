/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:59:47 by abkhairi          #+#    #+#             */
/*   Updated: 2024/03/29 21:33:36 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <iostream>
#include <iomanip>
#include <string>

class Contacts
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        Contacts();
        Contacts(std::string fn, std::string ln, std::string nn, std::string pn, std::string s);
        std::string getLastName();
        std::string getFirstName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
        ~Contacts();
};
     
#endif