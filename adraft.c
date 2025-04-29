#include <stdlib.h>
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