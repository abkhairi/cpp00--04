/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:22:20 by abkhairi          #+#    #+#             */
/*   Updated: 2024/04/06 14:24:13 by abkhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void ft_replacee(size_t pos, std::string &line, std::string s1,std::string s2)
{
    while (true) 
    {
        pos = line.find(s1, pos);
        if (pos == std::string::npos)
            break;
        line.erase(pos, s1.length());  // Erase the occurrence of s1
        line.insert(pos, s2);     // Insert s2 at the position of s1
        pos += s2.length();            // Move past the inserted portion
    }
}
int cas_error()    
{
    std::cerr << "erreur" << std::endl;
    return 1; 
}

int main(int ac, char **av)
{
    std::string s1;
    std::string s2;
    std::string line;
    std::string name_file;

    if (ac != 4)
    {
        std::cout << "number the parametre is not correct" << std::endl;
        return (1);
    }
    s1 = av[2];
    s2 = av[3];
    if (std::strlen(av[1]) == 0 || s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "error check av" << std::endl; 
		return (1);
	}
    
    name_file = av[1];
    std::ifstream reading(av[1]);

    if (reading.is_open())
    {
        name_file.append(".replace");
        std::ofstream writing(name_file); // created fichier sous le nom = name_fichier
        if (writing.is_open())
        {
            while (true) 
            {
                std::getline(reading, line);
            
                size_t pos = 0;
                ft_replacee(pos, line, s1, s2);
                writing << line;              // Write the modified line to the output file
                if (reading.eof())           // Check for end-of-file
                    break;
                writing << std::endl;        // Add a newline after each line
            }
        }
        else
            cas_error();
        writing.close();
    }
    else
        cas_error();
    reading.close();
    return (0);
}
