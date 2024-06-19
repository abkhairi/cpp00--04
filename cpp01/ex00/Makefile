# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/31 16:57:23 by abkhairi          #+#    #+#              #
#    Updated: 2024/03/31 17:09:00 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Zombie

CPP=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

SRC=main.cpp newZombie.cpp randomChump.cpp Zombie.cpp


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
	