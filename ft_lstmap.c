/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <lgomes-o@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:50:24 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/07/01 02:21:42 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*get_newlst(t_list *old, void *cont)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = cont;
	new->next = old->next;
	return (new);
}	

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	newlst = get_newlst(lst, f(lst->content));
	tmp = newlst;
	while (lst->next != NULL)
	{
		lst = lst->next;
		newlst = get_newlst(lst, f(lst->content));
		if (tmp == NULL)
		{
			del(tmp->content);
			free(tmp);
			return (NULL);
		}
	}
	return (tmp);
}
