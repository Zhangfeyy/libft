/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:54:26 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 19:54:30 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int check_set(char c, char const *set)
{
    unsigned int i;
    while (set[i])
    {
       if(set[i] == c)
            return(1);
        i++;
    }
    return(0);
}

unsigned int    get_len(char const *s1, char const *set) {
    unsigned int    j;
    unsigned int    k;

    j = 0;
    k = 0;
    while(s1[j])
    {
        if(check_set(s1[j], set))
            k++;
        j++;
    }
    return (j - k);
}

char *ft_strtrim(char const *s1, char const *set) {
    char    *trimmed;
    unsigned int    i;
    unsigned int    j;

    trimmed = (char *)malloc((get_len(s1, set) + 1) * sizeof(char));
    if(trimmed)
        return (NULL);
    i = 0;
    j = 0;
    while(s1[j])
    {
        if(!check_set(s1[j], set))
        {
            trimmed[i] = s1[j];
            i++;
        }
        j++;
    }
    trimmed[i] = '\0';
    return (trimmed);
}