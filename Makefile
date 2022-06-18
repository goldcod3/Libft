# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgomes-o <lgomes-o@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 15:25:30 by lgomes-o          #+#    #+#              #
#    Updated: 2022/06/18 15:25:33 by lgomes-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variable Options 
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a
LIB = libft.h

FILES =	 ft_isalpha.c ft_isdigit.c ft_isalnum.c\
	 ft_isascii.c ft_isprint.c ft_strlen.c\
	 ft_memset.c

OBJS = $(FILES:.c=.o)

# Program Rules
all: $(NAME)

# Compile libft.a
$(NAME): $(OBJS) $(LIB)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

# Compile Objects
$(OBJS): $(FILES) $(LIB)
	gcc $(CFLAGS) -c $(FILES)

# Clean rules
clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
