/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:51:01 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/30 20:51:03 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp_old;
	t_list	*temp_new;
	t_list	**new;

	temp_old = lst;
	temp_new = ft_lstnew(f(temp_old->content));
	*new = temp_new;
	if (temp_new)
		return (NULL);
	while (temp_old->next)
	{
		temp_old = temp_old->next;
		temp_new->next = ft_lstnew(f(temp_old->content));
		if (!temp_new->next)
		{
			ft_lstclear(new, del);
			free(*new);
			free(new);
			return (NULL);
		}
		temp_new = temp_new->next;
	}
	return (*new);
}
