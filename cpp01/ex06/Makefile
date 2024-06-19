# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/04 20:47:22 by abkhairi          #+#    #+#              #
#    Updated: 2024/04/04 22:04:59 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=harlFilter

CPP=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

SRC=main.cpp Harl.cpp


OBJ=$(SRC:.cpp=.o)

HEADER = Harl.hpp

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