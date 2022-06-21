/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <lgomes-o@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:55:05 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/06/21 16:20:16 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/*
**  >> Functions of libc
*/

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_atoi(const char *str);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
char		*ft_strnstr(const char *b, const char *s, size_t len);
char		*ft_strdup(const char *s);

size_t		ft_strlcpy(char *d, char *s, size_t size);
size_t		ft_strlcat(char *d, char *s, size_t size);
size_t		ft_strlen(const char *str);

void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *str, int c, size_t n);
void		*ft_memmove(void *d, const void *s, size_t n);
void		*ft_memchr(void *s, int c, size_t n);
void		*ft_memcpy(void *restrict d, const void *restrict s, size_t n);
void		*ft_calloc(size_t count, size_t size);

#endif
