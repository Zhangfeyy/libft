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

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

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
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
// NOTE
// without content cannot use ft_lstdelone
// BUt what if it has a valid next but a NULL content?
// free cannot free the memory in the stack.
int main()
{
	int *a = malloc(sizeof(int));
	*a = 2;
	t_list *new = ft_lstnew((void *)a);
	int check = *((int *)(new->content));
	ft_lstclear(&new, free);
	check = (new == NULL);
}