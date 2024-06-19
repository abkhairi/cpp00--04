/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:50:51 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/05 15:20:33 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
   int N = 5;
    Zombie *ptr = zombieHorde(N, "abcd");

    for (int i = 0; i < N; i++)
    {
        ptr[i].announce();
    }
    delete []ptr;
    return 0;
}