# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgomes-o <lgomes-o@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 15:25:30 by lgomes-o          #+#    #+#              #
#    Updated: 2022/06/21 16:19:43 by lgomes-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variable Options 
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a
LIB = libft.h

FILES =	 ft_isalpha.c ft_isdigit.c ft_isalnum.c\
	 ft_atoi.c ft_toupper.c ft_tolower.c\
	 ft_isascii.c ft_isprint.c ft_strlen.c\
	 ft_strchr.c ft_strrchr.c ft_strnstr.c\
	 ft_strncmp.c ft_strlcpy.c ft_strlcat.c\
	 ft_bzero.c ft_memset.c ft_memmove.c\
	 ft_memcpy.c ft_memchr.c ft_memcmp.c\
	 ft_calloc.c ft_strdup.c

OBJS = $(FILES:.c=.o)

# Program Rules
all: $(NAME)
	@echo "*--> Program Compiled Sucess! <--*"

# Compile libft.a
$(NAME): $(OBJS) $(LIB)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "*--> libft.a Compiled Sucess! <--*"

# Compile Objects
$(OBJS): $(FILES) $(LIB)
	@gcc $(CFLAGS) -c $(FILES)
	@echo "*--> Objects Compiled Sucess! <--*"

# Clean rules
clean:
	@rm -rf $(OBJS)
	@echo "*--> Cleaning Objects <--*"

fclean:	clean
	@rm -rf $(NAME)
	@echo "*--> Cleaning libft.a <--*"

re:	fclean all
