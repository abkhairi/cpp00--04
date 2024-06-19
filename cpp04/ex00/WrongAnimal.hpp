/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:09:39 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/12 14:13:15 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        void makeSound() const;
        WrongAnimal(const WrongAnimal &oldobj);
        WrongAnimal& operator=(const WrongAnimal &oldobj);
        std::string getType() const;
        virtual ~WrongAnimal();
};


#endif