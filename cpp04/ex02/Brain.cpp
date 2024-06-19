/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:22:52 by abkhairi          #+#    #+#             */
/*   Updated: 2024/06/19 13:59:53 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
     std::cout<<"Brain default constructor called"<<std::endl;
}

Brain::Brain(const Brain &oldobj)
{
    *this = oldobj;
}

Brain& Brain::operator=(const Brain &oldobj)
{
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = oldobj.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout<<"Brain destructor called"<<std::endl;
}
