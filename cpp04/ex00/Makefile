# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 12:13:50 by abkhairi          #+#    #+#              #
#    Updated: 2024/06/09 12:09:02 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
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

