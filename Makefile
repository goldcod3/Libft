# Variable Options 
CO = gcc -c
CFLAGS = -Wall -Werror -Wextra
NAME = run
OFILES = main.o ft_isalpha.o ft_isdigit.o  ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o

# Program Rules
all: $(NAME)
	
$(NAME): main.o $(OFILES)
	gcc $(CFLAGS) $(OFILES) -o $(NAME)

# delete main
main.o: main.c libft.h
	$(CO) main.c

# Functions	rules
ft_isalpha.o: ft_isalpha.c libft.h
	$(CO) ft_isalpha.c

ft_isdigit.o: ft_isdigit.c libft.h
	$(CO) ft_isdigit.c

ft_isalnum.o: ft_isalnum.c libft.h
	$(CO) ft_isalnum.c

ft_isascii.o: ft_isascii.c libft.h
	$(CO) ft_isascii.c

ft_isprint.o: ft_isprint.c libft.h
	$(CO) ft_isprint.c

ft_strlen.o: ft_strlen.c libft.h
	$(CO) ft_strlen.c



# Clean rules
clean:
	rm -rf $(OFILES)
fclean:
	rm -rf $(NAME)
re:
	make fclean
	make all