/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <lgomes-o@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 21:07:59 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/06/22 03:39:01 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = (char *) ft_calloc(len + 1, sizeof(char));
	if (len < start)
		return (sub);
	i = 0;
	while (*(s + i) != '\0' && i < len)
	{
		*(sub + i) = *(s + start);
		i++;
		start++;
	}
	*(sub + i) = '\0';
	return (sub);
}
