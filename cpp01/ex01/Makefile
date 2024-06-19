# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/31 18:23:08 by abkhairi          #+#    #+#              #
#    Updated: 2024/04/01 11:50:08 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Zombie

CPP=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

SRC=main.cpp Zombie.cpp zombieHorde.cpp


OBJ=$(SRC:.cpp=.o)

HEADER=Zombie.hpp

%.o : %.cpp $(HEADER)
	$(CPP) $(CFLAGS) -c $< -o $@
#[$< ==> %.cpp] . [$@ ==> %.o]

all : $(NAME) $(OBJ)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re : clean all

.PHONY: re all clean fclean
	