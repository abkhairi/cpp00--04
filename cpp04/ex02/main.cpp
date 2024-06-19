/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:13:52 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/12 14:02:01 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* zoo[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
	}
	for (int i = 0; i < 10; i++)
	{
		zoo[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
	{
		delete zoo[i];
	}
}