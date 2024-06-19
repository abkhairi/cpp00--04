# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/31 21:39:52 by abkhairi          #+#    #+#              #
#    Updated: 2024/04/02 16:07:49 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=violence

CPP=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

SRC=main.cpp HumanA.cpp HumanB.cpp Weapon.cpp


OBJ=$(SRC:.cpp=.o)

HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

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
	