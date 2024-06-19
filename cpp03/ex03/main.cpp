/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:11:13 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/27 11:11:17 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"


int	main()
{
	// ClapTrap ob1("Player");
	// ScavTrap ob2("Player2");
	// FragTrap ob3("Player3");
	DiamondTrap ob4("play2");

	// ob1.attack("target1");
	// ob2.attack("target2");
	// ob3.attack("target3");
	// ob4.attack("target3");

	// ob1.takeDamage(5);
	// ob2.takeDamage(26);
	// ob3.takeDamage(90);
	// ob4.takeDamage(5);

	// ob1.beRepaired(5);
	// ob2.beRepaired(10);
	// ob3.beRepaired(28);
	// ob4.beRepaired(1);

	// ob2.guardGate();
	// ob3.highFivesGuys();
	ob4.whoAmI();
	return (0);
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

