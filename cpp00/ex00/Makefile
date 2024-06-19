# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 14:35:42 by abkhairi          #+#    #+#              #
#    Updated: 2024/03/29 21:40:35 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone 

SOURCE = megaphone.cpp 

OBJECTS = $(SOURCE:.cpp=.o)


CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME) $(OBJECTS)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean