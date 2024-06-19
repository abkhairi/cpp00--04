/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:00:06 by abkhairi          #+#    #+#             */
/*   Updated: 2024/03/30 13:38:31 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstdlib>
#include <string>

class PhoneBook
{
    private:
        Contacts arry_obj_contact[8];
        int index;
    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact(Contacts obj);
        void promptAddContact();
        void displayContacts_present();
};

#endif