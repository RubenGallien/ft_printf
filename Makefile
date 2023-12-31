# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgallien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 10:14:28 by rgallien          #+#    #+#              #
#    Updated: 2023/12/13 10:14:29 by rgallien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

LIBFT = libft.a 

SRC	= ft_printf.c \
ft_print_unbr.c \
ft_print_str.c \
ft_print_nbr.c \
ft_print_hex.c \
ft_print_char.c

OBJ	= $(SRC:.c=.o)

CC	= cc
CFLAGS	= -Wall -Wextra -Werror


all	: $(NAME)

$(NAME)	: start $(OBJ)
	ar rcs $(NAME) $(OBJ)


%.o	: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

start :
	make -C libft 
	cp libft/libft.a .
	mv libft.a $(NAME)
	make fclean -C libft


clean	:
	rm -f $(OBJ)

fclean	:
	rm -f $(NAME) $(OBJ)

re	: fclean all

