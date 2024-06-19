# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 16:21:16 by abkhairi          #+#    #+#              #
#    Updated: 2024/04/04 22:31:01 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=replce

CPP=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

SRC=main.cpp


OBJ=$(SRC:.cpp=.o)

%.o : %.cpp
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