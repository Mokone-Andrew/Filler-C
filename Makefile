# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amokone <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/01 01:25:03 by amokone           #+#    #+#              #
#    Updated: 2017/12/02 16:08:36 by amokone          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = amokone

CFLAGS = -Wall -Wextra -Werror

CC = gcc

LIBS = libft/libft.a

INCLUDES = filler.h

SRC = initialise_game.c prepare_move.c make_move.c lst_stuff.c main.c

all: $(NAME)

$(NAME):
	$(MAKE) -C libft/ all
	$(CC) -o $(NAME) $(SRC) $(CFLAGS) $(LIBS)

clean:
	$(MAKE) -C libft/ fclean

fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)

re: fclean all
	$(MAKE) - C libft fclean re
