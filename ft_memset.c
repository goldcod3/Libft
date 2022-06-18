/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <lgomes-o@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:39:16 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/06/18 14:33:12 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= ft_strlen(str))
	{
		while (((unsigned char *)str)[i] != '\0' && (i < n))
		{	
			((unsigned char *)str)[i] = c;
			i++;
		}
	}
	return (str);
}
