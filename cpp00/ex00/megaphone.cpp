/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:25 by abkhairi          #+#    #+#             */
/*   Updated: 2024/03/30 13:52:21 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;
	int len;
	int len_str;

	i = 1;
	len = ac - 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	while (len >= i)
	{
		std::string str;
		str = av[i];
		len_str = str.size();
		j = 0;
		while (j < len_str)
		{
			str[j] = std::toupper(str[j]);
			j++;
		}
		std::cout << str;
		i++;
	}
	std::cout <<"\n";
	return (0);
}
