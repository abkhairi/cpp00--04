# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 14:25:50 by abkhairi          #+#    #+#              #
#    Updated: 2024/04/26 20:28:09 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondtrap

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

all: $(NAME) $(OBJ)

$(NAME): $(OBJ) 
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : re all clean fclean

