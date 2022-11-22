# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diarodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 16:55:08 by diarodri          #+#    #+#              #
#    Updated: 2022/11/22 00:24:42 by diarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c\
		ft_putchar.c\
		ft_strlen.c\
		ft_conv_char.c\
		ft_conv_str.c\
		ft_conv_ptr.c\
		ft_conv_nbr.c\
		ft_itoa.c\
		ft_conv_hex.c\
		ft_len_hex_ptr.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
