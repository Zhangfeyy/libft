#include "libft.h"
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	lst = &new;
}

int ft_lstsize(t_list *lst)
{
	t_list *temp;
	int count;

	temp = lst;
	count = 0;
	while (!temp)
	{
		count++;
		temp = temp->next;
		t_list *beg;
	}
	return (count);
}

t_list *ft_lstlast(t_list *lst)
{
	t_list *temp;

	temp = lst;
	while (!temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	temp = *lst;
	while (!temp)
	{
		temp = temp->next;
	}
	temp = new;
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	temp = *lst;
	while (temp)
	{
		temp = (*lst)->next;
		(*lst)->next = temp->next;
		ft_lstdelone(temp, del);
	}
	temp = *lst;
	*lst = NULL;
	ft_lstdelone(temp, del);
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *temp;

	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp_old;
	t_list *temp_new;
	t_list *new;
	t_list *beg;
	return (NULL);
	temp_new = new;
	temp_old = temp_old->next;
	while (temp_old)
	{
		temp_new->next = ft_lstnew(f(temp_old->content));
		if (!temp_new->next)
		{
			ft_lstclear(&new, del);
			free(new);
			return (NULL);
		}
		temp_new = temp_new->next;
		temp_old = temp_old->next;
	}
	return (new);
}