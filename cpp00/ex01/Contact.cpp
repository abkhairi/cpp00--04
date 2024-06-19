/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:59:41 by abkhairi          #+#    #+#             */
/*   Updated: 2024/03/30 13:40:05 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contacts::Contacts()
{

}
Contacts::~Contacts()
{
    
}

Contacts::Contacts(std::string fn, std::string ln, std::string nn, std::string pn, std::string s): firstName(fn), lastName(ln),nickname(nn),phoneNumber(pn),darkestSecret(s)
{
    
}

std::string Contacts::getFirstName()
{
    return (firstName);
}

std::string Contacts::getLastName()
{
    return (lastName);
}
std::string Contacts::getNickname()
{
    return (nickname);
}
std::string Contacts::getPhoneNumber()
{
    return (phoneNumber);
}
std::string Contacts::getDarkestSecret()
{
    return (darkestSecret);
}
