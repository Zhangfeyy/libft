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
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	while(!temp)
	{
		*lst = new;
		return;
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
void * addOne(void * p) {void * r = malloc(sizeof(int)); *(int*)r = *(int*)p + 1; return (r);}
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
	ft_lstdelone(*lst, del);//without content cannot use ft_lstdelone
	*lst = NULL;
}

void freeList(t_list *head) {if (head) freeList((t_list *)head->next); free(head);}


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp_old;
	t_list	*temp_new;
	t_list	**new;
	int cold;
	int cnew;

	if(!lst)
		return (NULL);
	temp_old = lst;

	cold = *(int *)lst->content;

	temp_new = ft_lstnew(f(temp_old->content));

	cnew = *(int *)lst->content;

	new = &temp_new;
	cnew = *(int *)lst->content;

	if (!temp_new)
		return (NULL);
	while (temp_old->next)
	{
		temp_old = temp_old->next;
		temp_new->next = ft_lstnew(f(temp_old->content));
		if (!temp_new->next)
		{
			ft_lstclear(new, del);
			return (NULL);
		}
		temp_new = temp_new->next;
	}
	return (*new);
}

int main()
{
	int total = 0;
	int tab[] = {0, 1, 2, 3};
	t_list * l =  ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));
	t_list * m = ft_lstmap(l, addOne, free);
	total = 0;
	for (int i = 0; i < 4; ++i)
	{
		total += *(int *)l->content;
		l = (t_list *)l->next;
	}
	total = 0;
	while(m)
	{
		total += *(int *)m->content;
		m = (t_list *)m->next;
	}
}