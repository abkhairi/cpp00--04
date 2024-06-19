/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:13:52 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/12 14:11:19 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    const WrongAnimal *wrong = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout<< wrong->getType() << std::endl;
    wrong->makeSound();
    
    delete meta;
    delete j;
    delete i;
    delete wrong;
    return 0;
}