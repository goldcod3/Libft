/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:58:06 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/06/24 18:47:58 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static size_t	count_words(char *str, char d)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == d)
		{
			i++;
		}
		else
		{
			while (*(str + i) != d && *(str + i) != '\0')
				i++;
			words++;
		}
	}
	return (words);
}

static void	put_words(char **spl, char *str, char d, size_t len)
{
	unsigned int	start;
	size_t			end;
	size_t			i;

	start = 0;
	i = 0;
	while (*(str + start) != '\0' && i < len)
	{
		if (*(str + start) != d)
		{	
			end = start;
			while (*(str + (end)) != '\0' && *(str + end) != d)
				end++;
			*(spl + i) = ft_substr(str, start, (end - start));
			start = end;
			i++;
		}
		else
			start++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	w;

	if (s == NULL)
		return (NULL);
	w = count_words((char *)s, c);
	split = (char **) ft_calloc(w + 1, sizeof(char *));
	put_words(split, (char *)s, c, w);
	return (split);
}
/*
int	main(void)
{
	char **ej;

	ej = ft_split("ddHoladcomo_destasssd", 'd');
	printf("%s\n", ej[3]);
	return (0);

}
*/
