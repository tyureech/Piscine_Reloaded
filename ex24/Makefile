# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/06 17:53:57 by mmahasim          #+#    #+#              #
#    Updated: 2019/04/07 15:09:38 by mmahasim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c \
	 ./srcs/ft_strcmp.c ./srcs/ft_strlen.c \
	./srcs/ft_swap.c 

HEADER = ./includes/*.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADER)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(NAME)

clean:
	/bin/rm -f t_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
