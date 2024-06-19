/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:49:23 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/12 14:13:26 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        void makeSound() const;
        WrongCat(const WrongCat &oldobj);
        WrongCat& operator=(const WrongCat &oldobj);
        virtual ~WrongCat();
};


#endif