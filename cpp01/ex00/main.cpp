/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:01:30 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/05 15:19:45 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  obj("stack");
    obj.announce();
    
    
    Zombie *ptr_t_obj_heap = newZombie("heap");
    ptr_t_obj_heap->announce();
    randomChump("stack1");
    
    delete ptr_t_obj_heap;
    return (0);
}
