# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diarodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 14:55:44 by diarodri          #+#    #+#              #
#    Updated: 2022/11/08 00:33:30 by diarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# build an executable named
NAME	= libft.a

# define the C compiler to use
CC		= gcc

# compiler flags:
CFLAGS	= -Wall -Wextra -Werror

# define any directories containing header files other than /usr/include
INCLUDE	= libft.h

# Replaces a named file if it already appears in the library. c - Create the archive. r - Insert the files member. s - Write an object-file index into the archive, or update an existing one.
LIB1	= ar -rcs

# used to generate index to archive
LIB2	= ranlib

# To remove a file or directory forcefully
RM		= /bin/rm -f

# define the C source files
SRCS	= ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_tolower.c ft_toupper.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
			ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_itoa.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c

#Below we are replacing the suffix .c of all words in the macro SRCS with the .o suffix
OBJS	= $(SRCS:.c=.o)

BONUS_S	= ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c \
			ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
			ft_swap_bonus.c ft_islower_bonus.c ft_isupper_bonus.c \
			ft_iscntrl_bonus.c ft_isgraph_bonus.c ft_ispunct_bonus.c \
			ft_isspace_bonus.c ft_isblank_bonus.c ft_isxdigit_bonus.c \
			ft_putchar_bonus.c ft_putstr_bonus.c ft_putendl_bonus.c \
			ft_putnbr_bonus.c ft_sqrt_bonus.c ft_strcmp_bonus.c \
			ft_strcpy_bonus.c ft_strncpy_bonus.c ft_strstr_bonus.c \
			ft_strcat_bonus.c ft_strncat_bonus.c ft_strndup_bonus.c
BONUS_O	= $(BONUS_S:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)

bonus:		$(NAME) $(BONUS_O)
			$(LIB1) $(NAME) $(BONUS_O)
			$(LIB2) $(NAME)

# this is a suffix replacement rule for building .o's from .c's it uses automatic variables $<: the name of the prerequisite of the rule (a.c file) and $@: the name of the target of the rule (a.o file)
.c.o:		$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

# 'make clean'  removes all .o and executable files
clean:		$(RM) $(OBJS) $(BONUS_O)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all