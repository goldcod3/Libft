#ifndef _LIBFT_H
#define _LIBFT_H

#include <stdio.h>
#include <limits.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t  ft_strlen(const char *str);
void    *ft_memset(void *str, int c, size_t n);

#endif
