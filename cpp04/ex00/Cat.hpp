/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:51:39 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/09 12:30:45 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP 

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

class Cat : public Animal
{
    public:
        Cat();
        std::string getType() const;
        Cat(const Cat &oldobj);
        Cat& operator=(const Cat &oldobj);
        void makeSound() const;
        virtual ~Cat();
};


#endif