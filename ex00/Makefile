# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgeoffra <cgeoffra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 10:44:21 by cgeoffra          #+#    #+#              #
#    Updated: 2024/01/31 16:47:32 by cgeoffra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Megaphone

CC		=	c++ 
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	Megaphone.cpp
OBJS	=	$(SRCS:.cpp=.o)

%.o:%.cpp
		c++ -Wall -Wextra -Werror -std=c++98 -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all
