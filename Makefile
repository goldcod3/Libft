# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgomes-o <lgomes-o@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 15:25:30 by lgomes-o          #+#    #+#              #
#    Updated: 2022/07/01 19:01:01 by lgomes-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


########################
### Variable Options ###
########################

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
	 ft_calloc.c ft_strdup.c ft_substr.c\
	 ft_strjoin.c ft_strtrim.c ft_split.c\
	 ft_itoa.c ft_strmapi.c ft_striteri.c\
	 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	 ft_putnbr_fd.c

B_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
	 ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
	 ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(FILES:.c=.o)

B_OBJS = $(B_FILES:.c=.o)


#####################
### Program Rules ###
#####################

all: $(NAME)
	@echo "*--> Program Compiled Sucess! <--*"

$(NAME): $(OBJS) $(LIB)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "*--> libft.a Compiled Sucess! <--*"

$(OBJS): $(FILES) $(LIB)
	@gcc $(CFLAGS) -c $(FILES)
	@echo "*--> Program Objects Compiled! <--*"


###################
### Bonus Rules ###
###################

bonus: $(OBJS) $(B_OBJS)
	@ar rc $(NAME) $(B_OBJS) $(OBJS)
	@ranlib $(NAME)
	@echo "*--> Bonus Compiled Sucess! <--*"

$(B_OBJS): $(OBJS) $(LIB)
	@gcc $(CFLAGS) -c $(B_FILES)
	@echo "*--> Bonus Objects Compiled! <--*"


###################
### Clean rules ###
###################

clean:
	@rm -rf $(OBJS)
	@rm -rf $(B_OBJS)
	@echo "*--> Cleaning Objects <--*"

fclean:	clean
	@rm -rf $(NAME)
	@echo "*--> Cleaning libft.a <--*"

re:	fclean all

