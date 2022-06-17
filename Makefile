# Variable Options 
CO = gcc -c
CFLAGS = -Wall -Werror -Wextra
NAME = run
LIB = libft.h
FILES = main.c\
	 ft_isalpha.c\
	 ft_isdigit.c\
	 ft_isalnum.c\
	 ft_isascii.c\
	 ft_isprint.c\
	 ft_strlen.c\
	 ft_memset.c

# Program Rules
all: $(NAME)
	
$(NAME): $(FILES:.c=.o)
	gcc $(CFLAGS) $(FILES:.c=.o) -o $(NAME)

$(FILES:.c=.o): $(FILES) $(LIB)
	gcc -c $(FILES)

# Clean rules
clean:
	rm -rf $(FILES:.c=.o)
fclean:
	rm -rf $(NAME)
re:
	make fclean all
