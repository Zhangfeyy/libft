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
	t_list	*new;

	if(!lst)
		return (NULL);
	temp_old = lst;
	temp_new = ft_lstnew(f(temp_old->content));
	//the problem is here, when i call new again, it will parse the latest address of temp_new
	new = temp_new;
	if (!temp_new)
		return (NULL);
	while (temp_old->next)
	{
		temp_old = temp_old->next;
		temp_new->next = ft_lstnew(f(temp_old->content));
		if (!temp_new->next)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		temp_new = temp_new->next;
	}
	return new;
}
// int main()
// {
// 	int total = 0;
// 	int tab[] = {0, 1, 2, 3};
// 	t_list * l =  ft_lstnew(tab);
// 	for (int i = 1; i < 4; ++i)
// 		ft_lstadd_back(&l, ft_lstnew(tab + i));
// 	t_list * m = ft_lstmap(l, addOne, free);
// 	total = 0;
// 	for (int i = 0; i < 4; ++i)
// 	{
// 		total += *(int *)l->content;
// 		l = (t_list *)l->next;
// 	}
// 	total = 0;
// 	while(m)
// 	{
// 		total += *(int *)m->content;
// 		m = (t_list *)m->next;
// 	}
// }