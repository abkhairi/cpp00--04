/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:27:00 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/05 15:20:49 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N < 0)
        return NULL;
    Zombie *ptr = new Zombie[N];
    for (int i = 0; i < N ; i++)
    {
        ptr[i].set_name(name);
    }
    return (ptr);
}
