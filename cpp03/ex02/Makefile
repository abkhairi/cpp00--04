# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 14:25:50 by abkhairi          #+#    #+#              #
#    Updated: 2024/04/25 19:50:54 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

all: $(NAME) $(OBJ)

$(NAME): $(OBJ) 
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : re all clean fclean

