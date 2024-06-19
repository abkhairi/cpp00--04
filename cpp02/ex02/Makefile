# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkhairi <abkhairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 12:36:10 by abkhairi          #+#    #+#              #
#    Updated: 2024/04/20 16:40:15 by abkhairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp Fixed.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

all: $(NAME) $(OBJS)

$(NAME): $(OBJS) 
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : re all clean fclean