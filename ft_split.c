/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:43:06 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 20:43:08 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
unsigned int    get_len(char const *s, char c)
{
    unsigned int    i;
    unsigned int    count;
    int swi;

    i = 0;
    count = 1;
    while(s[i])
    {
        if(s[i] == c)
        {
		while(s[i] == c)
			i++;
		count++;
        }
        else
        	i++;
    }
    if(s[0] == c && s[i - 1] == c)
        count = count - 2;
    if(s[0] == c && s[i - 1] != c)
        count--;
    if(s[0] != c && s[i - 1] == c)
        count--;
}

unsigned int    *get_item_len(char const *s, char c, unsigned int i)
{
	unsigned int    count;
	unsigned int	j;

	count = 0;
	while(s[j] != c)
	{
		count++;
                j++;
	}
         return (count);
}

char	*get_item(char const *s, char c, unsigned int *i)
{
	char	*item;
	unsigned int	j;
	
	
	item = (char *)malloc((get_item_len(s, c, i) + 1) * sizeof(char));
	if(!item)
		return (NULL);
	j = 0;
	while(j < get_item_len(s, c, i))
	{
		item[j] = s[*i + j];
		*i++;
		j++;
	}
	item[j] = '\0';
	return (item);
}

void	remove_mem(char **split, unsigned int j)
{
	while(j > 0)
	{
		j--;
		free(split[j]);
	}
	free(split);
}

char    **ft_split(char const *s, char c)
{
    char    **split;
    unsigned int    count;
    unsigned int    i;
    unsigned int    j;
    
    split = (char **)malloc((get_len(s, c) + 1) * sizeof(char*));
    if(!split)
        return (NULL);
    i = 0;
    j = 0;
    while(s[i])
    {
        if(s[i] != c)
        {
            split[j] = get_item(s, c, &i);
            if (!split[j])
            {
            	remove_mem(split, j);
            	return (NULL);
            }
            j++;
        }
        else
        	i++;
    }
    split[j] = NULL;
    return (split);
}
