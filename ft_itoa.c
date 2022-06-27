/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <lgomes-o@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:58:12 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/06/27 02:02:23 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_size(int num)
{
	size_t	i;

	i = 1;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num >= 10)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	size_t	i;

	size = ft_get_size(n);
	str = (char *) ft_calloc(size + 1, sizeof(char));
	i = 0;
	if (n < 0)
	{
		*(str + i) = '-';
		n *= -1;
	}
	i = size - 1;
	while (n >= 10)
	{
		*(str + i) = (n % 10) + '0';
		n /= 10;
		i--;
	}
	*(str + i) = (n % 10) + '0';
	return (str);
}
