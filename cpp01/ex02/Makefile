# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/31 21:18:50 by abkhairi          #+#    #+#              #
#    Updated: 2024/03/31 21:19:34 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=brain

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
	