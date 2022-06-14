# Variable Options 
CO = gcc -c
CFLAGS = -Wall -Wextra -Werror
NAME = libft
OFILES = main.o ft_strlen.o

# Program Rules
all: $(NAME)
	
libft: main.o ft_strlen.o
	gcc $(CFLAGS) $(OFILES) -o libft

# delete main
main.o: main.c libft.h
	$(CO) main.c

# Functions	rules
ft_strlen.o: ft_strlen.c libft.h
	$(CO) ft_strlen.c

# Clean rules
clean:
	rm -rf $(OFILES)
fclean:
	rm -rf $(NAME)