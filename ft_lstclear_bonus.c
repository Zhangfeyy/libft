/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:45:33 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/30 20:45:34 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if(!*lst)
		return;
	while ((*lst)->next)
	{
		temp = (*lst)->next;
		(*lst)->next = temp->next;
		ft_lstdelone(temp, del);
	}
	ft_lstdelone(*lst, del);//without content cannot use ft_lstdelone
	*lst = NULL;
}
