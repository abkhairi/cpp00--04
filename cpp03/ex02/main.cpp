/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:11:13 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/25 19:45:17 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main()
{
	ScavTrap	A("A");
	ScavTrap	B("B");
	FragTrap	C("C");

	A.attack("B");
	B.attack("A");
	C.attack("B");
    
	A.takeDamage(20);
	B.takeDamage(30);
    
	B.beRepaired(15);
	A.beRepaired(26);
	
    A.guardGate();
	C.highFivesGuys();
}




/*
Dans votre exercice, lorsqu'un objet ScavTrap est créé,
un objet ClapTrap associé est également construit.
Cela signifie que le constructeur de ClapTrap est appelé avant 
celui de ScavTrap. À l'inverse, lors de la destruction de 
l'objet ScavTrap, le destructeur de ScavTrap est appelé en premier,
suivi du destructeur de ClapTrap.

Pourquoi cet ordre ?

Lorsque vous créez un objet dérivé (ScavTrap dans ce cas),
il est souvent nécessaire d'initialiser l'objet de la classe de base 
(ClapTrap ici) avant d'initialiser l'objet dérivé. 
C'est parce que l'objet dérivé peut dépendre de l'objet 
de la classe de base pour son initialisation.

De même, lors de la destruction,
l'objet de la classe de base est détruit en dernier car
l'objet dérivé peut toujours avoir besoin d'accéder aux membres
de la classe de base pendant sa phase de destruction.
*/

