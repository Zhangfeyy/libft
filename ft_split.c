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

        }
            count++;
        i++;
    }
    if(s[0] == c)
        count--;
    if(s[i - 1] == c)
        count--;
    if(s[0] == c)
}

char    *get_item(char const *s, char c)
{
    unsigned int    count;

    count = 0;
    while(&s)
    {
        if(&s != c)
        {
            while(&s != c)
            {
                count++;
                s++;
            }
            split[j] = constitue()
            if ()
                return();
        }
        s++;
    }
    return (NULL);
}


char    **ft_split(char const *s, char c)
{
    char    **split;
    unsigned int    count;
    unsigned int    j;
    
    split = (char **)malloc((get_len(s, c) + 1) * sizeof(char*));
    if(!split)
        return (NULL);
    j = 0;
    while(&s)
    {
        if(&s != c)
        {
            count = 0;
            while(&s != c)
            {
                count++;
                s++;
            }
            split[j] = constitue()
            if ()
                return();
        }
        s++;
    }
    return (split);
}
