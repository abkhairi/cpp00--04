# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 15:59:23 by abkhairi          #+#    #+#              #
#    Updated: 2024/03/29 21:35:37 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Contact.cpp PhoneBook.cpp main.cpp 

OBJ = $(SRC:.cpp=.o)

HEADER = Contact.hpp PhoneBook.hpp

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME) $(OBJ)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re : clean fclean

.PHONY : re all clean fclean

